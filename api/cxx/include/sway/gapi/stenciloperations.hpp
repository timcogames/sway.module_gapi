#ifndef SWAY_GAPI_STENCILOPERATIONS_HPP
#define SWAY_GAPI_STENCILOPERATIONS_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

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

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_STENCILOPERATIONS_HPP
