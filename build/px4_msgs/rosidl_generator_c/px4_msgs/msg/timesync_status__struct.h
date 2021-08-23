// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TimesyncStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__TIMESYNC_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__TIMESYNC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TimesyncStatus in the package px4_msgs.
typedef struct px4_msgs__msg__TimesyncStatus
{
  uint64_t timestamp;
  uint64_t remote_timestamp;
  int64_t observed_offset;
  int64_t estimated_offset;
  uint32_t round_trip_time;
} px4_msgs__msg__TimesyncStatus;

// Struct for a sequence of px4_msgs__msg__TimesyncStatus.
typedef struct px4_msgs__msg__TimesyncStatus__Sequence
{
  px4_msgs__msg__TimesyncStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TimesyncStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__TIMESYNC_STATUS__STRUCT_H_
