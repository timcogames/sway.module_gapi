#ifndef SWAY_GAPI_BUFFERMAPRANGEACCESSES_HPP
#define SWAY_GAPI_BUFFERMAPRANGEACCESSES_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

// clang-format off
DECLARE_ENUM(BufferMapRangeAccess,
  READ, WRITE,
  INVALIDATE_RANGE,
  INVALIDATE_BUFFER,
  FLUSH_EXPLICIT,
  UNSYNCHRONIZED
);
// clang-format on

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BUFFERMAPRANGEACCESSES_HPP
