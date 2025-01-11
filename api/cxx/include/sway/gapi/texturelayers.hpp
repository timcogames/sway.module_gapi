#ifndef SWAY_GAPI_TEXTURELAYERS_HPP
#define SWAY_GAPI_TEXTURELAYERS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

enum class TextureLayer : u32_t { NONE = 0, DIFFUSE, SPECULAR, EMISSIVE, NORMAL, Latest };

#define NUM_TEXTURE_LAYERS (core::detail::toBase(TextureLayer::Latest))

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TEXTURELAYERS_HPP
