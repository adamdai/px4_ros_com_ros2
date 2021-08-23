// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OffboardControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__OFFBOARD_CONTROL_MODE__STRUCT_H_
#define PX4_MSGS__MSG__OFFBOARD_CONTROL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/OffboardControlMode in the package px4_msgs.
typedef struct px4_msgs__msg__OffboardControlMode
{
  uint64_t timestamp;
  bool position;
  bool velocity;
  bool acceleration;
  bool attitude;
  bool body_rate;
} px4_msgs__msg__OffboardControlMode;

// Struct for a sequence of px4_msgs__msg__OffboardControlMode.
typedef struct px4_msgs__msg__OffboardControlMode__Sequence
{
  px4_msgs__msg__OffboardControlMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OffboardControlMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__OFFBOARD_CONTROL_MODE__STRUCT_H_
