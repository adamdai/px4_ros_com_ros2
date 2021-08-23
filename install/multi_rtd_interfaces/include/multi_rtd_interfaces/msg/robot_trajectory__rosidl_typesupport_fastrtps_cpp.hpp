// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from multi_rtd_interfaces:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "multi_rtd_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "multi_rtd_interfaces/msg/robot_trajectory__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace multi_rtd_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_rtd_interfaces
cdr_serialize(
  const multi_rtd_interfaces::msg::RobotTrajectory & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_rtd_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multi_rtd_interfaces::msg::RobotTrajectory & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_rtd_interfaces
get_serialized_size(
  const multi_rtd_interfaces::msg::RobotTrajectory & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_rtd_interfaces
max_serialized_size_RobotTrajectory(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace multi_rtd_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_rtd_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_rtd_interfaces, msg, RobotTrajectory)();

#ifdef __cplusplus
}
#endif

#endif  // MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
