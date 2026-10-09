#ifndef SWAY_GAPI_SHADERTYPES_HPP
#define SWAY_GAPI_SHADERTYPES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

/**
 * @enum ShaderType::Enum
 * \~russian @brief Перечисление типов шейдера.
 */

/**
 * @var ShaderType::Enum::VERT
 * \~russian @brief Вершинный шейдер.
 */

/**
 * @var ShaderType::Enum::FRAG
 * \~russian @brief Фрагментный шейдер.
 */

// clang-format off
#define SHADER_TYPE_LIST(ITEM) \
  ITEM(VERT, 0) \
  ITEM(FRAG, 1)
// clang-format on

DECLARE_ENUM_IDX(ShaderType, SHADER_TYPE_LIST)

}  // namespace sway::gapi

#include <sway/gapi/shadertypes.inl>

#endif  // SWAY_GAPI_SHADERTYPES_HPP
