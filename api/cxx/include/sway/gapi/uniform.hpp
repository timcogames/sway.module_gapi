#ifndef SWAY_GAPI_UNIFORM_HPP
#define SWAY_GAPI_UNIFORM_HPP

#include <sway/core.hpp>

#include <string>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// enum class UniformType : u32_t { MAT4, FLOAT, INT, BOOLEAN, VEC2, VEC3, VEC4, TRANSFORM, COL, SAMPLER };

struct Uniform {
  static const int maxUniformNameSize = 24;

  s32_t location;
  s8_t name[maxUniformNameSize];

  Uniform()
      : location(-1) {
    name[0] = '\0';
  }

  PURE_VIRTUAL(u32_t getType() const);
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_UNIFORM_HPP
