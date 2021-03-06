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
 * Auto-generated by genmsg_cpp from file /home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_msgs/srv/GetStateValidity.srv
 *
 */


#ifndef MOVEIT_MSGS_MESSAGE_GETSTATEVALIDITYRESPONSE_H
#define MOVEIT_MSGS_MESSAGE_GETSTATEVALIDITYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_msgs/ContactInformation.h>
#include <moveit_msgs/CostSource.h>
#include <moveit_msgs/ConstraintEvalResult.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct GetStateValidityResponse_
{
  typedef GetStateValidityResponse_<ContainerAllocator> Type;

  GetStateValidityResponse_()
    : valid(false)
    , contacts()
    , cost_sources()
    , constraint_result()  {
    }
  GetStateValidityResponse_(const ContainerAllocator& _alloc)
    : valid(false)
    , contacts(_alloc)
    , cost_sources(_alloc)
    , constraint_result(_alloc)  {
    }



   typedef uint8_t _valid_type;
  _valid_type valid;

   typedef std::vector< ::moveit_msgs::ContactInformation_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::ContactInformation_<ContainerAllocator> >::other >  _contacts_type;
  _contacts_type contacts;

   typedef std::vector< ::moveit_msgs::CostSource_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::CostSource_<ContainerAllocator> >::other >  _cost_sources_type;
  _cost_sources_type cost_sources;

   typedef std::vector< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >::other >  _constraint_result_type;
  _constraint_result_type constraint_result;




  typedef boost::shared_ptr< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct GetStateValidityResponse_

typedef ::moveit_msgs::GetStateValidityResponse_<std::allocator<void> > GetStateValidityResponse;

typedef boost::shared_ptr< ::moveit_msgs::GetStateValidityResponse > GetStateValidityResponsePtr;
typedef boost::shared_ptr< ::moveit_msgs::GetStateValidityResponse const> GetStateValidityResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/hydro/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/leo/Dropbox/Thesis/Projects/moveitNEW/devel/share/moveit_msgs/msg', '/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/hydro/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/hydro/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/hydro/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/hydro/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/hydro/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e326fb22b7448f29c0e726d9270d9929";
  }

  static const char* value(const ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe326fb22b7448f29ULL;
  static const uint64_t static_value2 = 0xc0e726d9270d9929ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/GetStateValidityResponse";
  }

  static const char* value(const ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool valid\n\
ContactInformation[] contacts\n\
CostSource[] cost_sources\n\
ConstraintEvalResult[] constraint_result\n\
\n\
\n\
================================================================================\n\
MSG: moveit_msgs/ContactInformation\n\
# Standard ROS header contains information \n\
# about the frame in which this \n\
# contact is specified\n\
Header header\n\
\n\
# Position of the contact point\n\
geometry_msgs/Point position\n\
\n\
# Normal corresponding to the contact point\n\
geometry_msgs/Vector3 normal \n\
\n\
# Depth of contact point\n\
float64 depth\n\
\n\
# Name of the first body that is in contact\n\
# This could be a link or a namespace that represents a body\n\
string contact_body_1\n\
uint32 body_type_1\n\
\n\
# Name of the second body that is in contact\n\
# This could be a link or a namespace that represents a body\n\
string contact_body_2\n\
uint32 body_type_2\n\
\n\
uint32 ROBOT_LINK=0\n\
uint32 WORLD_OBJECT=1\n\
uint32 ROBOT_ATTACHED=2\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: moveit_msgs/CostSource\n\
# The density of the cost source\n\
float64 cost_density\n\
\n\
# The volume of the cost source is represented as an\n\
# axis-aligned bounding box (AABB)\n\
# The AABB is specified by two of its opposite corners\n\
\n\
geometry_msgs/Vector3 aabb_min\n\
\n\
geometry_msgs/Vector3 aabb_max\n\
\n\
================================================================================\n\
MSG: moveit_msgs/ConstraintEvalResult\n\
# This message contains result from constraint evaluation\n\
# result specifies the result of constraint evaluation \n\
# (true indicates state satisfies constraint, false indicates state violates constraint)\n\
# if false, distance specifies a measure of the distance of the state from the constraint\n\
# if true, distance is set to zero\n\
bool result\n\
float64 distance\n\
\n\
";
  }

  static const char* value(const ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.valid);
      stream.next(m.contacts);
      stream.next(m.cost_sources);
      stream.next(m.constraint_result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetStateValidityResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::GetStateValidityResponse_<ContainerAllocator>& v)
  {
    s << indent << "valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valid);
    s << indent << "contacts[]" << std::endl;
    for (size_t i = 0; i < v.contacts.size(); ++i)
    {
      s << indent << "  contacts[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::ContactInformation_<ContainerAllocator> >::stream(s, indent + "    ", v.contacts[i]);
    }
    s << indent << "cost_sources[]" << std::endl;
    for (size_t i = 0; i < v.cost_sources.size(); ++i)
    {
      s << indent << "  cost_sources[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::CostSource_<ContainerAllocator> >::stream(s, indent + "    ", v.cost_sources[i]);
    }
    s << indent << "constraint_result[]" << std::endl;
    for (size_t i = 0; i < v.constraint_result.size(); ++i)
    {
      s << indent << "  constraint_result[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::ConstraintEvalResult_<ContainerAllocator> >::stream(s, indent + "    ", v.constraint_result[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GETSTATEVALIDITYRESPONSE_H
