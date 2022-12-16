#ifndef SWAY_GAPI_BUFFERDESCRIPTOR_HPP
#define SWAY_GAPI_BUFFERDESCRIPTOR_HPP

#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferDescriptor {
  BufferTarget target;
  BufferUsage usage;
  s32_t byteStride;
  s32_t capacity;  // Количество элементов в массиве.
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERDESCRIPTOR_HPP
