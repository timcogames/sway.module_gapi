#ifndef SWAY_GAPI_BUFFERACCESSES_HPP
#define SWAY_GAPI_BUFFERACCESSES_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferAccess : u32_t { READ, WRITE, READ_WRITE };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERACCESSES_HPP
