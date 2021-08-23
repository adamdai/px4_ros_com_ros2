// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EkfGpsDrift.idl
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
#include "px4_msgs/msg/ekf_gps_drift__struct.h"
#include "px4_msgs/msg/ekf_gps_drift__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__ekf_gps_drift__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
        "px4_msgs.msg._ekf_gps_drift.EkfGpsDrift",
        full_classname_dest, 39) == 0);
  }
  px4_msgs__msg__EkfGpsDrift * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // hpos_drift_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "hpos_drift_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hpos_drift_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vpos_drift_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "vpos_drift_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vpos_drift_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hspd
    PyObject * field = PyObject_GetAttrString(_pymsg, "hspd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hspd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blocked = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__ekf_gps_drift__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EkfGpsDrift */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._ekf_gps_drift");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EkfGpsDrift");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EkfGpsDrift * ros_message = (px4_msgs__msg__EkfGpsDrift *)raw_ros_message;
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
  {  // hpos_drift_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hpos_drift_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hpos_drift_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vpos_drift_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vpos_drift_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vpos_drift_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hspd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hspd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hspd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
