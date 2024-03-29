#ifndef SWAY_GAPI_TEXTUREWRAPS_HPP
#define SWAY_GAPI_TEXTUREWRAPS_HPP

#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class TextureWrap : u32_t { REPEAT, CLAMP };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTUREWRAPS_HPP
