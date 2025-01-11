#ifndef SWAY_GAPI_VERTEXATTRIBDESCRIPTOR_HPP
#define SWAY_GAPI_VERTEXATTRIBDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/vertexsemantics.hpp>

namespace sway::gapi {

/**
 * \~russian @brief Структура описания вершинного атрибута.
 */
struct VertexAttribDescriptor {
  i32_t location;
  const void *pointer;

  VertexSemantic semantic;
  core::ValueDataType::Enum format;  ///< Формат данных.
  i32_t numComponents;  ///< Количество компонентов.
  i32_t stride;
  bool normalized;  ///< Нормализация входных данных.
  bool enabled;

  template <typename TAttribFormatType>
  static auto merge(VertexSemantic semantic, bool normalized, bool enabled) -> VertexAttribDescriptor {
    VertexAttribDescriptor attrib;
    attrib.semantic = semantic;
    attrib.format = core::ValueDataTypeToEnum<typename TAttribFormatType::DataElementType_t>::value;
    attrib.numComponents = TAttribFormatType::DataElementCount_t;
    attrib.stride = TAttribFormatType::DataSize_t;
    attrib.normalized = normalized;
    attrib.enabled = enabled;
    return attrib;
  }
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_VERTEXATTRIBDESCRIPTOR_HPP
