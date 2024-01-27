#ifndef SWAY_GAPI_VERTEXATTRIBDESCRIPTOR_HPP
#define SWAY_GAPI_VERTEXATTRIBDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/vertexsemantics.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Структура описания вершинного атрибута.
 */
struct VertexAttribDescriptor {
  s32_t location;
  const void *pointer;

  VertexSemantic semantic;
  core::ValueDataType format;  // Формат данных.
  s32_t numComponents;  // Количество компонентов.
  s32_t stride;
  bool normalized;  // Нормализация входных данных.
  bool enabled;

  template <typename TAttribFormatType>
  static auto merge(VertexSemantic semantic, bool normalized, bool enabled) -> VertexAttribDescriptor {
    VertexAttribDescriptor attrib;
    attrib.semantic = semantic;
    attrib.format = core::detail::ValueDataTypeToEnum<typename TAttribFormatType::DataElementType_t>::value;
    attrib.numComponents = TAttribFormatType::DataElementCount_t;
    attrib.stride = TAttribFormatType::DataSize_t;
    attrib.normalized = normalized;
    attrib.enabled = enabled;
    return attrib;
  }
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_VERTEXATTRIBDESCRIPTOR_HPP
