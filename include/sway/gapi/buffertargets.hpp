#ifndef SWAY_GAPI_BUFFERTARGETS_HPP
#define SWAY_GAPI_BUFFERTARGETS_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferTarget : u32_t { ARRAY, ELEMENT_ARRAY, UNIFORM, TEXTURE };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERTARGETS_HPP
