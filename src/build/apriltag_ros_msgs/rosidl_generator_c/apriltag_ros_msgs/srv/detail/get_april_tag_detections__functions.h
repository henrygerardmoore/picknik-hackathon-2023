// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__FUNCTIONS_H_
#define APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "apriltag_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.h"

/// Initialize srv/GetAprilTagDetections message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Request
 * )) before or use
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__init(apriltag_ros_msgs__srv__GetAprilTagDetections_Request * msg);

/// Finalize srv/GetAprilTagDetections message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
void
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini(apriltag_ros_msgs__srv__GetAprilTagDetections_Request * msg);

/// Create srv/GetAprilTagDetections message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
apriltag_ros_msgs__srv__GetAprilTagDetections_Request *
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__create();

/// Destroy srv/GetAprilTagDetections message.
/**
 * It calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
void
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__destroy(apriltag_ros_msgs__srv__GetAprilTagDetections_Request * msg);

/// Check for srv/GetAprilTagDetections message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__are_equal(const apriltag_ros_msgs__srv__GetAprilTagDetections_Request * lhs, const apriltag_ros_msgs__srv__GetAprilTagDetections_Request * rhs);

/// Copy a srv/GetAprilTagDetections message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__copy(
  const apriltag_ros_msgs__srv__GetAprilTagDetections_Request * input,
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request * output);

/// Initialize array of srv/GetAprilTagDetections messages.
/**
 * It allocates the memory for the number of elements and calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__init(apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetAprilTagDetections messages.
/**
 * It calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
void
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__fini(apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * array);

/// Create array of srv/GetAprilTagDetections messages.
/**
 * It allocates the memory for the array and calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence *
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetAprilTagDetections messages.
/**
 * It calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
void
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__destroy(apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * array);

/// Check for srv/GetAprilTagDetections message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__are_equal(const apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * lhs, const apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * rhs);

/// Copy an array of srv/GetAprilTagDetections messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence__copy(
  const apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * input,
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence * output);

/// Initialize srv/GetAprilTagDetections message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Response
 * )) before or use
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__init(apriltag_ros_msgs__srv__GetAprilTagDetections_Response * msg);

/// Finalize srv/GetAprilTagDetections message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
void
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini(apriltag_ros_msgs__srv__GetAprilTagDetections_Response * msg);

/// Create srv/GetAprilTagDetections message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
apriltag_ros_msgs__srv__GetAprilTagDetections_Response *
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__create();

/// Destroy srv/GetAprilTagDetections message.
/**
 * It calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
void
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__destroy(apriltag_ros_msgs__srv__GetAprilTagDetections_Response * msg);

/// Check for srv/GetAprilTagDetections message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__are_equal(const apriltag_ros_msgs__srv__GetAprilTagDetections_Response * lhs, const apriltag_ros_msgs__srv__GetAprilTagDetections_Response * rhs);

/// Copy a srv/GetAprilTagDetections message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__copy(
  const apriltag_ros_msgs__srv__GetAprilTagDetections_Response * input,
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response * output);

/// Initialize array of srv/GetAprilTagDetections messages.
/**
 * It allocates the memory for the number of elements and calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__init(apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetAprilTagDetections messages.
/**
 * It calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
void
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__fini(apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * array);

/// Create array of srv/GetAprilTagDetections messages.
/**
 * It allocates the memory for the array and calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence *
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetAprilTagDetections messages.
/**
 * It calls
 * apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
void
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__destroy(apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * array);

/// Check for srv/GetAprilTagDetections message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__are_equal(const apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * lhs, const apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * rhs);

/// Copy an array of srv/GetAprilTagDetections messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_apriltag_ros_msgs
bool
apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence__copy(
  const apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * input,
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__FUNCTIONS_H_
