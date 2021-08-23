// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multi_rtd_interfaces:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice
#include "multi_rtd_interfaces/msg/robot_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `robot_name`
#include "rosidl_generator_c/string_functions.h"
// Member `trajectory`
#include "trajectory_msgs/msg/joint_trajectory__functions.h"

bool
multi_rtd_interfaces__msg__RobotTrajectory__init(multi_rtd_interfaces__msg__RobotTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_generator_c__String__init(&msg->robot_name)) {
    multi_rtd_interfaces__msg__RobotTrajectory__fini(msg);
    return false;
  }
  // trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->trajectory)) {
    multi_rtd_interfaces__msg__RobotTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
multi_rtd_interfaces__msg__RobotTrajectory__fini(multi_rtd_interfaces__msg__RobotTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_generator_c__String__fini(&msg->robot_name);
  // trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->trajectory);
}

multi_rtd_interfaces__msg__RobotTrajectory *
multi_rtd_interfaces__msg__RobotTrajectory__create()
{
  multi_rtd_interfaces__msg__RobotTrajectory * msg = (multi_rtd_interfaces__msg__RobotTrajectory *)malloc(sizeof(multi_rtd_interfaces__msg__RobotTrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_rtd_interfaces__msg__RobotTrajectory));
  bool success = multi_rtd_interfaces__msg__RobotTrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
multi_rtd_interfaces__msg__RobotTrajectory__destroy(multi_rtd_interfaces__msg__RobotTrajectory * msg)
{
  if (msg) {
    multi_rtd_interfaces__msg__RobotTrajectory__fini(msg);
  }
  free(msg);
}


bool
multi_rtd_interfaces__msg__RobotTrajectory__Sequence__init(multi_rtd_interfaces__msg__RobotTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  multi_rtd_interfaces__msg__RobotTrajectory * data = NULL;
  if (size) {
    data = (multi_rtd_interfaces__msg__RobotTrajectory *)calloc(size, sizeof(multi_rtd_interfaces__msg__RobotTrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_rtd_interfaces__msg__RobotTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_rtd_interfaces__msg__RobotTrajectory__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
multi_rtd_interfaces__msg__RobotTrajectory__Sequence__fini(multi_rtd_interfaces__msg__RobotTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      multi_rtd_interfaces__msg__RobotTrajectory__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

multi_rtd_interfaces__msg__RobotTrajectory__Sequence *
multi_rtd_interfaces__msg__RobotTrajectory__Sequence__create(size_t size)
{
  multi_rtd_interfaces__msg__RobotTrajectory__Sequence * array = (multi_rtd_interfaces__msg__RobotTrajectory__Sequence *)malloc(sizeof(multi_rtd_interfaces__msg__RobotTrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = multi_rtd_interfaces__msg__RobotTrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
multi_rtd_interfaces__msg__RobotTrajectory__Sequence__destroy(multi_rtd_interfaces__msg__RobotTrajectory__Sequence * array)
{
  if (array) {
    multi_rtd_interfaces__msg__RobotTrajectory__Sequence__fini(array);
  }
  free(array);
}
