#ifndef SWAY_GAPI_TEXTURECREATEINFO_HPP
#define SWAY_GAPI_TEXTURECREATEINFO_HPP

#include <sway/core.hpp>
#include <sway/gapi/pixelformats.hpp>
#include <sway/gapi/texturetargets.hpp>
#include <sway/math.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct TextureCreateInfo {
  TextureTarget target;
  math::size2i_t size;
  u32_t arraySize;
  PixelFormat format, internalFormat;
  core::ValueDataType dataType;
  s8_t *pixels;
  u32_t mipLevels;
  u32_t sampleCount;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTURECREATEINFO_HPP
