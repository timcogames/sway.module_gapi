#ifndef SWAY_GAPI_SHADERCREATEINFO_HPP
#define SWAY_GAPI_SHADERCREATEINFO_HPP

#include <sway/core.hpp>
#include <sway/gapi/shadertypes.hpp>

#include <string>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct ShaderCreateInfo {
  ShaderType type;  // Тип шейдера.
  std::string code;  // Исходный код шейдера.
};

struct ShaderCreateInfoSet {
  ShaderCreateInfo vs;
  ShaderCreateInfo fs;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_SHADERCREATEINFO_HPP
