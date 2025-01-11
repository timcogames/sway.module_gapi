#ifndef SWAY_GAPI_COMPAREFUNCTIONS_HPP
#define SWAY_GAPI_COMPAREFUNCTIONS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

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

}  // namespace sway::gapi

#endif  // SWAY_GAPI_COMPAREFUNCTIONS_HPP
