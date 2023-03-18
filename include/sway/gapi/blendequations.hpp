#ifndef SWAY_GAPI_BLENDEQUATIONS_HPP
#define SWAY_GAPI_BLENDEQUATIONS_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BlendEquation : u32_t { ADD, SUBTRACT, REVERSE_SUBTRACT, MIN, MAX };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BLENDEQUATIONS_HPP
