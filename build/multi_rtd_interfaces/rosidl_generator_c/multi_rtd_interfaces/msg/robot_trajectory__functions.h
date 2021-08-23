// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multi_rtd_interfaces:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__FUNCTIONS_H_
#define MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "multi_rtd_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "multi_rtd_interfaces/msg/robot_trajectory__struct.h"

/// Initialize msg/RobotTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * multi_rtd_interfaces__msg__RobotTrajectory
 * )) before or use
 * multi_rtd_interfaces__msg__RobotTrajectory__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_multi_rtd_interfaces
bool
multi_rtd_interfaces__msg__RobotTrajectory__init(multi_rtd_interfaces__msg__RobotTrajectory * msg);

/// Finalize msg/RobotTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_multi_rtd_interfaces
void
multi_rtd_interfaces__msg__RobotTrajectory__fini(multi_rtd_interfaces__msg__RobotTrajectory * msg);

/// Create msg/RobotTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * multi_rtd_interfaces__msg__RobotTrajectory__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_multi_rtd_interfaces
multi_rtd_interfaces__msg__RobotTrajectory *
multi_rtd_interfaces__msg__RobotTrajectory__create();

/// Destroy msg/RobotTrajectory message.
/**
 * It calls
 * multi_rtd_interfaces__msg__RobotTrajectory__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_multi_rtd_interfaces
void
multi_rtd_interfaces__msg__RobotTrajectory__destroy(multi_rtd_interfaces__msg__RobotTrajectory * msg);


/// Initialize array of msg/RobotTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * multi_rtd_interfaces__msg__RobotTrajectory__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_multi_rtd_interfaces
bool
multi_rtd_interfaces__msg__RobotTrajectory__Sequence__init(multi_rtd_interfaces__msg__RobotTrajectory__Sequence * array, size_t size);

/// Finalize array of msg/RobotTrajectory messages.
/**
 * It calls
 * multi_rtd_interfaces__msg__RobotTrajectory__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_multi_rtd_interfaces
void
multi_rtd_interfaces__msg__RobotTrajectory__Sequence__fini(multi_rtd_interfaces__msg__RobotTrajectory__Sequence * array);

/// Create array of msg/RobotTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * multi_rtd_interfaces__msg__RobotTrajectory__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_multi_rtd_interfaces
multi_rtd_interfaces__msg__RobotTrajectory__Sequence *
multi_rtd_interfaces__msg__RobotTrajectory__Sequence__create(size_t size);

/// Destroy array of msg/RobotTrajectory messages.
/**
 * It calls
 * multi_rtd_interfaces__msg__RobotTrajectory__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_multi_rtd_interfaces
void
multi_rtd_interfaces__msg__RobotTrajectory__Sequence__destroy(multi_rtd_interfaces__msg__RobotTrajectory__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__FUNCTIONS_H_
