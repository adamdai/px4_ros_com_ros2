// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from multi_rtd_interfaces:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "multi_rtd_interfaces/msg/robot_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace multi_rtd_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotTrajectory_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) multi_rtd_interfaces::msg::RobotTrajectory(_init);
}

void RobotTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<multi_rtd_interfaces::msg::RobotTrajectory *>(message_memory);
  typed_message->~RobotTrajectory();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotTrajectory_message_member_array[2] = {
  {
    "robot_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_rtd_interfaces::msg::RobotTrajectory, robot_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_rtd_interfaces::msg::RobotTrajectory, trajectory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotTrajectory_message_members = {
  "multi_rtd_interfaces::msg",  // message namespace
  "RobotTrajectory",  // message name
  2,  // number of fields
  sizeof(multi_rtd_interfaces::msg::RobotTrajectory),
  RobotTrajectory_message_member_array,  // message members
  RobotTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotTrajectory_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace multi_rtd_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_rtd_interfaces::msg::RobotTrajectory>()
{
  return &::multi_rtd_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multi_rtd_interfaces, msg, RobotTrajectory)() {
  return &::multi_rtd_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
