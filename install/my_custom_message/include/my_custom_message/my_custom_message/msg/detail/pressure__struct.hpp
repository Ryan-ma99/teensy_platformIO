// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_message:msg/Pressure.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MESSAGE__MSG__DETAIL__PRESSURE__STRUCT_HPP_
#define MY_CUSTOM_MESSAGE__MSG__DETAIL__PRESSURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_message__msg__Pressure __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_message__msg__Pressure __declspec(deprecated)
#endif

namespace my_custom_message
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pressure_
{
  using Type = Pressure_<ContainerAllocator>;

  explicit Pressure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s01 = 0;
      this->s02 = 0;
      this->s03 = 0;
      this->s04 = 0;
      this->s05 = 0;
      this->s06 = 0;
      this->s07 = 0;
      this->s08 = 0;
      this->s09 = 0;
      this->s10 = 0;
      this->s11 = 0;
      this->s12 = 0;
      this->s13 = 0;
      this->s14 = 0;
      this->s15 = 0;
      this->s16 = 0;
    }
  }

  explicit Pressure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s01 = 0;
      this->s02 = 0;
      this->s03 = 0;
      this->s04 = 0;
      this->s05 = 0;
      this->s06 = 0;
      this->s07 = 0;
      this->s08 = 0;
      this->s09 = 0;
      this->s10 = 0;
      this->s11 = 0;
      this->s12 = 0;
      this->s13 = 0;
      this->s14 = 0;
      this->s15 = 0;
      this->s16 = 0;
    }
  }

  // field types and members
  using _s01_type =
    uint16_t;
  _s01_type s01;
  using _s02_type =
    uint16_t;
  _s02_type s02;
  using _s03_type =
    uint16_t;
  _s03_type s03;
  using _s04_type =
    uint16_t;
  _s04_type s04;
  using _s05_type =
    uint16_t;
  _s05_type s05;
  using _s06_type =
    uint16_t;
  _s06_type s06;
  using _s07_type =
    uint16_t;
  _s07_type s07;
  using _s08_type =
    uint16_t;
  _s08_type s08;
  using _s09_type =
    uint16_t;
  _s09_type s09;
  using _s10_type =
    uint16_t;
  _s10_type s10;
  using _s11_type =
    uint16_t;
  _s11_type s11;
  using _s12_type =
    uint16_t;
  _s12_type s12;
  using _s13_type =
    uint16_t;
  _s13_type s13;
  using _s14_type =
    uint16_t;
  _s14_type s14;
  using _s15_type =
    uint16_t;
  _s15_type s15;
  using _s16_type =
    uint16_t;
  _s16_type s16;

  // setters for named parameter idiom
  Type & set__s01(
    const uint16_t & _arg)
  {
    this->s01 = _arg;
    return *this;
  }
  Type & set__s02(
    const uint16_t & _arg)
  {
    this->s02 = _arg;
    return *this;
  }
  Type & set__s03(
    const uint16_t & _arg)
  {
    this->s03 = _arg;
    return *this;
  }
  Type & set__s04(
    const uint16_t & _arg)
  {
    this->s04 = _arg;
    return *this;
  }
  Type & set__s05(
    const uint16_t & _arg)
  {
    this->s05 = _arg;
    return *this;
  }
  Type & set__s06(
    const uint16_t & _arg)
  {
    this->s06 = _arg;
    return *this;
  }
  Type & set__s07(
    const uint16_t & _arg)
  {
    this->s07 = _arg;
    return *this;
  }
  Type & set__s08(
    const uint16_t & _arg)
  {
    this->s08 = _arg;
    return *this;
  }
  Type & set__s09(
    const uint16_t & _arg)
  {
    this->s09 = _arg;
    return *this;
  }
  Type & set__s10(
    const uint16_t & _arg)
  {
    this->s10 = _arg;
    return *this;
  }
  Type & set__s11(
    const uint16_t & _arg)
  {
    this->s11 = _arg;
    return *this;
  }
  Type & set__s12(
    const uint16_t & _arg)
  {
    this->s12 = _arg;
    return *this;
  }
  Type & set__s13(
    const uint16_t & _arg)
  {
    this->s13 = _arg;
    return *this;
  }
  Type & set__s14(
    const uint16_t & _arg)
  {
    this->s14 = _arg;
    return *this;
  }
  Type & set__s15(
    const uint16_t & _arg)
  {
    this->s15 = _arg;
    return *this;
  }
  Type & set__s16(
    const uint16_t & _arg)
  {
    this->s16 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_message::msg::Pressure_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_message::msg::Pressure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_message::msg::Pressure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_message::msg::Pressure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_message::msg::Pressure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_message::msg::Pressure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_message::msg::Pressure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_message::msg::Pressure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_message::msg::Pressure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_message::msg::Pressure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_message__msg__Pressure
    std::shared_ptr<my_custom_message::msg::Pressure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_message__msg__Pressure
    std::shared_ptr<my_custom_message::msg::Pressure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pressure_ & other) const
  {
    if (this->s01 != other.s01) {
      return false;
    }
    if (this->s02 != other.s02) {
      return false;
    }
    if (this->s03 != other.s03) {
      return false;
    }
    if (this->s04 != other.s04) {
      return false;
    }
    if (this->s05 != other.s05) {
      return false;
    }
    if (this->s06 != other.s06) {
      return false;
    }
    if (this->s07 != other.s07) {
      return false;
    }
    if (this->s08 != other.s08) {
      return false;
    }
    if (this->s09 != other.s09) {
      return false;
    }
    if (this->s10 != other.s10) {
      return false;
    }
    if (this->s11 != other.s11) {
      return false;
    }
    if (this->s12 != other.s12) {
      return false;
    }
    if (this->s13 != other.s13) {
      return false;
    }
    if (this->s14 != other.s14) {
      return false;
    }
    if (this->s15 != other.s15) {
      return false;
    }
    if (this->s16 != other.s16) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pressure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pressure_

// alias to use template instance with default allocator
using Pressure =
  my_custom_message::msg::Pressure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_custom_message

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__PRESSURE__STRUCT_HPP_
