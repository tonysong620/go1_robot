// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unitree_ocr_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unitree_ocr_interfaces/msg/detail/detection__rosidl_typesupport_introspection_c.h"
#include "unitree_ocr_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unitree_ocr_interfaces/msg/detail/detection__functions.h"
#include "unitree_ocr_interfaces/msg/detail/detection__struct.h"


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unitree_ocr_interfaces__msg__Detection__init(message_memory);
}

void unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function(void * message_memory)
{
  unitree_ocr_interfaces__msg__Detection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[2] = {
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_ocr_interfaces__msg__Detection, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_ocr_interfaces__msg__Detection, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members = {
  "unitree_ocr_interfaces__msg",  // message namespace
  "Detection",  // message name
  2,  // number of fields
  sizeof(unitree_ocr_interfaces__msg__Detection),
  unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array,  // message members
  unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle = {
  0,
  &unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unitree_ocr_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unitree_ocr_interfaces, msg, Detection)() {
  if (!unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier) {
    unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &unitree_ocr_interfaces__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
