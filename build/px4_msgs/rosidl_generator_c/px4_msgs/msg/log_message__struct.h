// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/LogMessage.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__LOG_MESSAGE__STRUCT_H_
#define PX4_MSGS__MSG__LOG_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__LogMessage__ORB_QUEUE_LENGTH = 4
};

// Struct defined in msg/LogMessage in the package px4_msgs.
typedef struct px4_msgs__msg__LogMessage
{
  uint64_t timestamp;
  uint8_t severity;
  uint8_t text[127];
} px4_msgs__msg__LogMessage;

// Struct for a sequence of px4_msgs__msg__LogMessage.
typedef struct px4_msgs__msg__LogMessage__Sequence
{
  px4_msgs__msg__LogMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__LogMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__LOG_MESSAGE__STRUCT_H_
