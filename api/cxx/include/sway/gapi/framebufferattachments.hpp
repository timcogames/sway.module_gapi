#ifndef SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
#define SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

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

}  // namespace sway::gapi

#endif  // SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
