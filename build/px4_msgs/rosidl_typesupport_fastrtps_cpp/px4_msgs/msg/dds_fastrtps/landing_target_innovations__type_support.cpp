// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/LandingTargetInnovations.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/landing_target_innovations__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/landing_target_innovations__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::LandingTargetInnovations & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: innov_x
  cdr << ros_message.innov_x;
  // Member: innov_y
  cdr << ros_message.innov_y;
  // Member: innov_cov_x
  cdr << ros_message.innov_cov_x;
  // Member: innov_cov_y
  cdr << ros_message.innov_cov_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::LandingTargetInnovations & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: innov_x
  cdr >> ros_message.innov_x;

  // Member: innov_y
  cdr >> ros_message.innov_y;

  // Member: innov_cov_x
  cdr >> ros_message.innov_cov_x;

  // Member: innov_cov_y
  cdr >> ros_message.innov_cov_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::LandingTargetInnovations & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: innov_x
  {
    size_t item_size = sizeof(ros_message.innov_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: innov_y
  {
    size_t item_size = sizeof(ros_message.innov_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: innov_cov_x
  {
    size_t item_size = sizeof(ros_message.innov_cov_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: innov_cov_y
  {
    size_t item_size = sizeof(ros_message.innov_cov_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_LandingTargetInnovations(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: innov_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: innov_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: innov_cov_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: innov_cov_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LandingTargetInnovations__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::LandingTargetInnovations *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LandingTargetInnovations__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::LandingTargetInnovations *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LandingTargetInnovations__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::LandingTargetInnovations *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LandingTargetInnovations__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LandingTargetInnovations(full_bounded, 0);
}

static message_type_support_callbacks_t _LandingTargetInnovations__callbacks = {
  "px4_msgs::msg",
  "LandingTargetInnovations",
  _LandingTargetInnovations__cdr_serialize,
  _LandingTargetInnovations__cdr_deserialize,
  _LandingTargetInnovations__get_serialized_size,
  _LandingTargetInnovations__max_serialized_size
};

static rosidl_message_type_support_t _LandingTargetInnovations__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LandingTargetInnovations__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::LandingTargetInnovations>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_LandingTargetInnovations__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, LandingTargetInnovations)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_LandingTargetInnovations__handle;
}

#ifdef __cplusplus
}
#endif
