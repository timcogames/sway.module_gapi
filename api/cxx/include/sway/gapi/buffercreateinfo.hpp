#ifndef SWAY_GAPI_BUFFERCREATEINFO_HPP
#define SWAY_GAPI_BUFFERCREATEINFO_HPP

#include <sway/core.hpp>
#include <sway/gapi/bufferdescriptor.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

struct BufferCreateInfo {
  BufferDescriptor desc;
  void *data;  ///< Первоначальный данные.
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BUFFERCREATEINFO_HPP
