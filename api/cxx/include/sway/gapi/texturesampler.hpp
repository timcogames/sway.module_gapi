#ifndef SWAY_GAPI_TEXTURESAMPLER_HPP
#define SWAY_GAPI_TEXTURESAMPLER_HPP

#include <sway/core.hpp>
#include <sway/gapi/texturefilters.hpp>
#include <sway/gapi/texturewraps.hpp>
#include <sway/gapi/typedefs.hpp>

namespace sway::gapi {

class TextureSampler {
public:
#pragma region "Ctors/Dtor"

  DTOR_VIRTUAL_DEFAULT(TextureSampler);

#pragma endregion

  PURE_VIRTUAL(void setWrapMode(TextureWrap::Enum wrapS, TextureWrap::Enum wrapT, TextureWrap::Enum wrapR));

  PURE_VIRTUAL(void setFilterMode(TextureFilter::Enum minFilter, TextureFilter::Enum magFilter));
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TEXTURESAMPLER_HPP
