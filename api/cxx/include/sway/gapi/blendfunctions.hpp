#ifndef SWAY_GAPI_BLENDFUNCTIONS_HPP
#define SWAY_GAPI_BLENDFUNCTIONS_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

// clang-format off
DECLARE_ENUM(BlendFn,
  ZERO,
  ONE,
  SRC_COLOR,
  ONE_MINUS_SRC_COLOR,
  DST_COLOR,
  ONE_MINUS_DST_COLOR,
  SRC_ALPHA,
  ONE_MINUS_SRC_ALPHA,
  DST_ALPHA,
  ONE_MINUS_DST_ALPHA,
  SRC_ALPHA_SATURATE
);
// clang-format on

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BLENDFUNCTIONS_HPP
