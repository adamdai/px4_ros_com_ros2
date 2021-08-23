// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorInnovationVariances.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/estimator_innovation_variances__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/estimator_innovation_variances__struct.h"
#include "px4_msgs/msg/estimator_innovation_variances__functions.h"
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


using _EstimatorInnovationVariances__ros_msg_type = px4_msgs__msg__EstimatorInnovationVariances;

static bool _EstimatorInnovationVariances__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorInnovationVariances__ros_msg_type * ros_message = static_cast<const _EstimatorInnovationVariances__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: gps_hvel
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_hvel;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gps_vvel
  {
    cdr << ros_message->gps_vvel;
  }

  // Field name: gps_hpos
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_hpos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gps_vpos
  {
    cdr << ros_message->gps_vpos;
  }

  // Field name: ev_hvel
  {
    size_t size = 2;
    auto array_ptr = ros_message->ev_hvel;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ev_vvel
  {
    cdr << ros_message->ev_vvel;
  }

  // Field name: ev_hpos
  {
    size_t size = 2;
    auto array_ptr = ros_message->ev_hpos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ev_vpos
  {
    cdr << ros_message->ev_vpos;
  }

  // Field name: rng_vpos
  {
    cdr << ros_message->rng_vpos;
  }

  // Field name: baro_vpos
  {
    cdr << ros_message->baro_vpos;
  }

  // Field name: aux_hvel
  {
    size_t size = 2;
    auto array_ptr = ros_message->aux_hvel;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: aux_vvel
  {
    cdr << ros_message->aux_vvel;
  }

  // Field name: flow
  {
    size_t size = 2;
    auto array_ptr = ros_message->flow;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: mag_field
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_field;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: drag
  {
    size_t size = 2;
    auto array_ptr = ros_message->drag;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: airspeed
  {
    cdr << ros_message->airspeed;
  }

  // Field name: beta
  {
    cdr << ros_message->beta;
  }

  // Field name: hagl
  {
    cdr << ros_message->hagl;
  }

  return true;
}

static bool _EstimatorInnovationVariances__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorInnovationVariances__ros_msg_type * ros_message = static_cast<_EstimatorInnovationVariances__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: gps_hvel
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_hvel;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gps_vvel
  {
    cdr >> ros_message->gps_vvel;
  }

  // Field name: gps_hpos
  {
    size_t size = 2;
    auto array_ptr = ros_message->gps_hpos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gps_vpos
  {
    cdr >> ros_message->gps_vpos;
  }

  // Field name: ev_hvel
  {
    size_t size = 2;
    auto array_ptr = ros_message->ev_hvel;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ev_vvel
  {
    cdr >> ros_message->ev_vvel;
  }

  // Field name: ev_hpos
  {
    size_t size = 2;
    auto array_ptr = ros_message->ev_hpos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ev_vpos
  {
    cdr >> ros_message->ev_vpos;
  }

  // Field name: rng_vpos
  {
    cdr >> ros_message->rng_vpos;
  }

  // Field name: baro_vpos
  {
    cdr >> ros_message->baro_vpos;
  }

  // Field name: aux_hvel
  {
    size_t size = 2;
    auto array_ptr = ros_message->aux_hvel;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: aux_vvel
  {
    cdr >> ros_message->aux_vvel;
  }

  // Field name: flow
  {
    size_t size = 2;
    auto array_ptr = ros_message->flow;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: mag_field
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_field;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: drag
  {
    size_t size = 2;
    auto array_ptr = ros_message->drag;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: airspeed
  {
    cdr >> ros_message->airspeed;
  }

  // Field name: beta
  {
    cdr >> ros_message->beta;
  }

  // Field name: hagl
  {
    cdr >> ros_message->hagl;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorInnovationVariances(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorInnovationVariances__ros_msg_type * ros_message = static_cast<const _EstimatorInnovationVariances__ros_msg_type *>(untyped_ros_message);
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
  // field.name gps_hvel
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->gps_hvel;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_vvel
  {
    size_t item_size = sizeof(ros_message->gps_vvel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_hpos
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->gps_hpos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_vpos
  {
    size_t item_size = sizeof(ros_message->gps_vpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ev_hvel
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->ev_hvel;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ev_vvel
  {
    size_t item_size = sizeof(ros_message->ev_vvel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ev_hpos
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->ev_hpos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ev_vpos
  {
    size_t item_size = sizeof(ros_message->ev_vpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rng_vpos
  {
    size_t item_size = sizeof(ros_message->rng_vpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_vpos
  {
    size_t item_size = sizeof(ros_message->baro_vpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_hvel
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->aux_hvel;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux_vvel
  {
    size_t item_size = sizeof(ros_message->aux_vvel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flow
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->flow;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_field
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->mag_field;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drag
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->drag;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airspeed
  {
    size_t item_size = sizeof(ros_message->airspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beta
  {
    size_t item_size = sizeof(ros_message->beta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hagl
  {
    size_t item_size = sizeof(ros_message->hagl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorInnovationVariances__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorInnovationVariances(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorInnovationVariances(
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
  // member: gps_hvel
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_vvel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_hpos
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_vpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ev_hvel
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ev_vvel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ev_hpos
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ev_vpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rng_vpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_vpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux_hvel
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux_vvel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flow
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_field
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: drag
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: airspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: beta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hagl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EstimatorInnovationVariances__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__EstimatorInnovationVariances(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EstimatorInnovationVariances = {
  "px4_msgs::msg",
  "EstimatorInnovationVariances",
  _EstimatorInnovationVariances__cdr_serialize,
  _EstimatorInnovationVariances__cdr_deserialize,
  _EstimatorInnovationVariances__get_serialized_size,
  _EstimatorInnovationVariances__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorInnovationVariances__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorInnovationVariances,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorInnovationVariances)() {
  return &_EstimatorInnovationVariances__type_support;
}

#if defined(__cplusplus)
}
#endif
