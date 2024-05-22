#ifndef SWAY_GAPI_SHADERTYPES_HPP
#define SWAY_GAPI_SHADERTYPES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Перечисление типов шейдера.
 */
enum class ShaderType : u32_t {
  NONE = 0,
  VERT,  // Вершинный шейдер.
  FRAG,  // Фрагментный шейдер.
  Latest
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#include <sway/gapi/shadertypes.inl>

#endif  // SWAY_GAPI_SHADERTYPES_HPP
