#ifndef SWAY_GAPI_TEXTURESUBDATADESCRIPTOR_HPP
#define SWAY_GAPI_TEXTURESUBDATADESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/pixelformats.hpp>
#include <sway/math.hpp>

namespace sway::gapi {

struct TextureSubdataDescriptor {
  int level;
  math::point2i_t offset;
  math::size2i_t size;
  PixelFormat format;
  core::ValueDataType::Enum type;
  const void *pixels;
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TEXTURESUBDATADESCRIPTOR_HPP
