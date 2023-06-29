// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
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
#include "rosidl_runtime_c/visibility_control.h"
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.h"
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__camera_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__camera_info__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool apriltag_ros_msgs__srv__get_april_tag_detections__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[78];
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
    assert(strncmp("apriltag_ros_msgs.srv._get_april_tag_detections.GetAprilTagDetections_Request", full_classname_dest, 77) == 0);
  }
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request * ros_message = _ros_message;
  {  // camera_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_info");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__camera_info__convert_from_py(field, &ros_message->camera_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // image
    PyObject * field = PyObject_GetAttrString(_pymsg, "image");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__image__convert_from_py(field, &ros_message->image)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // apriltag_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "apriltag_size");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->apriltag_size = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * apriltag_ros_msgs__srv__get_april_tag_detections__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetAprilTagDetections_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("apriltag_ros_msgs.srv._get_april_tag_detections");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAprilTagDetections_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request * ros_message = (apriltag_ros_msgs__srv__GetAprilTagDetections_Request *)raw_ros_message;
  {  // camera_info
    PyObject * field = NULL;
    field = sensor_msgs__msg__camera_info__convert_to_py(&ros_message->camera_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // image
    PyObject * field = NULL;
    field = sensor_msgs__msg__image__convert_to_py(&ros_message->image);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // apriltag_size
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->apriltag_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "apriltag_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.h"
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "apriltag_ros_msgs/msg/detail/detection__functions.h"
// end nested array functions include
bool apriltag_ros_msgs__msg__detection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * apriltag_ros_msgs__msg__detection__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool apriltag_ros_msgs__srv__get_april_tag_detections__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
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
    assert(strncmp("apriltag_ros_msgs.srv._get_april_tag_detections.GetAprilTagDetections_Response", full_classname_dest, 78) == 0);
  }
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response * ros_message = _ros_message;
  {  // detections
    PyObject * field = PyObject_GetAttrString(_pymsg, "detections");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'detections'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!apriltag_ros_msgs__msg__Detection__Sequence__init(&(ros_message->detections), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create apriltag_ros_msgs__msg__Detection__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    apriltag_ros_msgs__msg__Detection * dest = ros_message->detections.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!apriltag_ros_msgs__msg__detection__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * apriltag_ros_msgs__srv__get_april_tag_detections__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetAprilTagDetections_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("apriltag_ros_msgs.srv._get_april_tag_detections");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAprilTagDetections_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response * ros_message = (apriltag_ros_msgs__srv__GetAprilTagDetections_Response *)raw_ros_message;
  {  // detections
    PyObject * field = NULL;
    size_t size = ros_message->detections.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    apriltag_ros_msgs__msg__Detection * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->detections.data[i]);
      PyObject * pyitem = apriltag_ros_msgs__msg__detection__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "detections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
