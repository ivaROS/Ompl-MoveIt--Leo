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
 * Auto-generated by genmsg_cpp from file /home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_msgs/msg/PlannerInterfaceDescription.msg
 *
 */


#ifndef MOVEIT_MSGS_MESSAGE_PLANNERINTERFACEDESCRIPTION_H
#define MOVEIT_MSGS_MESSAGE_PLANNERINTERFACEDESCRIPTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace moveit_msgs
{
template <class ContainerAllocator>
struct PlannerInterfaceDescription_
{
  typedef PlannerInterfaceDescription_<ContainerAllocator> Type;

  PlannerInterfaceDescription_()
    : name()
    , planner_ids()  {
    }
  PlannerInterfaceDescription_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , planner_ids(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _planner_ids_type;
  _planner_ids_type planner_ids;




  typedef boost::shared_ptr< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct PlannerInterfaceDescription_

typedef ::moveit_msgs::PlannerInterfaceDescription_<std::allocator<void> > PlannerInterfaceDescription;

typedef boost::shared_ptr< ::moveit_msgs::PlannerInterfaceDescription > PlannerInterfaceDescriptionPtr;
typedef boost::shared_ptr< ::moveit_msgs::PlannerInterfaceDescription const> PlannerInterfaceDescriptionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea5f6e6129aa1b110ccda9900d2bf25e";
  }

  static const char* value(const ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea5f6e6129aa1b11ULL;
  static const uint64_t static_value2 = 0x0ccda9900d2bf25eULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/PlannerInterfaceDescription";
  }

  static const char* value(const ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The name of the planner interface\n\
string name\n\
\n\
# The names of the planner ids within the interface\n\
string[] planner_ids\n\
\n\
";
  }

  static const char* value(const ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.planner_ids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PlannerInterfaceDescription_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::PlannerInterfaceDescription_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "planner_ids[]" << std::endl;
    for (size_t i = 0; i < v.planner_ids.size(); ++i)
    {
      s << indent << "  planner_ids[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.planner_ids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_PLANNERINTERFACEDESCRIPTION_H
