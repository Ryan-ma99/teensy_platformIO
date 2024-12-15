// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_custom_message:msg/Pressure.idl
// generated code does not contain a copyright notice
#include "my_custom_message/msg/detail/pressure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_custom_message__msg__Pressure__init(my_custom_message__msg__Pressure * msg)
{
  if (!msg) {
    return false;
  }
  // s01
  // s02
  // s03
  // s04
  // s05
  // s06
  // s07
  // s08
  // s09
  // s10
  // s11
  // s12
  // s13
  // s14
  // s15
  // s16
  return true;
}

void
my_custom_message__msg__Pressure__fini(my_custom_message__msg__Pressure * msg)
{
  if (!msg) {
    return;
  }
  // s01
  // s02
  // s03
  // s04
  // s05
  // s06
  // s07
  // s08
  // s09
  // s10
  // s11
  // s12
  // s13
  // s14
  // s15
  // s16
}

bool
my_custom_message__msg__Pressure__are_equal(const my_custom_message__msg__Pressure * lhs, const my_custom_message__msg__Pressure * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // s01
  if (lhs->s01 != rhs->s01) {
    return false;
  }
  // s02
  if (lhs->s02 != rhs->s02) {
    return false;
  }
  // s03
  if (lhs->s03 != rhs->s03) {
    return false;
  }
  // s04
  if (lhs->s04 != rhs->s04) {
    return false;
  }
  // s05
  if (lhs->s05 != rhs->s05) {
    return false;
  }
  // s06
  if (lhs->s06 != rhs->s06) {
    return false;
  }
  // s07
  if (lhs->s07 != rhs->s07) {
    return false;
  }
  // s08
  if (lhs->s08 != rhs->s08) {
    return false;
  }
  // s09
  if (lhs->s09 != rhs->s09) {
    return false;
  }
  // s10
  if (lhs->s10 != rhs->s10) {
    return false;
  }
  // s11
  if (lhs->s11 != rhs->s11) {
    return false;
  }
  // s12
  if (lhs->s12 != rhs->s12) {
    return false;
  }
  // s13
  if (lhs->s13 != rhs->s13) {
    return false;
  }
  // s14
  if (lhs->s14 != rhs->s14) {
    return false;
  }
  // s15
  if (lhs->s15 != rhs->s15) {
    return false;
  }
  // s16
  if (lhs->s16 != rhs->s16) {
    return false;
  }
  return true;
}

bool
my_custom_message__msg__Pressure__copy(
  const my_custom_message__msg__Pressure * input,
  my_custom_message__msg__Pressure * output)
{
  if (!input || !output) {
    return false;
  }
  // s01
  output->s01 = input->s01;
  // s02
  output->s02 = input->s02;
  // s03
  output->s03 = input->s03;
  // s04
  output->s04 = input->s04;
  // s05
  output->s05 = input->s05;
  // s06
  output->s06 = input->s06;
  // s07
  output->s07 = input->s07;
  // s08
  output->s08 = input->s08;
  // s09
  output->s09 = input->s09;
  // s10
  output->s10 = input->s10;
  // s11
  output->s11 = input->s11;
  // s12
  output->s12 = input->s12;
  // s13
  output->s13 = input->s13;
  // s14
  output->s14 = input->s14;
  // s15
  output->s15 = input->s15;
  // s16
  output->s16 = input->s16;
  return true;
}

my_custom_message__msg__Pressure *
my_custom_message__msg__Pressure__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_message__msg__Pressure * msg = (my_custom_message__msg__Pressure *)allocator.allocate(sizeof(my_custom_message__msg__Pressure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_message__msg__Pressure));
  bool success = my_custom_message__msg__Pressure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_message__msg__Pressure__destroy(my_custom_message__msg__Pressure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_message__msg__Pressure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_message__msg__Pressure__Sequence__init(my_custom_message__msg__Pressure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_message__msg__Pressure * data = NULL;

  if (size) {
    data = (my_custom_message__msg__Pressure *)allocator.zero_allocate(size, sizeof(my_custom_message__msg__Pressure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_message__msg__Pressure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_message__msg__Pressure__fini(&data[i - 1]);
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
my_custom_message__msg__Pressure__Sequence__fini(my_custom_message__msg__Pressure__Sequence * array)
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
      my_custom_message__msg__Pressure__fini(&array->data[i]);
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

my_custom_message__msg__Pressure__Sequence *
my_custom_message__msg__Pressure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_message__msg__Pressure__Sequence * array = (my_custom_message__msg__Pressure__Sequence *)allocator.allocate(sizeof(my_custom_message__msg__Pressure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_message__msg__Pressure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_message__msg__Pressure__Sequence__destroy(my_custom_message__msg__Pressure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_message__msg__Pressure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_message__msg__Pressure__Sequence__are_equal(const my_custom_message__msg__Pressure__Sequence * lhs, const my_custom_message__msg__Pressure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_message__msg__Pressure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_message__msg__Pressure__Sequence__copy(
  const my_custom_message__msg__Pressure__Sequence * input,
  my_custom_message__msg__Pressure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_message__msg__Pressure);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_message__msg__Pressure * data =
      (my_custom_message__msg__Pressure *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_message__msg__Pressure__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_message__msg__Pressure__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_message__msg__Pressure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
