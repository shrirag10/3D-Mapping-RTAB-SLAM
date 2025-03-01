// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from zed_msgs:msg/Skeleton2D.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__SKELETON2_D__FUNCTIONS_H_
#define ZED_MSGS__MSG__DETAIL__SKELETON2_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "zed_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "zed_msgs/msg/detail/skeleton2_d__struct.h"

/// Initialize msg/Skeleton2D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * zed_msgs__msg__Skeleton2D
 * )) before or use
 * zed_msgs__msg__Skeleton2D__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
bool
zed_msgs__msg__Skeleton2D__init(zed_msgs__msg__Skeleton2D * msg);

/// Finalize msg/Skeleton2D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
void
zed_msgs__msg__Skeleton2D__fini(zed_msgs__msg__Skeleton2D * msg);

/// Create msg/Skeleton2D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * zed_msgs__msg__Skeleton2D__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
zed_msgs__msg__Skeleton2D *
zed_msgs__msg__Skeleton2D__create();

/// Destroy msg/Skeleton2D message.
/**
 * It calls
 * zed_msgs__msg__Skeleton2D__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
void
zed_msgs__msg__Skeleton2D__destroy(zed_msgs__msg__Skeleton2D * msg);

/// Check for msg/Skeleton2D message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
bool
zed_msgs__msg__Skeleton2D__are_equal(const zed_msgs__msg__Skeleton2D * lhs, const zed_msgs__msg__Skeleton2D * rhs);

/// Copy a msg/Skeleton2D message.
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
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
bool
zed_msgs__msg__Skeleton2D__copy(
  const zed_msgs__msg__Skeleton2D * input,
  zed_msgs__msg__Skeleton2D * output);

/// Initialize array of msg/Skeleton2D messages.
/**
 * It allocates the memory for the number of elements and calls
 * zed_msgs__msg__Skeleton2D__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
bool
zed_msgs__msg__Skeleton2D__Sequence__init(zed_msgs__msg__Skeleton2D__Sequence * array, size_t size);

/// Finalize array of msg/Skeleton2D messages.
/**
 * It calls
 * zed_msgs__msg__Skeleton2D__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
void
zed_msgs__msg__Skeleton2D__Sequence__fini(zed_msgs__msg__Skeleton2D__Sequence * array);

/// Create array of msg/Skeleton2D messages.
/**
 * It allocates the memory for the array and calls
 * zed_msgs__msg__Skeleton2D__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
zed_msgs__msg__Skeleton2D__Sequence *
zed_msgs__msg__Skeleton2D__Sequence__create(size_t size);

/// Destroy array of msg/Skeleton2D messages.
/**
 * It calls
 * zed_msgs__msg__Skeleton2D__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
void
zed_msgs__msg__Skeleton2D__Sequence__destroy(zed_msgs__msg__Skeleton2D__Sequence * array);

/// Check for msg/Skeleton2D message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
bool
zed_msgs__msg__Skeleton2D__Sequence__are_equal(const zed_msgs__msg__Skeleton2D__Sequence * lhs, const zed_msgs__msg__Skeleton2D__Sequence * rhs);

/// Copy an array of msg/Skeleton2D messages.
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
ROSIDL_GENERATOR_C_PUBLIC_zed_msgs
bool
zed_msgs__msg__Skeleton2D__Sequence__copy(
  const zed_msgs__msg__Skeleton2D__Sequence * input,
  zed_msgs__msg__Skeleton2D__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ZED_MSGS__MSG__DETAIL__SKELETON2_D__FUNCTIONS_H_
