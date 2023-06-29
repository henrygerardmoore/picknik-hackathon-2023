// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from apriltag_ros_msgs:msg/Detection.idl
// generated code does not contain a copyright notice
#include "apriltag_ros_msgs/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `family`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
apriltag_ros_msgs__msg__Detection__init(apriltag_ros_msgs__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // family
  if (!rosidl_runtime_c__String__init(&msg->family)) {
    apriltag_ros_msgs__msg__Detection__fini(msg);
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    apriltag_ros_msgs__msg__Detection__fini(msg);
    return false;
  }
  return true;
}

void
apriltag_ros_msgs__msg__Detection__fini(apriltag_ros_msgs__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // family
  rosidl_runtime_c__String__fini(&msg->family);
  // id
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
}

bool
apriltag_ros_msgs__msg__Detection__are_equal(const apriltag_ros_msgs__msg__Detection * lhs, const apriltag_ros_msgs__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // family
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->family), &(rhs->family)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
apriltag_ros_msgs__msg__Detection__copy(
  const apriltag_ros_msgs__msg__Detection * input,
  apriltag_ros_msgs__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // family
  if (!rosidl_runtime_c__String__copy(
      &(input->family), &(output->family)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

apriltag_ros_msgs__msg__Detection *
apriltag_ros_msgs__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros_msgs__msg__Detection * msg = (apriltag_ros_msgs__msg__Detection *)allocator.allocate(sizeof(apriltag_ros_msgs__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(apriltag_ros_msgs__msg__Detection));
  bool success = apriltag_ros_msgs__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
apriltag_ros_msgs__msg__Detection__destroy(apriltag_ros_msgs__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    apriltag_ros_msgs__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
apriltag_ros_msgs__msg__Detection__Sequence__init(apriltag_ros_msgs__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros_msgs__msg__Detection * data = NULL;

  if (size) {
    data = (apriltag_ros_msgs__msg__Detection *)allocator.zero_allocate(size, sizeof(apriltag_ros_msgs__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = apriltag_ros_msgs__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        apriltag_ros_msgs__msg__Detection__fini(&data[i - 1]);
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
apriltag_ros_msgs__msg__Detection__Sequence__fini(apriltag_ros_msgs__msg__Detection__Sequence * array)
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
      apriltag_ros_msgs__msg__Detection__fini(&array->data[i]);
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

apriltag_ros_msgs__msg__Detection__Sequence *
apriltag_ros_msgs__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  apriltag_ros_msgs__msg__Detection__Sequence * array = (apriltag_ros_msgs__msg__Detection__Sequence *)allocator.allocate(sizeof(apriltag_ros_msgs__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = apriltag_ros_msgs__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
apriltag_ros_msgs__msg__Detection__Sequence__destroy(apriltag_ros_msgs__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    apriltag_ros_msgs__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
apriltag_ros_msgs__msg__Detection__Sequence__are_equal(const apriltag_ros_msgs__msg__Detection__Sequence * lhs, const apriltag_ros_msgs__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!apriltag_ros_msgs__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
apriltag_ros_msgs__msg__Detection__Sequence__copy(
  const apriltag_ros_msgs__msg__Detection__Sequence * input,
  apriltag_ros_msgs__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(apriltag_ros_msgs__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    apriltag_ros_msgs__msg__Detection * data =
      (apriltag_ros_msgs__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!apriltag_ros_msgs__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          apriltag_ros_msgs__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!apriltag_ros_msgs__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
