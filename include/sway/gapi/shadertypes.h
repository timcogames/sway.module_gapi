#ifndef SWAY_GAPI_SHADERTYPES_H
#define SWAY_GAPI_SHADERTYPES_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/*!
 * \brief
 *    Перечисление типов шейдера.
 */
enum class ShaderType_t : u32_t {
	kVertex, /*!< Вершинный шейдер. */
	kFragment /*!< Фрагментный шейдер. */
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#include <sway/gapi/shadertypes.inl>

#endif // SWAY_GAPI_SHADERTYPES_H
