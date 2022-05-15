#ifndef SWAY_GAPI_VERTEXLAYOUTBASE_HPP
#define SWAY_GAPI_VERTEXLAYOUTBASE_HPP

#include <sway/gapi/typedefs.hpp>
#include <sway/gapi/vertexattributedescriptor.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class IVertexLayoutBase {
public:
  /*!
   * \brief
   *    Конструктор класса.
   *
   * \param[in] program
   *    Указатель на шейдерную программу.
   */
  IVertexLayoutBase(ShaderProgramRef_t program) {
    // Empty
  }

  /*!
   * \brief
   *    Деструктор класса.
   */
  virtual ~IVertexLayoutBase() {
    // Empty
  }

  /*!
   * \brief
   *    Добавляет вершинный атрибут.
   *
   * \param[in] desc
   *    Описание вершинного атрибута.
   */
  virtual void addAttribute(VertexAttributeDescriptor desc) = 0;

  /*!
   * \brief
   *    Включает чтение атрибутов.
   */
  virtual void enable() = 0;

  /*!
   * \brief
   *    Отключает чтение атрибутов.
   */
  virtual void disable() = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
