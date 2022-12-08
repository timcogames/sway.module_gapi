#ifndef SWAY_GAPI_BUFFERACCESSES_HPP
#define SWAY_GAPI_BUFFERACCESSES_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferAccess_t : u32_t { Read, Write, ReadWrite };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERACCESSES_HPP
