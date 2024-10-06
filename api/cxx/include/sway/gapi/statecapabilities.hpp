#ifndef SWAY_GAPI_STATECAPABILITIES_HPP
#define SWAY_GAPI_STATECAPABILITIES_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

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

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_STATECAPABILITIES_HPP
