#ifndef SWAY_GAPI_CULLFACES_HPP
#define SWAY_GAPI_CULLFACES_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

enum class CullFace : u32_t { DISABLED = 0, BACK, FRONT, Latest };

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_CULLFACES_HPP
