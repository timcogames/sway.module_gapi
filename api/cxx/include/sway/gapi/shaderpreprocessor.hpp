#ifndef SWAY_GAPI_SHADERPREPROCESSOR_HPP
#define SWAY_GAPI_SHADERPREPROCESSOR_HPP

#include <sway/core.hpp>

#include <memory>
#include <string>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class ShaderPreprocessor {
public:
  using Ptr_t = ShaderPreprocessor *;

  ShaderPreprocessor() {}

  virtual ~ShaderPreprocessor() = default;

  PURE_VIRTUAL(void addDefine(const std::string &name, const std::string &val));

  // clang-format off
  PURE_VIRTUAL(auto hasDefined(const std::string &name) const -> bool);  // clang-format on
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_SHADERPREPROCESSOR_HPP
