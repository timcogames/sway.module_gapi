#ifndef SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP
#define SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP

#include <sway/gapi/typedefs.hpp>
#include <sway/gapi/vertexattributedescriptor.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class VertexAttribLayout {
public:
  /**
   * @brief Конструктор класса.
   *
   * @param[in] program Указатель на шейдерную программу.
   */
  VertexAttribLayout(ShaderProgramRef_t program) {
    // Empty
  }

  /**
   * @brief Деструктор класса.
   */
  virtual ~VertexAttribLayout() = default;

  /**
   * @brief Добавляет вершинный атрибут.
   *
   * @param[in] desc Описание вершинного атрибута.
   */
  PURE_VIRTUAL(void addAttribute(VertexAttributeDescriptor desc));

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