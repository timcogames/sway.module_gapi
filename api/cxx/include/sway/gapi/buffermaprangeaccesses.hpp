#ifndef SWAY_GAPI_BUFFERMAPRANGEACCESSES_HPP
#define SWAY_GAPI_BUFFERMAPRANGEACCESSES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferMapRangeAccess : u32_t {
  UNDEF = 0,
  READ,
  WRITE,
  INVALIDATE_RANGE,
  INVALIDATE_BUFFER,
  FLUSH_EXPLICIT,
  UNSYNCHRONIZED,
  Latest
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERMAPRANGEACCESSES_HPP