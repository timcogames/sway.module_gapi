#ifndef SWAY_GAPI_CLEARFLAGS_HPP
#define SWAY_GAPI_CLEARFLAGS_HPP

#include <sway/defines.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class ClearFlag_t : u8_t { kColor = ENUM_BITMASK(0), kDepth = ENUM_BITMASK(1), kStencil = ENUM_BITMASK(2) };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif