#ifndef SWAY_GAPI_TEXTURELAYERS_HPP
#define SWAY_GAPI_TEXTURELAYERS_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

enum class TextureLayer : u32_t { NONE = 0, DIFFUSE, SPECULAR, EMISSIVE, NORMAL, Latest };

#define NUM_TEXTURE_LAYERS (core::detail::toBase(TextureLayer::Latest))

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_TEXTURELAYERS_HPP
