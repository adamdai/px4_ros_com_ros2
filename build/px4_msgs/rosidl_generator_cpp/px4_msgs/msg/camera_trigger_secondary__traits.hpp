// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/CameraTriggerSecondary.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__CAMERA_TRIGGER_SECONDARY__TRAITS_HPP_
#define PX4_MSGS__MSG__CAMERA_TRIGGER_SECONDARY__TRAITS_HPP_

#include "px4_msgs/msg/camera_trigger_secondary__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<px4_msgs::msg::CameraTriggerSecondary>()
{
  return "px4_msgs::msg::CameraTriggerSecondary";
}

template<>
struct has_fixed_size<px4_msgs::msg::CameraTriggerSecondary>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::CameraTriggerSecondary>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::CameraTriggerSecondary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__CAMERA_TRIGGER_SECONDARY__TRAITS_HPP_
