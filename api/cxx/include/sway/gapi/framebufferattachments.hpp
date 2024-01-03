#ifndef SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
#define SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class FramebufferAttachment : u32_t {
  UNDEF,
  DEPTH_STENCIL,
  DEPTH,
  STENCIL,
  COL_1,
  COL_2,
  COL_3,
  COL_4,
  COL_5
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
