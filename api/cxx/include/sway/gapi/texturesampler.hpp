#ifndef SWAY_GAPI_TEXTURESAMPLER_HPP
#define SWAY_GAPI_TEXTURESAMPLER_HPP

#include <sway/core.hpp>
#include <sway/gapi/texturefilters.hpp>
#include <sway/gapi/texturewraps.hpp>
#include <sway/gapi/typedefs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class TextureSampler {
  DECLARE_PTR_ALIASES(TextureSampler)

public:
#pragma region "Ctors/Dtor"

  DTOR_VIRTUAL_DEFAULT(TextureSampler);

#pragma endregion

  PURE_VIRTUAL(void setWrapMode(TextureWrap::Enum wrapS, TextureWrap::Enum wrapT, TextureWrap::Enum wrapR));

  PURE_VIRTUAL(void setFilterMode(TextureFilter::Enum minFilter, TextureFilter::Enum magFilter));
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_TEXTURESAMPLER_HPP
