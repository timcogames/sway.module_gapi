#ifndef SWAY_GAPI_BUFFERCREATEINFO_HPP
#define SWAY_GAPI_BUFFERCREATEINFO_HPP

#include <sway/core.hpp>
#include <sway/gapi/bufferdescriptor.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferCreateInfo {
  BufferDescriptor desc;
  void *data;  // Первоначальный данные.
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERCREATEINFO_HPP
