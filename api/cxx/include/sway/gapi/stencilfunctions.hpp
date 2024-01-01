#ifndef SWAY_GAPI_STENCILFUNCTIONS_HPP
#define SWAY_GAPI_STENCILFUNCTIONS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class StencilFunction : u32_t {
  NEVER,
  ALWAYS,
  LESS,
  LESS_OR_EQUAL,
  EQUAL,
  NOT_EQUAL,
  GREATER_OR_EQUAL,
  GREATER
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STENCILFUNCTIONS_HPP
