#ifndef SWAY_GAPI_UNIFORM_HPP
#define SWAY_GAPI_UNIFORM_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

#include <string>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

// enum class UniformType : u32_t { MAT4, FLOAT, INT, BOOLEAN, VEC2, VEC3, VEC4, TRANSFORM, COL, SAMPLER };

struct Uniform {
  DECLARE_PTR_ALIASES(Uniform)

  static const int maxUniformNameSize = 24;

  i32_t location;
  s8_t name[maxUniformNameSize];

  Uniform()
      : location(-1) {
    name[0] = '\0';
  }

  PURE_VIRTUAL(u32_t getType() const);
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_UNIFORM_HPP
