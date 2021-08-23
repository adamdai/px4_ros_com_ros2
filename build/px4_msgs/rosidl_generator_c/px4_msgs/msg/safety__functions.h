// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Safety.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__SAFETY__FUNCTIONS_H_
#define PX4_MSGS__MSG__SAFETY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "px4_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "px4_msgs/msg/safety__struct.h"

/// Initialize msg/Safety message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_msgs__msg__Safety
 * )) before or use
 * px4_msgs__msg__Safety__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__Safety__init(px4_msgs__msg__Safety * msg);

/// Finalize msg/Safety message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__Safety__fini(px4_msgs__msg__Safety * msg);

/// Create msg/Safety message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_msgs__msg__Safety__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__Safety *
px4_msgs__msg__Safety__create();

/// Destroy msg/Safety message.
/**
 * It calls
 * px4_msgs__msg__Safety__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__Safety__destroy(px4_msgs__msg__Safety * msg);


/// Initialize array of msg/Safety messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_msgs__msg__Safety__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__Safety__Sequence__init(px4_msgs__msg__Safety__Sequence * array, size_t size);

/// Finalize array of msg/Safety messages.
/**
 * It calls
 * px4_msgs__msg__Safety__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__Safety__Sequence__fini(px4_msgs__msg__Safety__Sequence * array);

/// Create array of msg/Safety messages.
/**
 * It allocates the memory for the array and calls
 * px4_msgs__msg__Safety__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__Safety__Sequence *
px4_msgs__msg__Safety__Sequence__create(size_t size);

/// Destroy array of msg/Safety messages.
/**
 * It calls
 * px4_msgs__msg__Safety__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__Safety__Sequence__destroy(px4_msgs__msg__Safety__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__SAFETY__FUNCTIONS_H_
