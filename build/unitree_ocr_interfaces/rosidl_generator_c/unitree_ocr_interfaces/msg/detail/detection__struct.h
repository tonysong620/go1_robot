// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_ocr_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
#define UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Detection in the package unitree_ocr_interfaces.
typedef struct unitree_ocr_interfaces__msg__Detection
{
  /// the text that was detected
  rosidl_runtime_c__String text;
  /// the number of consecutive times this text has been detected
  uint16_t count;
} unitree_ocr_interfaces__msg__Detection;

// Struct for a sequence of unitree_ocr_interfaces__msg__Detection.
typedef struct unitree_ocr_interfaces__msg__Detection__Sequence
{
  unitree_ocr_interfaces__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_ocr_interfaces__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
