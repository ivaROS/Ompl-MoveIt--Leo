/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_msgs/srv/GetConstraintAwarePositionIK.srv
 *
 */


#ifndef MOVEIT_MSGS_MESSAGE_GETCONSTRAINTAWAREPOSITIONIK_H
#define MOVEIT_MSGS_MESSAGE_GETCONSTRAINTAWAREPOSITIONIK_H

#include <ros/service_traits.h>


#include <moveit_msgs/GetConstraintAwarePositionIKRequest.h>
#include <moveit_msgs/GetConstraintAwarePositionIKResponse.h>


namespace moveit_msgs
{

struct GetConstraintAwarePositionIK
{

typedef GetConstraintAwarePositionIKRequest Request;
typedef GetConstraintAwarePositionIKResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetConstraintAwarePositionIK
} // namespace moveit_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::moveit_msgs::GetConstraintAwarePositionIK > {
  static const char* value()
  {
    return "9d77c923462bf6a8c411e685f149e1da";
  }

  static const char* value(const ::moveit_msgs::GetConstraintAwarePositionIK&) { return value(); }
};

template<>
struct DataType< ::moveit_msgs::GetConstraintAwarePositionIK > {
  static const char* value()
  {
    return "moveit_msgs/GetConstraintAwarePositionIK";
  }

  static const char* value(const ::moveit_msgs::GetConstraintAwarePositionIK&) { return value(); }
};


// service_traits::MD5Sum< ::moveit_msgs::GetConstraintAwarePositionIKRequest> should match 
// service_traits::MD5Sum< ::moveit_msgs::GetConstraintAwarePositionIK > 
template<>
struct MD5Sum< ::moveit_msgs::GetConstraintAwarePositionIKRequest>
{
  static const char* value()
  {
    return MD5Sum< ::moveit_msgs::GetConstraintAwarePositionIK >::value();
  }
  static const char* value(const ::moveit_msgs::GetConstraintAwarePositionIKRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::moveit_msgs::GetConstraintAwarePositionIKRequest> should match 
// service_traits::DataType< ::moveit_msgs::GetConstraintAwarePositionIK > 
template<>
struct DataType< ::moveit_msgs::GetConstraintAwarePositionIKRequest>
{
  static const char* value()
  {
    return DataType< ::moveit_msgs::GetConstraintAwarePositionIK >::value();
  }
  static const char* value(const ::moveit_msgs::GetConstraintAwarePositionIKRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::moveit_msgs::GetConstraintAwarePositionIKResponse> should match 
// service_traits::MD5Sum< ::moveit_msgs::GetConstraintAwarePositionIK > 
template<>
struct MD5Sum< ::moveit_msgs::GetConstraintAwarePositionIKResponse>
{
  static const char* value()
  {
    return MD5Sum< ::moveit_msgs::GetConstraintAwarePositionIK >::value();
  }
  static const char* value(const ::moveit_msgs::GetConstraintAwarePositionIKResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::moveit_msgs::GetConstraintAwarePositionIKResponse> should match 
// service_traits::DataType< ::moveit_msgs::GetConstraintAwarePositionIK > 
template<>
struct DataType< ::moveit_msgs::GetConstraintAwarePositionIKResponse>
{
  static const char* value()
  {
    return DataType< ::moveit_msgs::GetConstraintAwarePositionIK >::value();
  }
  static const char* value(const ::moveit_msgs::GetConstraintAwarePositionIKResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GETCONSTRAINTAWAREPOSITIONIK_H
