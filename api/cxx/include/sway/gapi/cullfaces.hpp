#ifndef SWAY_GAPI_CULLFACES_HPP
#define SWAY_GAPI_CULLFACES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

enum class CullFace : u32_t { DISABLED = 0, BACK, FRONT, Latest };

}  // namespace sway::gapi

#endif  // SWAY_GAPI_CULLFACES_HPP
