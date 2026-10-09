#ifndef SWAY_GAPI_COMPAREFUNCTIONS_HPP
#define SWAY_GAPI_COMPAREFUNCTIONS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define COMPARE_FUNCTION_LIST(ITEM) \
  ITEM(ALWAYS, 1) \
  ITEM(NEVER, 2) \
  ITEM(EQUAL, 3) \
  ITEM(NOT_EQUAL, 4) \
  ITEM(LESS, 5) \
  ITEM(LESS_OR_EQUAL, 6) \
  ITEM(GREATER, 7) \
  ITEM(GREATER_OR_EQUAL, 8)
// clang-format on

DECLARE_ENUM_U32(CompareFn, COMPARE_FUNCTION_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_COMPAREFUNCTIONS_HPP
