#ifndef SWAY_GAPI_PROFILETYPES_HPP
#define SWAY_GAPI_PROFILETYPES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class ProfileType : u32_t { NONE = 0, CORE, COMPATIBILITY, Latest };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_PROFILETYPES_HPP
