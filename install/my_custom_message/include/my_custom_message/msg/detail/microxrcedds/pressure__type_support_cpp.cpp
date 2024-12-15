// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from my_custom_message:msg/Pressure.idl
// generated code does not contain a copyright notice
#include "my_custom_message/msg/detail/pressure__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "my_custom_message/msg/detail/pressure__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace my_custom_message
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_custom_message
cdr_serialize(
  const my_custom_message::msg::Pressure & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: s01
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s01);
  // Member: s02
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s02);
  // Member: s03
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s03);
  // Member: s04
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s04);
  // Member: s05
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s05);
  // Member: s06
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s06);
  // Member: s07
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s07);
  // Member: s08
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s08);
  // Member: s09
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s09);
  // Member: s10
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s10);
  // Member: s11
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s11);
  // Member: s12
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s12);
  // Member: s13
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s13);
  // Member: s14
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s14);
  // Member: s15
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s15);
  // Member: s16
  rv = ucdr_serialize_uint16_t(cdr, ros_message.s16);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_custom_message
cdr_deserialize(
  ucdrBuffer * cdr,
  my_custom_message::msg::Pressure & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: s01
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s01);
  // Member: s02
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s02);
  // Member: s03
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s03);
  // Member: s04
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s04);
  // Member: s05
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s05);
  // Member: s06
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s06);
  // Member: s07
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s07);
  // Member: s08
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s08);
  // Member: s09
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s09);
  // Member: s10
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s10);
  // Member: s11
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s11);
  // Member: s12
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s12);
  // Member: s13
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s13);
  // Member: s14
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s14);
  // Member: s15
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s15);
  // Member: s16
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.s16);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_custom_message
get_serialized_size(
  const my_custom_message::msg::Pressure & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: s01
  {
    const size_t item_size = sizeof(ros_message.s01);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s02
  {
    const size_t item_size = sizeof(ros_message.s02);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s03
  {
    const size_t item_size = sizeof(ros_message.s03);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s04
  {
    const size_t item_size = sizeof(ros_message.s04);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s05
  {
    const size_t item_size = sizeof(ros_message.s05);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s06
  {
    const size_t item_size = sizeof(ros_message.s06);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s07
  {
    const size_t item_size = sizeof(ros_message.s07);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s08
  {
    const size_t item_size = sizeof(ros_message.s08);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s09
  {
    const size_t item_size = sizeof(ros_message.s09);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s10
  {
    const size_t item_size = sizeof(ros_message.s10);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s11
  {
    const size_t item_size = sizeof(ros_message.s11);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s12
  {
    const size_t item_size = sizeof(ros_message.s12);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s13
  {
    const size_t item_size = sizeof(ros_message.s13);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s14
  {
    const size_t item_size = sizeof(ros_message.s14);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s15
  {
    const size_t item_size = sizeof(ros_message.s15);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: s16
  {
    const size_t item_size = sizeof(ros_message.s16);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_my_custom_message
max_serialized_size_Pressure(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: s01
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s02
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s03
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s04
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s05
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s06
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s07
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s08
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s09
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s10
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s11
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s12
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s13
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s14
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s15
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: s16
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);

  return current_alignment - initial_alignment;
}

static bool _Pressure__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const my_custom_message::msg::Pressure *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Pressure__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_custom_message::msg::Pressure *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Pressure__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_custom_message::msg::Pressure *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Pressure__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const my_custom_message::msg::Pressure *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Pressure__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Pressure(&full_bounded, 0);
}

static message_type_support_callbacks_t _Pressure__callbacks = {
  "my_custom_message::msg",
  "Pressure",
  _Pressure__cdr_serialize,
  _Pressure__cdr_deserialize,
  _Pressure__get_serialized_size,
  _Pressure__get_serialized_size_with_initial_alignment,
  _Pressure__max_serialized_size
};

static rosidl_message_type_support_t _Pressure__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Pressure__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace my_custom_message

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_my_custom_message
const rosidl_message_type_support_t *
get_message_type_support_handle<my_custom_message::msg::Pressure>()
{
  return &my_custom_message::msg::typesupport_microxrcedds_cpp::_Pressure__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, my_custom_message, msg, Pressure)() {
  return &my_custom_message::msg::typesupport_microxrcedds_cpp::_Pressure__handle;
}

#ifdef __cplusplus
}
#endif
