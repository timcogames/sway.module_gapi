#ifndef SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
#define SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define FRAME_BUFFER_ATTACHMENT_LIST(ITEM) \
  ITEM(DEPTH_STENCIL, 1) \
  ITEM(DEPTH, 2) \
  ITEM(STENCIL, 3) \
  ITEM(COL_1, 4) \
  ITEM(COL_2, 5) \
  ITEM(COL_3, 6) \
  ITEM(COL_4, 7) \
  ITEM(COL_5, 8)
// clang-format on

DECLARE_ENUM_U32(FrameBufferAttachment, FRAME_BUFFER_ATTACHMENT_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
