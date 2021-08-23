// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/Wind.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/wind__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/wind__struct.h"
#include "px4_msgs/msg/wind__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Wind__ros_msg_type = px4_msgs__msg__Wind;

static bool _Wind__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Wind__ros_msg_type * ros_message = static_cast<const _Wind__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: windspeed_north
  {
    cdr << ros_message->windspeed_north;
  }

  // Field name: windspeed_east
  {
    cdr << ros_message->windspeed_east;
  }

  // Field name: variance_north
  {
    cdr << ros_message->variance_north;
  }

  // Field name: variance_east
  {
    cdr << ros_message->variance_east;
  }

  // Field name: tas_innov
  {
    cdr << ros_message->tas_innov;
  }

  // Field name: tas_innov_var
  {
    cdr << ros_message->tas_innov_var;
  }

  // Field name: beta_innov
  {
    cdr << ros_message->beta_innov;
  }

  // Field name: beta_innov_var
  {
    cdr << ros_message->beta_innov_var;
  }

  return true;
}

static bool _Wind__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Wind__ros_msg_type * ros_message = static_cast<_Wind__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: windspeed_north
  {
    cdr >> ros_message->windspeed_north;
  }

  // Field name: windspeed_east
  {
    cdr >> ros_message->windspeed_east;
  }

  // Field name: variance_north
  {
    cdr >> ros_message->variance_north;
  }

  // Field name: variance_east
  {
    cdr >> ros_message->variance_east;
  }

  // Field name: tas_innov
  {
    cdr >> ros_message->tas_innov;
  }

  // Field name: tas_innov_var
  {
    cdr >> ros_message->tas_innov_var;
  }

  // Field name: beta_innov
  {
    cdr >> ros_message->beta_innov;
  }

  // Field name: beta_innov_var
  {
    cdr >> ros_message->beta_innov_var;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__Wind(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Wind__ros_msg_type * ros_message = static_cast<const _Wind__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name windspeed_north
  {
    size_t item_size = sizeof(ros_message->windspeed_north);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name windspeed_east
  {
    size_t item_size = sizeof(ros_message->windspeed_east);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name variance_north
  {
    size_t item_size = sizeof(ros_message->variance_north);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name variance_east
  {
    size_t item_size = sizeof(ros_message->variance_east);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tas_innov
  {
    size_t item_size = sizeof(ros_message->tas_innov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tas_innov_var
  {
    size_t item_size = sizeof(ros_message->tas_innov_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beta_innov
  {
    size_t item_size = sizeof(ros_message->beta_innov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beta_innov_var
  {
    size_t item_size = sizeof(ros_message->beta_innov_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Wind__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__Wind(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__Wind(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: windspeed_north
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: windspeed_east
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: variance_north
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: variance_east
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tas_innov
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tas_innov_var
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: beta_innov
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: beta_innov_var
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Wind__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__Wind(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Wind = {
  "px4_msgs::msg",
  "Wind",
  _Wind__cdr_serialize,
  _Wind__cdr_deserialize,
  _Wind__get_serialized_size,
  _Wind__max_serialized_size
};

static rosidl_message_type_support_t _Wind__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Wind,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, Wind)() {
  return &_Wind__type_support;
}

#if defined(__cplusplus)
}
#endif
