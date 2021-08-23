// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorGyroFifo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__SENSOR_GYRO_FIFO__FUNCTIONS_H_
#define PX4_MSGS__MSG__SENSOR_GYRO_FIFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "px4_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "px4_msgs/msg/sensor_gyro_fifo__struct.h"

/// Initialize msg/SensorGyroFifo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_msgs__msg__SensorGyroFifo
 * )) before or use
 * px4_msgs__msg__SensorGyroFifo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__SensorGyroFifo__init(px4_msgs__msg__SensorGyroFifo * msg);

/// Finalize msg/SensorGyroFifo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__SensorGyroFifo__fini(px4_msgs__msg__SensorGyroFifo * msg);

/// Create msg/SensorGyroFifo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_msgs__msg__SensorGyroFifo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__SensorGyroFifo *
px4_msgs__msg__SensorGyroFifo__create();

/// Destroy msg/SensorGyroFifo message.
/**
 * It calls
 * px4_msgs__msg__SensorGyroFifo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__SensorGyroFifo__destroy(px4_msgs__msg__SensorGyroFifo * msg);


/// Initialize array of msg/SensorGyroFifo messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_msgs__msg__SensorGyroFifo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__SensorGyroFifo__Sequence__init(px4_msgs__msg__SensorGyroFifo__Sequence * array, size_t size);

/// Finalize array of msg/SensorGyroFifo messages.
/**
 * It calls
 * px4_msgs__msg__SensorGyroFifo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__SensorGyroFifo__Sequence__fini(px4_msgs__msg__SensorGyroFifo__Sequence * array);

/// Create array of msg/SensorGyroFifo messages.
/**
 * It allocates the memory for the array and calls
 * px4_msgs__msg__SensorGyroFifo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__SensorGyroFifo__Sequence *
px4_msgs__msg__SensorGyroFifo__Sequence__create(size_t size);

/// Destroy array of msg/SensorGyroFifo messages.
/**
 * It calls
 * px4_msgs__msg__SensorGyroFifo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__SensorGyroFifo__Sequence__destroy(px4_msgs__msg__SensorGyroFifo__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__SENSOR_GYRO_FIFO__FUNCTIONS_H_
