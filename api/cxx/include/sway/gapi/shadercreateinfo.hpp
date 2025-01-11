#ifndef SWAY_GAPI_SHADERCREATEINFO_HPP
#define SWAY_GAPI_SHADERCREATEINFO_HPP

#include <sway/core.hpp>
#include <sway/gapi/shaderpreprocessor.hpp>
#include <sway/gapi/shadertypes.hpp>
#include <sway/gapi/typedefs.hpp>

#include <string>

namespace sway::gapi {

struct ShaderCreateInfo {
  ShaderType::Enum type;  //!< \~english Type of shader. \~russian Тип шейдера.
  std::string code;  //!< \~english Source code of shader. \~russian Исходный код шейдера.
  typedefs::ShaderPreprocessorPtr_t preprocessor;
};

struct ShaderCreateInfoSet {
  ShaderCreateInfo vs;
  ShaderCreateInfo fs;
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_SHADERCREATEINFO_HPP
