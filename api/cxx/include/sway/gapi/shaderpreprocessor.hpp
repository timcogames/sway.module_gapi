#ifndef SWAY_GAPI_SHADERPREPROCESSOR_HPP
#define SWAY_GAPI_SHADERPREPROCESSOR_HPP

#include <sway/core.hpp>

#include <memory>
#include <string>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class ShaderPreprocessor {
  DECLARE_CLASS_POINTER_ALIASES(ShaderPreprocessor)

public:
  ShaderPreprocessor() {}

  virtual ~ShaderPreprocessor() = default;

  PURE_VIRTUAL(void addDefine(const std::string &name, const std::string &val));

  PURE_VIRTUAL(auto hasDefined(const std::string &name) const -> bool);
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_SHADERPREPROCESSOR_HPP
