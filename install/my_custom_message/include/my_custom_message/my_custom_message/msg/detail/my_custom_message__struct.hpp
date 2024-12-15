// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_HPP_
#define MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_message__msg__MyCustomMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_message__msg__MyCustomMessage __declspec(deprecated)
#endif

namespace my_custom_message
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyCustomMessage_
{
  using Type = MyCustomMessage_<ContainerAllocator>;

  explicit MyCustomMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->int8_test = 0;
      this->uint8_test = 0;
      this->int16_test = 0;
      this->uint16_test = 0;
      this->int32_test = 0l;
      this->uint32_test = 0ul;
      this->int64_test = 0ll;
      this->uint64_test = 0ull;
    }
  }

  explicit MyCustomMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->int8_test = 0;
      this->uint8_test = 0;
      this->int16_test = 0;
      this->uint16_test = 0;
      this->int32_test = 0l;
      this->uint32_test = 0ul;
      this->int64_test = 0ll;
      this->uint64_test = 0ull;
    }
  }

  // field types and members
  using _int8_test_type =
    int8_t;
  _int8_test_type int8_test;
  using _uint8_test_type =
    uint8_t;
  _uint8_test_type uint8_test;
  using _int16_test_type =
    int16_t;
  _int16_test_type int16_test;
  using _uint16_test_type =
    uint16_t;
  _uint16_test_type uint16_test;
  using _int32_test_type =
    int32_t;
  _int32_test_type int32_test;
  using _uint32_test_type =
    uint32_t;
  _uint32_test_type uint32_test;
  using _int64_test_type =
    int64_t;
  _int64_test_type int64_test;
  using _uint64_test_type =
    uint64_t;
  _uint64_test_type uint64_test;

  // setters for named parameter idiom
  Type & set__int8_test(
    const int8_t & _arg)
  {
    this->int8_test = _arg;
    return *this;
  }
  Type & set__uint8_test(
    const uint8_t & _arg)
  {
    this->uint8_test = _arg;
    return *this;
  }
  Type & set__int16_test(
    const int16_t & _arg)
  {
    this->int16_test = _arg;
    return *this;
  }
  Type & set__uint16_test(
    const uint16_t & _arg)
  {
    this->uint16_test = _arg;
    return *this;
  }
  Type & set__int32_test(
    const int32_t & _arg)
  {
    this->int32_test = _arg;
    return *this;
  }
  Type & set__uint32_test(
    const uint32_t & _arg)
  {
    this->uint32_test = _arg;
    return *this;
  }
  Type & set__int64_test(
    const int64_t & _arg)
  {
    this->int64_test = _arg;
    return *this;
  }
  Type & set__uint64_test(
    const uint64_t & _arg)
  {
    this->uint64_test = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_message::msg::MyCustomMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_message::msg::MyCustomMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_message__msg__MyCustomMessage
    std::shared_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_message__msg__MyCustomMessage
    std::shared_ptr<my_custom_message::msg::MyCustomMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyCustomMessage_ & other) const
  {
    if (this->int8_test != other.int8_test) {
      return false;
    }
    if (this->uint8_test != other.uint8_test) {
      return false;
    }
    if (this->int16_test != other.int16_test) {
      return false;
    }
    if (this->uint16_test != other.uint16_test) {
      return false;
    }
    if (this->int32_test != other.int32_test) {
      return false;
    }
    if (this->uint32_test != other.uint32_test) {
      return false;
    }
    if (this->int64_test != other.int64_test) {
      return false;
    }
    if (this->uint64_test != other.uint64_test) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyCustomMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyCustomMessage_

// alias to use template instance with default allocator
using MyCustomMessage =
  my_custom_message::msg::MyCustomMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_custom_message

#endif  // MY_CUSTOM_MESSAGE__MSG__DETAIL__MY_CUSTOM_MESSAGE__STRUCT_HPP_
