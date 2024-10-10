#ifndef SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
#define SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

// clang-format off
DECLARE_ENUM(FrameBufferAttachment,
  DEPTH_STENCIL,
  DEPTH,
  STENCIL,
  COL_1,
  COL_2,
  COL_3,
  COL_4,
  COL_5
);
// clang-format on

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
