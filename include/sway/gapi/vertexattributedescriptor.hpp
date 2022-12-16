#ifndef SWAY_GAPI_VERTEXATTRIBUTEDESCRIPTOR_HPP
#define SWAY_GAPI_VERTEXATTRIBUTEDESCRIPTOR_HPP

#include <sway/core/detail/valuedatatypes.hpp>
#include <sway/gapi/vertexsemantics.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Структура описания вершинного атрибута.
 */
struct VertexAttributeDescriptor {
  s32_t location;
  VertexSemantic_t semantic;
  core::ValueDataType format;  // Формат данных.
  s32_t numComponents;  // Количество компонентов.
  s32_t stride;
  const void *pointer;
  bool normalized;  // Нормализация входных данных.
  bool enabled;

  template <typename TAttributeFormatType>
  static auto merge(VertexSemantic_t semantic, bool normalized, bool enabled) -> VertexAttributeDescriptor {
    VertexAttributeDescriptor attrib;
    attrib.semantic = semantic;
    attrib.format = core::detail::ValueDataTypeToEnum<typename TAttributeFormatType::type_t>::value;
    attrib.numComponents = TAttributeFormatType::size;
    attrib.stride = sizeof(typename TAttributeFormatType::type_t) * TAttributeFormatType::size;
    attrib.normalized = normalized;
    attrib.enabled = enabled;
    return attrib;
  }
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_VERTEXATTRIBUTEDESCRIPTOR_HPP
