#ifndef SWAY_GAPI_BUFFERDESCRIPTOR_HPP
#define SWAY_GAPI_BUFFERDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferDescriptor {
  BufferTarget target;
  BufferUsage usage;
  i32_t byteStride;
  i32_t capacity;  // Количество элементов в массиве.

  BufferDescriptor()
      : target(BufferTarget::NONE)
      , usage(BufferUsage::NONE)
      , byteStride(0)
      , capacity(0) {}
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERDESCRIPTOR_HPP
