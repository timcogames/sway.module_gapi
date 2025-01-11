#ifndef SWAY_GAPI_BUFFERMAPRANGEACCESSES_HPP
#define SWAY_GAPI_BUFFERMAPRANGEACCESSES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
DECLARE_ENUM(BufferMapRangeAccess,
  READ, WRITE,
  INVALIDATE_RANGE,
  INVALIDATE_BUFFER,
  FLUSH_EXPLICIT,
  UNSYNCHRONIZED
);
// clang-format on

}  // namespace sway::gapi

#endif  // SWAY_GAPI_BUFFERMAPRANGEACCESSES_HPP
