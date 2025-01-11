#ifndef SWAY_GAPI_SHADERPREPROCESSOR_HPP
#define SWAY_GAPI_SHADERPREPROCESSOR_HPP

#include <sway/core.hpp>

#include <memory>
#include <string>

namespace sway::gapi {

class ShaderPreprocessor {
public:
#pragma region "Ctors/Dtor"

  ShaderPreprocessor() = default;

  DTOR_VIRTUAL_DEFAULT(ShaderPreprocessor);

#pragma endregion

  PURE_VIRTUAL(void addDefine(const std::string &name, const std::string &val));

  PURE_VIRTUAL(auto hasDefined(const std::string &name) const -> bool);
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_SHADERPREPROCESSOR_HPP
