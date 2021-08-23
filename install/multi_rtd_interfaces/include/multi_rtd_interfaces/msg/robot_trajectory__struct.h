// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multi_rtd_interfaces:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__STRUCT_H_
#define MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_name'
#include "rosidl_generator_c/string.h"
// Member 'trajectory'
#include "trajectory_msgs/msg/joint_trajectory__struct.h"

// Struct defined in msg/RobotTrajectory in the package multi_rtd_interfaces.
typedef struct multi_rtd_interfaces__msg__RobotTrajectory
{
  rosidl_generator_c__String robot_name;
  trajectory_msgs__msg__JointTrajectory trajectory;
} multi_rtd_interfaces__msg__RobotTrajectory;

// Struct for a sequence of multi_rtd_interfaces__msg__RobotTrajectory.
typedef struct multi_rtd_interfaces__msg__RobotTrajectory__Sequence
{
  multi_rtd_interfaces__msg__RobotTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_rtd_interfaces__msg__RobotTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__STRUCT_H_
