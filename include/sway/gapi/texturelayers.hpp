#ifndef SWAY_GAPI_TEXTURELAYERS_HPP
#define SWAY_GAPI_TEXTURELAYERS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class TextureLayer_t : u32_t { kDiffuse, kSpecular, kEmissive, kNormal, kLast };

#define TEXTURE_LAYER_COUNT (core::detail::toUnderlying(TextureLayer_t::kLast))

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
