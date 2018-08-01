#ifndef SWAY_GAPI_PRIMITIVETYPES_H
#define SWAY_GAPI_PRIMITIVETYPES_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/*!
 * \brief
 *    Перечисление типов примитива.
 */
enum class PrimitiveType_t : u32_t {
	kNone,
	kPointList, /*!< Список точек. */
	kLineList, /*!< Список линий. */
	kLineStrip,
	kTriangleList, /*!< Список треугольников. */
	kTriangleStrip,
	kTriangleFan
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_PRIMITIVETYPES_H
