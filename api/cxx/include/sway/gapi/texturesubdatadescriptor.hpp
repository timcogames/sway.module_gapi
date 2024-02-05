#ifndef SWAY_GAPI_TEXTURESUBDATADESCRIPTOR_HPP
#define SWAY_GAPI_TEXTURESUBDATADESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/pixelformats.hpp>
#include <sway/math.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct TextureSubdataDescriptor {
  int level;
  math::point2i_t offset;
  math::size2i_t size;
  PixelFormat format;
  core::ValueDataType type;
  const void *pixels;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTURESUBDATADESCRIPTOR_HPP
