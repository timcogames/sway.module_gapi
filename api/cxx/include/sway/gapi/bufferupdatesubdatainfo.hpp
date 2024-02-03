#ifndef SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP
#define SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferUpdateSubdataInfo {
  const void *data;
  s32_t capacity;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP
