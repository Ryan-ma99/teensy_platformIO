// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_message:msg/Pressure.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MESSAGE__MSG__DETAIL__PRESSURE__TRAITS_HPP_
#define MY_CUSTOM_MESSAGE__MSG__DETAIL__PRESSURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_message/msg/detail/pressure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_message
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pressure & msg,
  std::ostream & out)
{
  out << "{";
  // member: s01
  {
    out << "s01: ";
    rosidl_generator_traits::value_to_yaml(msg.s01, out);
    out << ", ";
  }

  // member: s02
  {
    out << "s02: ";
    rosidl_generator_traits::value_to_yaml(msg.s02, out);
    out << ", ";
  }

  // member: s03
  {
    out << "s03: ";
    rosidl_generator_traits::value_to_yaml(msg.s03, out);
    out << ", ";
  }

  // member: s04
  {
    out << "s04: ";
    rosidl_generator_traits::value_to_yaml(msg.s04, out);
    out << ", ";
  }

  // member: s05
  {
    out << "s05: ";
    rosidl_generator_traits::value_to_yaml(msg.s05, out);
    out << ", ";
  }

  // member: s06
  {
    out << "s06: ";
    rosidl_generator_traits::value_to_yaml(msg.s06, out);
    out << ", ";
  }

  // member: s07
  {
    out << "s07: ";
    rosidl_generator_traits::value_to_yaml(msg.s07, out);
    out << ", ";
  }

  // member: s08
  {
    out << "s08: ";
    rosidl_generator_traits::value_to_yaml(msg.s08, out);
    out << ", ";
  }

  // member: s09
  {
    out << "s09: ";
    rosidl_generator_traits::value_to_yaml(msg.s09, out);
    out << ", ";
  }

  // member: s10
  {
    out << "s10: ";
    rosidl_generator_traits::value_to_yaml(msg.s10, out);
    out << ", ";
  }

  // member: s11
  {
    out << "s11: ";
    rosidl_generator_traits::value_to_yaml(msg.s11, out);
    out << ", ";
  }

  // member: s12
  {
    out << "s12: ";
    rosidl_generator_traits::value_to_yaml(msg.s12, out);
    out << ", ";
  }

  // member: s13
  {
    out << "s13: ";
    rosidl_generator_traits::value_to_yaml(msg.s13, out);
    out << ", ";
  }

  // member: s14
  {
    out << "s14: ";
    rosidl_generator_traits::value_to_yaml(msg.s14, out);
    out << ", ";
  }

  // member: s15
  {
    out << "s15: ";
    rosidl_generator_traits::value_to_yaml(msg.s15, out);
    out << ", ";
  }

  // member: s16
  {
    out << "s16: ";
    rosidl_generator_traits::value_to_yaml(msg.s16, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pressure & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: s01
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s01: ";
    rosidl_generator_traits::value_to_yaml(msg.s01, out);
    out << "\n";
  }

  // member: s02
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s02: ";
    rosidl_generator_traits::value_to_yaml(msg.s02, out);
    out << "\n";
  }

  // member: s03
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s03: ";
    rosidl_generator_traits::value_to_yaml(msg.s03, out);
    out << "\n";
  }

  // member: s04
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s04: ";
    rosidl_generator_traits::value_to_yaml(msg.s04, out);
    out << "\n";
  }

  // member: s05
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s05: ";
    rosidl_generator_traits::value_to_yaml(msg.s05, out);
    out << "\n";
  }

  // member: s06
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s06: ";
    rosidl_generator_traits::value_to_yaml(msg.s06, out);
    out << "\n";
  }

  // member: s07
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s07: ";
    rosidl_generator_traits::value_to_yaml(msg.s07, out);
    out << "\n";
  }

  // member: s08
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s08: ";
    rosidl_generator_traits::value_to_yaml(msg.s08, out);
    out << "\n";
  }

  // member: s09
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s09: ";
    rosidl_generator_traits::value_to_yaml(msg.s09, out);
    out << "\n";
  }

  // member: s10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s10: ";
    rosidl_generator_traits::value_to_yaml(msg.s10, out);
    out << "\n";
  }

  // member: s11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s11: ";
    rosidl_generator_traits::value_to_yaml(msg.s11, out);
    out << "\n";
  }

  // member: s12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s12: ";
    rosidl_generator_traits::value_to_yaml(msg.s12, out);
    out << "\n";
  }

  // member: s13
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s13: ";
    rosidl_generator_traits::value_to_yaml(msg.s13, out);
    out << "\n";
  }

  // member: s14
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s14: ";
    rosidl_generator_traits::value_to_yaml(msg.s14, out);
    out << "\n";
  }

  // member: s15
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s15: ";
    rosidl_generator_traits::value_to_yaml(msg.s15, out);
    out << "\n";
  }

  // member: s16
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s16: ";
    rosidl_generator_traits::value_to_yaml(msg.s16, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pressure & msg, bool use_flow_style = false)
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
  const my_custom_message::msg::Pressure & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_message::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_message::msg::Pressure & msg)
{
  return my_custom_message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_message::msg::Pressure>()
{
  return "my_custom_message::msg::Pressure";
}

template<>
inline const char * name<my_custom_message::msg::Pressure>()
{
  return "my_custom_message/msg/Pressure";
}

template<>
struct has_fixed_size<my_custom_message::msg::Pressure>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_custom_message::msg::Pressure>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_custom_message::msg::Pressure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__PRESSURE__TRAITS_HPP_
