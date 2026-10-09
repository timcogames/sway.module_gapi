#ifndef SWAY_GAPI_BLENDEQUATIONS_HPP
#define SWAY_GAPI_BLENDEQUATIONS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define BLEND_EQ_LIST(ITEM) \
  ITEM(ADD, 1) \
  ITEM(SUBTRACT, 2) \
  ITEM(REVERSE_SUBTRACT, 3) \
  ITEM(MIN, 4) \
  ITEM(MAX, 5)
// clang-format on

DECLARE_ENUM_U32(BlendEq, BLEND_EQ_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_BLENDEQUATIONS_HPP
