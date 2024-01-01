#ifndef SWAY_GAPI_STENCILOPERATIONS_HPP
#define SWAY_GAPI_STENCILOPERATIONS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class StencilOperation : u32_t {
  KEEP,
  ZERO,
  REPLACE,
  INCREMENT,
  INCREMENT_WRAP,
  DECREMENT,
  DECREMENT_WRAP,
  INVERT
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STENCILOPERATIONS_HPP
