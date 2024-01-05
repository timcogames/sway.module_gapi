#ifndef SWAY_GAPI_COMPAREFUNCTIONS_HPP
#define SWAY_GAPI_COMPAREFUNCTIONS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class CompareFunction : u32_t {
  UNDEF,
  ALWAYS,
  NEVER,
  EQUAL,
  NOT_EQUAL,
  LESS,
  LESS_OR_EQUAL,
  GREATER,
  GREATER_OR_EQUAL
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_COMPAREFUNCTIONS_HPP
