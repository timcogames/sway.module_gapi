#ifndef SWAY_GAPI_TEXTURELAYERS_H
#define SWAY_GAPI_TEXTURELAYERS_H

#include <sway/core.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class TextureLayer_t : u32_t {
	kDiffuse,
	kSpecular,
	kEmissive,
	kNormal,
	kLast
};

#define TEXTURE_LAYER_COUNT (core::detail::toUnderlying(TextureLayer_t::kLast))

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_TEXTURELAYERS_H
