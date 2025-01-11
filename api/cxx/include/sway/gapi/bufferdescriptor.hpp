#ifndef SWAY_GAPI_BUFFERDESCRIPTOR_HPP
#define SWAY_GAPI_BUFFERDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>

namespace sway::gapi {

struct BufferDescriptor {
  BufferTarget::Enum target;
  BufferUsage::Enum usage;
  i32_t byteStride;
  i32_t capacity;  ///< Количество элементов в массиве.

  BufferDescriptor()
      : target(BufferTarget::Enum::NONE)
      , usage(BufferUsage::Enum::NONE)
      , byteStride(0)
      , capacity(0) {}
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_BUFFERDESCRIPTOR_HPP
