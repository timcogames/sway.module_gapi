#ifndef SWAY_GAPI_VERTEXATTRIBUTEDESCRIPTOR_HPP
#define SWAY_GAPI_VERTEXATTRIBUTEDESCRIPTOR_HPP

#include <sway/gapi/vertexsemantics.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Структура описания вершинного атрибута.
 *
 */
struct VertexAttributeDescriptor {
  s32_t location;
  VertexSemantic_t semantic;
  core::ValueDataType format; /*!< Формат данных. */
  s32_t numComponents; /*!< Количество компонентов. */
  s32_t stride;
  const void *pointer;
  bool normalized; /*!< Нормализация входных данных. */
  bool enabled;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_VERTEXATTRIBUTEDESCRIPTOR_HPP
