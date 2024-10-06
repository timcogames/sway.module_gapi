#ifndef SWAY_GAPI_BUFFERDESCRIPTOR_HPP
#define SWAY_GAPI_BUFFERDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

struct BufferDescriptor {
  BufferTarget::Enum target;
  BufferUsage::Enum usage;
  i32_t byteStride;
  i32_t capacity;  // Количество элементов в массиве.

  BufferDescriptor()
      : target(BufferTarget::Enum::NONE)
      , usage(BufferUsage::Enum::NONE)
      , byteStride(0)
      , capacity(0) {}
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BUFFERDESCRIPTOR_HPP
