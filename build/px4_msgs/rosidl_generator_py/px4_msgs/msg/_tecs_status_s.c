// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_generator_c/visibility_control.h"
#include "px4_msgs/msg/tecs_status__struct.h"
#include "px4_msgs/msg/tecs_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__tecs_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "px4_msgs.msg._tecs_status.TecsStatus",
        full_classname_dest, 36) == 0);
  }
  px4_msgs__msg__TecsStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // altitude_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude_filtered
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_filtered");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude_filtered = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_rate_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_rate_setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_rate_setpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // equivalent_airspeed_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "equivalent_airspeed_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->equivalent_airspeed_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_filtered
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_filtered");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_filtered = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_derivative_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_derivative_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_derivative_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_derivative
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_derivative");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_derivative = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // energy_distribution_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy_distribution_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->energy_distribution_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_rate_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_rate_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_rate_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // energy_distribution_rate_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy_distribution_rate_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->energy_distribution_rate_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_balance
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_balance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_balance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_balance_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_balance_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_balance_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_rate_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_rate_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_rate_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_balance_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_balance_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_balance_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_balance_rate_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_balance_rate_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_balance_rate_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_integ
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_integ");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_integ = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_integ
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_integ");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_integ = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__tecs_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TecsStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._tecs_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TecsStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__TecsStatus * ros_message = (px4_msgs__msg__TecsStatus *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_filtered
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude_filtered);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_filtered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_rate_setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_rate_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_rate_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // equivalent_airspeed_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->equivalent_airspeed_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "equivalent_airspeed_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_filtered
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_filtered);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_filtered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_derivative_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_derivative_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_derivative_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_derivative
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_derivative);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_derivative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energy_distribution_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->energy_distribution_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy_distribution_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_rate_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_rate_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_rate_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energy_distribution_rate_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->energy_distribution_rate_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy_distribution_rate_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_balance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_balance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_balance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_balance_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_balance_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_balance_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_rate_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_rate_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_rate_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_balance_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_balance_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_balance_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_balance_rate_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_balance_rate_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_balance_rate_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_integ
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_integ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_integ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_integ
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_integ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_integ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
