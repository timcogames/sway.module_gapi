#ifndef SWAY_GAPI_TEXTURECREATEINFO_HPP
#define SWAY_GAPI_TEXTURECREATEINFO_HPP

#include <sway/core.hpp>
#include <sway/gapi/pixelformats.hpp>
#include <sway/gapi/texturetargets.hpp>
#include <sway/math.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

struct TextureCreateInfo {
  TextureTarget::Enum target;
  math::size2i_t size;
  u32_t arraySize;
  PixelFormat format, internalFormat;
  core::ValueDataType::Enum dataType;
  s8_t *pixels;
  u32_t mipLevels;
  u32_t sampleCount;
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_TEXTURECREATEINFO_HPP
