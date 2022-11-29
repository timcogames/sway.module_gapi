#ifndef SWAY_GAPI_BUFFERCREATEINFO_HPP
#define SWAY_GAPI_BUFFERCREATEINFO_HPP

#include <sway/gapi/bufferdescriptor.hpp>
#include <sway/namespacemacros.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferCreateInfo {
  BufferDescriptor desc;
  const void *data; /*!< Первоначальный данные. */
};

struct BufferCreateInfoSet {
  BufferCreateInfo vb;
  BufferCreateInfo ib;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERCREATEINFO_HPP
