#ifndef SWAY_GAPI_PROFILETYPES_HPP
#define SWAY_GAPI_PROFILETYPES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

enum class ProfileType : u32_t { NONE = 0, CORE, COMPATIBILITY, Latest };

}  // namespace sway::gapi

#endif  // SWAY_GAPI_PROFILETYPES_HPP
