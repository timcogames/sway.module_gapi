#ifndef SWAY_GAPI_STATECAPABILITIES_HPP
#define SWAY_GAPI_STATECAPABILITIES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
DECLARE_ENUM(StateCapability,
  BLEND,
  RASTERIZER,
  CULL_FACE,
  ALPHA_TEST,
  DEPTH_TEST,
  SCISSOR_TEST,
  STENCIL_TEST
);
// clang-format on

}  // namespace sway::gapi

#endif  // SWAY_GAPI_STATECAPABILITIES_HPP
