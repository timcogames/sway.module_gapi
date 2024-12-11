#ifndef SWAY_GAPI_SHADERCREATEINFO_HPP
#define SWAY_GAPI_SHADERCREATEINFO_HPP

#include <sway/core.hpp>
#include <sway/gapi/shaderpreprocessor.hpp>
#include <sway/gapi/shadertypes.hpp>

#include <string>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

struct ShaderCreateInfo {
  ShaderType::Enum type;  ///< Тип шейдера.
  std::string code;  ///< Исходный код шейдера.
  ShaderPreprocessor::Ptr_t preprocessor;
};

struct ShaderCreateInfoSet {
  ShaderCreateInfo vs;
  ShaderCreateInfo fs;
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_SHADERCREATEINFO_HPP
