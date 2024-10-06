#ifndef SWAY_GAPI_BLENDEQUATIONS_HPP
#define SWAY_GAPI_BLENDEQUATIONS_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

DECLARE_ENUM(BlendEq, ADD, SUBTRACT, REVERSE_SUBTRACT, MIN, MAX);

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BLENDEQUATIONS_HPP
