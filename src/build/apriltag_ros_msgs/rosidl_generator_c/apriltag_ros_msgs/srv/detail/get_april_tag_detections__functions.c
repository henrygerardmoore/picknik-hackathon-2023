// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `camera_info`
#include "sensor_msgs/msg/detail/camera_info__functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__init(apriltag_ros_msgs__srv__GetAprilTagDetections_Request * msg)
{
  if (!msg) {
    return false;
  }
  // camera_info
  if (!sensor_msgs__msg__CameraInfo__init(&msg->camera_info)) {
    apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini(msg);
    return false;
  }
  // apriltag_size
  return true;
}

void
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini(apriltag_ros_msgs__srv__GetAprilTagDetections_Request * msg)
{
  if (!msg) {
    return;
  }
  // camera_info
  sensor_msgs__msg__CameraInfo__fini(&msg->camera_info);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // apriltag_size
}

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__are_equal(const apriltag_ros_msgs__srv__GetAprilTagDetections_Request * lhs, const apriltag_ros_msgs__srv__GetAprilTagDetections_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_info
  if (!sensor_msgs__msg__CameraInfo__are_equal(
      &(lhs->camera_info), &(rhs->camera_info)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // apriltag_size
  if (lhs->apriltag_size != rhs->apriltag_size) {
    return false;
  }
  return true;
}

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__copy(
  const apriltag_ros_msgs__srv__GetAprilTagDetections_Request * input,
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_info
  if (!sensor_msgs__msg__CameraInfo__copy(
      &(input->camera_info), &(output->camera_info)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // apriltag_size
  output->apriltag_size = input->apriltag_size;
  return true;
}

apriltag_ros_msgs__srv__GetAprilTagDetections_Request *
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request * msg = (apriltag_ros_msgs__srv__GetAprilTagDetections_Request *)allocator.allocate(sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Request));
  bool success = apriltag_ros_msgs__srv__GetAprilTagDetections_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__destroy(apriltag_ros_msgs__srv__GetAprilTagDetections_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__init(apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request * data = NULL;

  if (size) {
    data = (apriltag_ros_msgs__srv__GetAprilTagDetections_Request *)allocator.zero_allocate(size, sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = apriltag_ros_msgs__srv__GetAprilTagDetections_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__fini(apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence *
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * array = (apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence *)allocator.allocate(sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__destroy(apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__are_equal(const apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * lhs, const apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!apriltag_ros_msgs__srv__GetAprilTagDetections_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__copy(
  const apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * input,
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    apriltag_ros_msgs__srv__GetAprilTagDetections_Request * data =
      (apriltag_ros_msgs__srv__GetAprilTagDetections_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!apriltag_ros_msgs__srv__GetAprilTagDetections_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!apriltag_ros_msgs__srv__GetAprilTagDetections_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `detections`
#include "apriltag_ros_msgs/msg/detail/detection__functions.h"

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__init(apriltag_ros_msgs__srv__GetAprilTagDetections_Response * msg)
{
  if (!msg) {
    return false;
  }
  // detections
  if (!apriltag_ros_msgs__msg__Detection__Sequence__init(&msg->detections, 0)) {
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini(msg);
    return false;
  }
  return true;
}

void
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini(apriltag_ros_msgs__srv__GetAprilTagDetections_Response * msg)
{
  if (!msg) {
    return;
  }
  // detections
  apriltag_ros_msgs__msg__Detection__Sequence__fini(&msg->detections);
}

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__are_equal(const apriltag_ros_msgs__srv__GetAprilTagDetections_Response * lhs, const apriltag_ros_msgs__srv__GetAprilTagDetections_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detections
  if (!apriltag_ros_msgs__msg__Detection__Sequence__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__copy(
  const apriltag_ros_msgs__srv__GetAprilTagDetections_Response * input,
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // detections
  if (!apriltag_ros_msgs__msg__Detection__Sequence__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

apriltag_ros_msgs__srv__GetAprilTagDetections_Response *
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response * msg = (apriltag_ros_msgs__srv__GetAprilTagDetections_Response *)allocator.allocate(sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Response));
  bool success = apriltag_ros_msgs__srv__GetAprilTagDetections_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__destroy(apriltag_ros_msgs__srv__GetAprilTagDetections_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__init(apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response * data = NULL;

  if (size) {
    data = (apriltag_ros_msgs__srv__GetAprilTagDetections_Response *)allocator.zero_allocate(size, sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = apriltag_ros_msgs__srv__GetAprilTagDetections_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__fini(apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence *
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * array = (apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence *)allocator.allocate(sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__destroy(apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__are_equal(const apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * lhs, const apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!apriltag_ros_msgs__srv__GetAprilTagDetections_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__copy(
  const apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * input,
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response * data =
      (apriltag_ros_msgs__srv__GetAprilTagDetections_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!apriltag_ros_msgs__srv__GetAprilTagDetections_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!apriltag_ros_msgs__srv__GetAprilTagDetections_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
