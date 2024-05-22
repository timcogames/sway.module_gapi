#ifndef SWAY_GAPI_BUFFERUSAGES_HPP
#define SWAY_GAPI_BUFFERUSAGES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferUsage : u32_t { NONE = 0, STATIC, DYNAMIC, STREAM, Latest };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERUSAGES_HPP
