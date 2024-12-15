// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__TRAITS_HPP_
#define MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_message/msg/detail/my_custom_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_message
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyCustomMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: int8_test
  {
    out << "int8_test: ";
    rosidl_generator_traits::value_to_yaml(msg.int8_test, out);
    out << ", ";
  }

  // member: uint8_test
  {
    out << "uint8_test: ";
    rosidl_generator_traits::value_to_yaml(msg.uint8_test, out);
    out << ", ";
  }

  // member: int16_test
  {
    out << "int16_test: ";
    rosidl_generator_traits::value_to_yaml(msg.int16_test, out);
    out << ", ";
  }

  // member: uint16_test
  {
    out << "uint16_test: ";
    rosidl_generator_traits::value_to_yaml(msg.uint16_test, out);
    out << ", ";
  }

  // member: int32_test
  {
    out << "int32_test: ";
    rosidl_generator_traits::value_to_yaml(msg.int32_test, out);
    out << ", ";
  }

  // member: uint32_test
  {
    out << "uint32_test: ";
    rosidl_generator_traits::value_to_yaml(msg.uint32_test, out);
    out << ", ";
  }

  // member: int64_test
  {
    out << "int64_test: ";
    rosidl_generator_traits::value_to_yaml(msg.int64_test, out);
    out << ", ";
  }

  // member: uint64_test
  {
    out << "uint64_test: ";
    rosidl_generator_traits::value_to_yaml(msg.uint64_test, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyCustomMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: int8_test
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int8_test: ";
    rosidl_generator_traits::value_to_yaml(msg.int8_test, out);
    out << "\n";
  }

  // member: uint8_test
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint8_test: ";
    rosidl_generator_traits::value_to_yaml(msg.uint8_test, out);
    out << "\n";
  }

  // member: int16_test
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int16_test: ";
    rosidl_generator_traits::value_to_yaml(msg.int16_test, out);
    out << "\n";
  }

  // member: uint16_test
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint16_test: ";
    rosidl_generator_traits::value_to_yaml(msg.uint16_test, out);
    out << "\n";
  }

  // member: int32_test
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int32_test: ";
    rosidl_generator_traits::value_to_yaml(msg.int32_test, out);
    out << "\n";
  }

  // member: uint32_test
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint32_test: ";
    rosidl_generator_traits::value_to_yaml(msg.uint32_test, out);
    out << "\n";
  }

  // member: int64_test
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int64_test: ";
    rosidl_generator_traits::value_to_yaml(msg.int64_test, out);
    out << "\n";
  }

  // member: uint64_test
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint64_test: ";
    rosidl_generator_traits::value_to_yaml(msg.uint64_test, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyCustomMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_custom_message

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_message::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_message::msg::MyCustomMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_message::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_message::msg::MyCustomMessage & msg)
{
  return my_custom_message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_message::msg::MyCustomMessage>()
{
  return "my_custom_message::msg::MyCustomMessage";
}

template<>
inline const char * name<my_custom_message::msg::MyCustomMessage>()
{
  return "my_custom_message/msg/MyCustomMessage";
}

template<>
struct has_fixed_size<my_custom_message::msg::MyCustomMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_custom_message::msg::MyCustomMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_custom_message::msg::MyCustomMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__TRAITS_HPP_
