// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OrbTestMediumWrapAround.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__ORB_TEST_MEDIUM_WRAP_AROUND__STRUCT_H_
#define PX4_MSGS__MSG__ORB_TEST_MEDIUM_WRAP_AROUND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/OrbTestMediumWrapAround in the package px4_msgs.
typedef struct px4_msgs__msg__OrbTestMediumWrapAround
{
  uint64_t timestamp;
  int32_t val;
  uint8_t junk[64];
} px4_msgs__msg__OrbTestMediumWrapAround;

// Struct for a sequence of px4_msgs__msg__OrbTestMediumWrapAround.
typedef struct px4_msgs__msg__OrbTestMediumWrapAround__Sequence
{
  px4_msgs__msg__OrbTestMediumWrapAround * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OrbTestMediumWrapAround__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__ORB_TEST_MEDIUM_WRAP_AROUND__STRUCT_H_
