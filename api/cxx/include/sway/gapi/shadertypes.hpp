#ifndef SWAY_GAPI_SHADERTYPES_HPP
#define SWAY_GAPI_SHADERTYPES_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

/**
 * @enum ShaderType::Enum
 * @brief Перечисление типов шейдера.
 */

/**
 * @var ShaderType::Enum::VERT
 * @brief Вершинный шейдер.
 */

/**
 * @var ShaderType::Enum::FRAG
 * @brief Фрагментный шейдер.
 */

DECLARE_ENUM(ShaderType, VERT, FRAG);

NS_END()  // namespace gapi
NS_END()  // namespace sway

#include <sway/gapi/shadertypes.inl>

#endif  // SWAY_GAPI_SHADERTYPES_HPP
