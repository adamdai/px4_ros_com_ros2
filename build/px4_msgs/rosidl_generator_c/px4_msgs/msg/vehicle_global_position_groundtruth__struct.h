// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleGlobalPositionGroundtruth.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__VEHICLE_GLOBAL_POSITION_GROUNDTRUTH__STRUCT_H_
#define PX4_MSGS__MSG__VEHICLE_GLOBAL_POSITION_GROUNDTRUTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleGlobalPositionGroundtruth in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleGlobalPositionGroundtruth
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  double lat;
  double lon;
  float alt;
  float alt_ellipsoid;
  float delta_alt;
  uint8_t lat_lon_reset_counter;
  uint8_t alt_reset_counter;
  float eph;
  float epv;
  float terrain_alt;
  bool terrain_alt_valid;
  bool dead_reckoning;
} px4_msgs__msg__VehicleGlobalPositionGroundtruth;

// Struct for a sequence of px4_msgs__msg__VehicleGlobalPositionGroundtruth.
typedef struct px4_msgs__msg__VehicleGlobalPositionGroundtruth__Sequence
{
  px4_msgs__msg__VehicleGlobalPositionGroundtruth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleGlobalPositionGroundtruth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__VEHICLE_GLOBAL_POSITION_GROUNDTRUTH__STRUCT_H_
