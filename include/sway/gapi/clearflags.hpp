#ifndef SWAY_GAPI_CLEARFLAGS_HPP
#define SWAY_GAPI_CLEARFLAGS_HPP

#include <sway/defines.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class ClearFlag : u8_t { COLOR = ENUM_BITMASK(0), DEPTH = ENUM_BITMASK(1), STENCIL = ENUM_BITMASK(2) };

inline constexpr ClearFlag operator&(ClearFlag lhs /* left hand side */, ClearFlag rhs /* right hand side */) {
  return static_cast<ClearFlag>(static_cast<u8_t>(lhs) & static_cast<u8_t>(rhs));
}

inline constexpr ClearFlag operator|(ClearFlag lhs, ClearFlag rhs) {
  return static_cast<ClearFlag>(static_cast<u8_t>(lhs) | static_cast<u8_t>(rhs));
}

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_CLEARFLAGS_HPP
