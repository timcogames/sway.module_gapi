#ifndef SWAY_GAPI_PROFILETYPES_HPP
#define SWAY_GAPI_PROFILETYPES_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

enum class ProfileType : u32_t { NONE = 0, CORE, COMPATIBILITY, Latest };

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_PROFILETYPES_HPP
