#ifndef SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
#define SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class FramebufferAttachment : u32_t { DEPTH_STENCIL, DEPTH, STENCIL, COL_1, COL_2, COL_3, COL_4, COL_5 };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_FRAMEBUFFERATTACHMENTS_HPP
