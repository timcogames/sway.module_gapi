#ifndef SWAY_GAPI_STENCILOPERATIONS_HPP
#define SWAY_GAPI_STENCILOPERATIONS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define STENCIL_OP_LIST(ITEM) \
  ITEM(KEEP, 1) \
  ITEM(ZERO, 2) \
  ITEM(REPLACE, 3) \
  ITEM(INCREMENT, 4) \
  ITEM(INCREMENT_WRAP, 5) \
  ITEM(DECREMENT, 6) \
  ITEM(DECREMENT_WRAP, 7) \
  ITEM(INVERT, 8)
// clang-format on

DECLARE_ENUM_U32(StencilOp, STENCIL_OP_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_STENCILOPERATIONS_HPP
