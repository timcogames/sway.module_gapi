#ifndef SWAY_GAPI_TEXTUREWRAPS_HPP
#define SWAY_GAPI_TEXTUREWRAPS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class TextureWrap : u32_t { NONE = 0, REPEAT, CLAMP, Latest };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTUREWRAPS_HPP
