#ifndef SWAY_GAPI_BUFFERUSAGES_HPP
#define SWAY_GAPI_BUFFERUSAGES_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferUsage_t : u32_t { kNone, kStatic, kDynamic, kStream };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
