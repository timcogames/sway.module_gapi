#ifndef SWAY_GAPI_COMPAREFUNCTIONS_HPP
#define SWAY_GAPI_COMPAREFUNCTIONS_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

// clang-format off
DECLARE_ENUM(CompareFn,
  ALWAYS,
  NEVER,
  EQUAL,
  NOT_EQUAL,
  LESS,
  LESS_OR_EQUAL,
  GREATER,
  GREATER_OR_EQUAL
);
// clang-format on

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_COMPAREFUNCTIONS_HPP
