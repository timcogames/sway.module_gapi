#ifndef SWAY_GAPI_BUFFERACCESSES_HPP
#define SWAY_GAPI_BUFFERACCESSES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class BufferAccess : u32_t {
  UNDEF,
  READ,
  WRITE,
  READ_WRITE
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERACCESSES_HPP
