#ifndef SWAY_GAPI_BUFFERTARGETS_HPP
#define SWAY_GAPI_BUFFERTARGETS_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferTarget_t : u32_t { kNone, kArray, kElementArray, kUniform, kTexture };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
