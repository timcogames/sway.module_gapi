#ifndef SWAY_GAPI_BUFFERIDQUEUE_HPP
#define SWAY_GAPI_BUFFERIDQUEUE_HPP

#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

using BufferIdType = u32_t;

class BufferIdQueue {
public:
  // clang-format off
  PURE_VIRTUAL(auto newGuid() -> BufferIdType);  // clang-format on
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERIDQUEUE_HPP
