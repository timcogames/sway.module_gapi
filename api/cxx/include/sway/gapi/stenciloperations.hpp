#ifndef SWAY_GAPI_STENCILOPERATIONS_HPP
#define SWAY_GAPI_STENCILOPERATIONS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
DECLARE_ENUM(StencilOp,
  KEEP,
  ZERO,
  REPLACE,
  INCREMENT,
  INCREMENT_WRAP,
  DECREMENT,
  DECREMENT_WRAP,
  INVERT
);
// clang-format on

}  // namespace sway::gapi

#endif  // SWAY_GAPI_STENCILOPERATIONS_HPP
