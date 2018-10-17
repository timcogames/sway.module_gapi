#ifndef SWAY_GAPI_SHADERCREATEINFO_H
#define SWAY_GAPI_SHADERCREATEINFO_H

#include <sway/gapi/shadertypes.h>
#include <sway/namespacemacros.h>
#include <string>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct ShaderCreateInfo {
	ShaderType_t type; /*< Тип шейдера. */
	std::string code; /*!< Исходный код шейдера. */
};

struct ShaderCreateInfoSet {
	ShaderCreateInfo vs;
	ShaderCreateInfo fs;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_SHADERCREATEINFO_H
