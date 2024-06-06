// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_ocr_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice
#include "unitree_ocr_interfaces/msg/detail/detections__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "unitree_ocr_interfaces/msg/detail/detection__functions.h"

bool
unitree_ocr_interfaces__msg__Detections__init(unitree_ocr_interfaces__msg__Detections * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!unitree_ocr_interfaces__msg__Detection__Sequence__init(&msg->data, 0)) {
    unitree_ocr_interfaces__msg__Detections__fini(msg);
    return false;
  }
  // count
  return true;
}

void
unitree_ocr_interfaces__msg__Detections__fini(unitree_ocr_interfaces__msg__Detections * msg)
{
  if (!msg) {
    return;
  }
  // data
  unitree_ocr_interfaces__msg__Detection__Sequence__fini(&msg->data);
  // count
}

bool
unitree_ocr_interfaces__msg__Detections__are_equal(const unitree_ocr_interfaces__msg__Detections * lhs, const unitree_ocr_interfaces__msg__Detections * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!unitree_ocr_interfaces__msg__Detection__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
unitree_ocr_interfaces__msg__Detections__copy(
  const unitree_ocr_interfaces__msg__Detections * input,
  unitree_ocr_interfaces__msg__Detections * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!unitree_ocr_interfaces__msg__Detection__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

unitree_ocr_interfaces__msg__Detections *
unitree_ocr_interfaces__msg__Detections__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_ocr_interfaces__msg__Detections * msg = (unitree_ocr_interfaces__msg__Detections *)allocator.allocate(sizeof(unitree_ocr_interfaces__msg__Detections), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_ocr_interfaces__msg__Detections));
  bool success = unitree_ocr_interfaces__msg__Detections__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unitree_ocr_interfaces__msg__Detections__destroy(unitree_ocr_interfaces__msg__Detections * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unitree_ocr_interfaces__msg__Detections__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unitree_ocr_interfaces__msg__Detections__Sequence__init(unitree_ocr_interfaces__msg__Detections__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_ocr_interfaces__msg__Detections * data = NULL;

  if (size) {
    data = (unitree_ocr_interfaces__msg__Detections *)allocator.zero_allocate(size, sizeof(unitree_ocr_interfaces__msg__Detections), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_ocr_interfaces__msg__Detections__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_ocr_interfaces__msg__Detections__fini(&data[i - 1]);
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
unitree_ocr_interfaces__msg__Detections__Sequence__fini(unitree_ocr_interfaces__msg__Detections__Sequence * array)
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
      unitree_ocr_interfaces__msg__Detections__fini(&array->data[i]);
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

unitree_ocr_interfaces__msg__Detections__Sequence *
unitree_ocr_interfaces__msg__Detections__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unitree_ocr_interfaces__msg__Detections__Sequence * array = (unitree_ocr_interfaces__msg__Detections__Sequence *)allocator.allocate(sizeof(unitree_ocr_interfaces__msg__Detections__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unitree_ocr_interfaces__msg__Detections__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unitree_ocr_interfaces__msg__Detections__Sequence__destroy(unitree_ocr_interfaces__msg__Detections__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unitree_ocr_interfaces__msg__Detections__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unitree_ocr_interfaces__msg__Detections__Sequence__are_equal(const unitree_ocr_interfaces__msg__Detections__Sequence * lhs, const unitree_ocr_interfaces__msg__Detections__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unitree_ocr_interfaces__msg__Detections__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unitree_ocr_interfaces__msg__Detections__Sequence__copy(
  const unitree_ocr_interfaces__msg__Detections__Sequence * input,
  unitree_ocr_interfaces__msg__Detections__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unitree_ocr_interfaces__msg__Detections);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    unitree_ocr_interfaces__msg__Detections * data =
      (unitree_ocr_interfaces__msg__Detections *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unitree_ocr_interfaces__msg__Detections__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          unitree_ocr_interfaces__msg__Detections__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unitree_ocr_interfaces__msg__Detections__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
