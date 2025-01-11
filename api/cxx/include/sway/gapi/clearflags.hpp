#ifndef SWAY_GAPI_CLEARFLAGS_HPP
#define SWAY_GAPI_CLEARFLAGS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
enum class ClearFlag : u8_t {
  NONE = 0,
  COLOR = ENUM_BITMASK(0),
  DEPTH = ENUM_BITMASK(1),
  STENCIL = ENUM_BITMASK(2)
};
// clang-format on

inline constexpr ClearFlag operator&(ClearFlag lhs /* left hand side */, ClearFlag rhs /* right hand side */) {
  return static_cast<ClearFlag>(static_cast<u8_t>(lhs) & static_cast<u8_t>(rhs));
}

inline constexpr ClearFlag operator|(ClearFlag lhs, ClearFlag rhs) {
  return static_cast<ClearFlag>(static_cast<u8_t>(lhs) | static_cast<u8_t>(rhs));
}

}  // namespace sway::gapi

#endif  // SWAY_GAPI_CLEARFLAGS_HPP
