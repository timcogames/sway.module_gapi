#ifndef SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP
#define SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP

#include <sway/gapi/typedefs.hpp>
#include <sway/gapi/vertexattribdescriptor.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class VertexAttribLayout {
public:
  /**
   * @brief Добавляет вершинный атрибут.
   *
   * @param[in] desc Описание вершинного атрибута.
   */
  PURE_VIRTUAL(void addAttribute(VertexAttribDescriptor desc));

  /**
   * @brief Включает чтение атрибутов.
   */
  PURE_VIRTUAL(void enable());

  /**
   * @brief Отключает чтение атрибутов.
   */
  PURE_VIRTUAL(void disable());
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP
