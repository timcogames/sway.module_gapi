#ifndef SWAY_GAPI_BUFFERCREATEINFO_HPP
#define SWAY_GAPI_BUFFERCREATEINFO_HPP

#include <sway/core.hpp>
#include <sway/gapi/bufferdescriptor.hpp>

namespace sway::gapi {

struct BufferCreateInfo {
  BufferDescriptor desc;
  void *data;  ///< Первоначальный данные.
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_BUFFERCREATEINFO_HPP
