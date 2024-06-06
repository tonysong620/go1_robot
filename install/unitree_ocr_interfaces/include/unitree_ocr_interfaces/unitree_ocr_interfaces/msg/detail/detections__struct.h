// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_ocr_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_H_
#define UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "unitree_ocr_interfaces/msg/detail/detection__struct.h"

/// Struct defined in msg/Detections in the package unitree_ocr_interfaces.
typedef struct unitree_ocr_interfaces__msg__Detections
{
  /// text detected from images
  unitree_ocr_interfaces__msg__Detection__Sequence data;
  /// number of consecutive frames where any text was seen
  uint16_t count;
} unitree_ocr_interfaces__msg__Detections;

// Struct for a sequence of unitree_ocr_interfaces__msg__Detections.
typedef struct unitree_ocr_interfaces__msg__Detections__Sequence
{
  unitree_ocr_interfaces__msg__Detections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_ocr_interfaces__msg__Detections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_H_
