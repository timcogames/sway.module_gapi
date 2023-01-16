#ifndef SWAY_GAPI_TEXTURESAMPLER_HPP
#define SWAY_GAPI_TEXTURESAMPLER_HPP

#include <sway/gapi/texturefilters.hpp>
#include <sway/gapi/texturewraps.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class TextureSampler {
public:
  virtual ~TextureSampler() = default;

  PURE_VIRTUAL(void setWrapMode(TextureWrap wrapS, TextureWrap wrapT, TextureWrap wrapR));

  PURE_VIRTUAL(void setFilterMode(TextureFilter minFilter, TextureFilter magFilter));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTURESAMPLER_HPP
