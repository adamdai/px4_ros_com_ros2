// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multi_rtd_interfaces:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__TRAITS_HPP_
#define MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__TRAITS_HPP_

#include "multi_rtd_interfaces/msg/robot_trajectory__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<multi_rtd_interfaces::msg::RobotTrajectory>()
{
  return "multi_rtd_interfaces::msg::RobotTrajectory";
}

template<>
struct has_fixed_size<multi_rtd_interfaces::msg::RobotTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_rtd_interfaces::msg::RobotTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_rtd_interfaces::msg::RobotTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__TRAITS_HPP_
