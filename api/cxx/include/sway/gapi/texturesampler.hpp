#ifndef SWAY_GAPI_TEXTURESAMPLER_HPP
#define SWAY_GAPI_TEXTURESAMPLER_HPP

#include <sway/core.hpp>
#include <sway/gapi/texturefilters.hpp>
#include <sway/gapi/texturewraps.hpp>
#include <sway/gapi/typedefs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class TextureSampler {
  DECLARE_CLASS_POINTER_ALIASES(TextureSampler)

public:
  virtual ~TextureSampler() = default;

  PURE_VIRTUAL(void setWrapMode(TextureWrap::Enum wrapS, TextureWrap::Enum wrapT, TextureWrap::Enum wrapR));

  PURE_VIRTUAL(void setFilterMode(TextureFilter::Enum minFilter, TextureFilter::Enum magFilter));
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_TEXTURESAMPLER_HPP
