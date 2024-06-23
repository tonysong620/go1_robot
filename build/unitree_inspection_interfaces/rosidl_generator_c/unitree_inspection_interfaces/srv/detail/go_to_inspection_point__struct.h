// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_inspection_interfaces:srv/GoToInspectionPoint.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INSPECTION_INTERFACES__SRV__DETAIL__GO_TO_INSPECTION_POINT__STRUCT_H_
#define UNITREE_INSPECTION_INTERFACES__SRV__DETAIL__GO_TO_INSPECTION_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'inspection_point'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GoToInspectionPoint in the package unitree_inspection_interfaces.
typedef struct unitree_inspection_interfaces__srv__GoToInspectionPoint_Request
{
  /// the name of the inspection point to navigate to
  rosidl_runtime_c__String inspection_point;
} unitree_inspection_interfaces__srv__GoToInspectionPoint_Request;

// Struct for a sequence of unitree_inspection_interfaces__srv__GoToInspectionPoint_Request.
typedef struct unitree_inspection_interfaces__srv__GoToInspectionPoint_Request__Sequence
{
  unitree_inspection_interfaces__srv__GoToInspectionPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_inspection_interfaces__srv__GoToInspectionPoint_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GoToInspectionPoint in the package unitree_inspection_interfaces.
typedef struct unitree_inspection_interfaces__srv__GoToInspectionPoint_Response
{
  uint8_t structure_needs_at_least_one_member;
} unitree_inspection_interfaces__srv__GoToInspectionPoint_Response;

// Struct for a sequence of unitree_inspection_interfaces__srv__GoToInspectionPoint_Response.
typedef struct unitree_inspection_interfaces__srv__GoToInspectionPoint_Response__Sequence
{
  unitree_inspection_interfaces__srv__GoToInspectionPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_inspection_interfaces__srv__GoToInspectionPoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_INSPECTION_INTERFACES__SRV__DETAIL__GO_TO_INSPECTION_POINT__STRUCT_H_
