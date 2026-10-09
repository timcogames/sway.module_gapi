#ifndef SWAY_GAPI_STATECAPABILITIES_HPP
#define SWAY_GAPI_STATECAPABILITIES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define STATE_CAPABILITY_LIST(ITEM) \
  ITEM(BLEND, 1) \
  ITEM(RASTERIZER, 2) \
  ITEM(CULL_FACE, 3) \
  ITEM(ALPHA_TEST, 4) \
  ITEM(DEPTH_TEST, 5) \
  ITEM(SCISSOR_TEST, 6) \
  ITEM(STENCIL_TEST, 7)
// clang-format on

DECLARE_ENUM_U32(StateCapability, STATE_CAPABILITY_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_STATECAPABILITIES_HPP
