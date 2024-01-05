#ifndef SWAY_GAPI_CULLFACES_HPP
#define SWAY_GAPI_CULLFACES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class CullFace : u32_t { DISABLED = 0, BACK, FRONT, Latest };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_CULLFACES_HPP
