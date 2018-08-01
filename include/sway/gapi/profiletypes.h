#ifndef SWAY_GAPI_PROFILETYPES_H
#define SWAY_GAPI_PROFILETYPES_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class ProfileType_t : u32_t {
	kCore,
	kCompatibility
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_PROFILETYPES_H
