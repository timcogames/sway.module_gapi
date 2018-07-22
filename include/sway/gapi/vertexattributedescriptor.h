#ifndef SWAY_GAPI_VERTEXATTRIBUTEDESCRIPTOR_H
#define SWAY_GAPI_VERTEXATTRIBUTEDESCRIPTOR_H

#include <sway/gapi/vertexsemantics.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/*!
 * \brief
 *    Структура описания вершинного атрибута.
 */
struct VertexAttributeDescriptor {
	s32_t location;
	VertexSemantic_t semantic;
	Type_t format; /*!< Формат данных. */
	s32_t numComponents; /*!< Количество компонентов. */
	s32_t stride;
	const void * offset;
	bool normalized; /*!< Нормализация входных данных. */
	bool enabled;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_VERTEXATTRIBUTEDESCRIPTOR_H
