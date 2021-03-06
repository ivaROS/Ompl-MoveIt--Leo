/*********************************************************************
* Software License Agreement (BSD License)
*
*  Copyright (c) 2010, Rice University
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   * Redistributions in binary form must reproduce the above
*     copyright notice, this list of conditions and the following
*     disclaimer in the documentation and/or other materials provided
*     with the distribution.
*   * Neither the name of the Rice University nor the names of its
*     contributors may be used to endorse or promote products derived
*     from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
*  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
*  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
*  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
*  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
*  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*********************************************************************/

/* Author: Leo Keselman */

/*
	This file defines the ManipulatorStateSpace which inherits from CompoundStateSpace
	This state space is meant to be used for manipulators where Jacobian and
	FK information is available
*/

#ifndef OMPL_BASE_SPACES_MANIPULATOR_STATE_SPACE_
#define OMPL_BASE_SPACES_MANIPULATOR_STATE_SPACE_

#include "ompl/base/StateSpace.h"
#include "ompl/base/spaces/SE3StateSpace.h"

#include "ManipulatorState.h"

#include <Eigen/Core>
#include <Eigen/LU>

namespace ompl
{
    namespace base
    {

	/** \brief A sampler for the Manipulator State Space (joint space sample) */
	class ManipulatorStateSampler : public StateSampler
        {
        public:
    
            ManipulatorStateSampler(const StateSpace *space) : StateSampler(space)
            {
            }
    
            virtual void sampleUniform(State *state);
	    virtual void sampleUniformNear(State *state, const State *near, const double distance);
            virtual void sampleGaussian(State *state, const State *mean, const double stdDev);
        };

        /** \brief A state space representing Manipulators -> A subspace of R^n for joint state and SE3 for end-effector state */
        class ManipulatorStateSpace : public CompoundStateSpace
        {
        public:
            /** \brief A state in Manipulator space: joint config = (a1, a2, ... , an), end-effector config = (x, y, z, w) */
            class StateType : public CompoundStateSpace::StateType
            {
            public:
		/** \brief State constructor which initializes joint values to NULL (not known) */
                StateType(void) : CompoundStateSpace::StateType()
                {
                }

		/** \brief Get the SE3 component of the state. Can be modified with SE3 state space */
		SE3StateSpace::StateType& endEffectorPose(void)
		{
		    return *as<SE3StateSpace::StateType>(1);
		}

		/** \brief Get the SE3 component of the state. */
                const SE3StateSpace::StateType& endEffectorPose(void) const
                {
                    return *as<SE3StateSpace::StateType>(1);
                }

		/** \brief Get the Rn component of the state. Can be modified*/
                RealVectorStateSpace::StateType& jointConfig(void)
                {
                    return *as<RealVectorStateSpace::StateType>(0);
                }

		/** \brief Get the Rn component of the state.*/
                const RealVectorStateSpace::StateType& jointConfig(void) const
                {
                    return *as<RealVectorStateSpace::StateType>(0);
                }

		/** \brief Set joint state of particular joint  NO CHECK IF WITHIN BOUND*/
		void setJoints(double desiredJointValue, int index)
		{
		    as<RealVectorStateSpace::StateType>(0)->values[index] = desiredJointValue;
		}

		/** \brief Get state of joint at particular index */
		double getJoints(int index) const
		{
			return as<RealVectorStateSpace::StateType>(0)->values[index];
		}

		//These class variables define whether the joint config or eef pose of a given state
		//is actually known and is used to defined how interpolation and other functions
		//are actually computed
		bool eefPoseKnown;
		bool jointConfigKnown;

            };

	    /** \brief A manipulator state space includes a joint space and an end-effector space */
            ManipulatorStateSpace(unsigned int jointSpaceSize) : CompoundStateSpace()
            {
                setName("Manipulator" + getName());
                	//type_ = STATE_SPACE_MANIPULATOR;
		manipulatorDimension_ = jointSpaceSize;
		//add the real vector and se3 state spaces as subspaces
                addSubspace(StateSpacePtr(new RealVectorStateSpace(manipulatorDimension_)), 1.0);
                addSubspace(StateSpacePtr(new SE3StateSpace()), 1.0);
                lock();
            }

            virtual ~ManipulatorStateSpace(void)
            {
            }

            /** \copydoc RealVectorStateSpace::setBounds() */
            void setBounds(const RealVectorBounds &bounds)
            {
                as<RealVectorStateSpace>(0)->setBounds(bounds);
            }

            /** \copydoc RealVectorStateSpace::getBounds() */
            const RealVectorBounds& getBounds(void) const
            {
                return as<RealVectorStateSpace>(0)->getBounds();
            }

	    /** \brief Set the manipulator state object (for Jacobian, forward kinematics) */
	    void setManipulatorStatePtr(ManipulatorState* manipulatorState)
	    {
		manipulatorState_ = manipulatorState;
	    }

	    /** \brief Get the dimension of the state space (manipulator dimension) */
	    virtual unsigned int getDimension(void) const
	    {
		return manipulatorDimension_;
	    }

	    void setup(void);
	    void copyState(State *destination, const State *source) const;

	    void calculateEefPose(State* state);
	    Eigen::VectorXd getEefPose(const State* state) const;
	    Eigen::MatrixXd getJacobian(const State *state) const;

	    virtual double getMaximumExtent(void) const;

	    void setJoints(State *state, Eigen::VectorXd desiredJointValues) const;
	    void setJoints(State *state, std::vector<double> desiredJointValues) const;
	    std::vector<double> getJoints(const State *state) const;
	    Eigen::VectorXd getEigenJoints(const State *state) const;

	    virtual double distance(const State *state1, const State *state2) const;
	    virtual void interpolate(const State *from, const State *to, const double t, State *state) const;
	    bool equalStates(const State *state1, const State *state2) const;

            virtual State* allocState(void) const;
            virtual void freeState(State *state) const;
	    virtual StateSamplerPtr allocDefaultStateSampler(void) const;

	    virtual void printState(const State *state, std::ostream &out) const;

	    bool satisfiesBounds(const State *state) const;

            virtual void registerProjections(void);

	protected:

	    Eigen::MatrixXd getPseudoInvJacobian(const State *inputState) const;
	    std::vector<double> getEulerAngles(const SO3StateSpace::StateType* inputSO3) const;
	    Eigen::VectorXd getQuaternion(const double rX, const double rY, const double rZ) const;

	    //Here is a pointer to the manipulator state for ik, fk...needs to be implemented differetly as described in
	    //ManipulatorState.h
	    ManipulatorState* manipulatorState_;
	    //This is the number of degrees of freedom of the manipulator
	    unsigned int manipulatorDimension_;
        };
    }
}

#endif
