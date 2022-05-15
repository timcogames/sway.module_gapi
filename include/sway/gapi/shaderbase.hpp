#ifndef SWAY_GAPI_SHADERBASE_HPP
#define SWAY_GAPI_SHADERBASE_HPP

#include <sway/gapi/resource.hpp>
#include <sway/gapi/shadercreateinfo.hpp>
#include <sway/gapi/shadertypes.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/*!
 * \brief
 *    Представление шейдера.
 */
class AShaderBase : public Resource {
public:
  /*!
   * \brief
   *    Конструктор класса.
   *
   * \param[in] type
   *    Тип создаваемого шейдера.
   */
  AShaderBase(ShaderType_t type) {
    // Empty
  }

  /*!
   * \brief
   *    Деструктор класса.
   */
  virtual ~AShaderBase() {
    // Empty
  }

  /*!
   * \brief
   *    Выполняет компиляцию шейдерного объекта.
   *
   * \param[in] source
   *    Исходный код шейдера.
   */
  virtual void compile(lpcstr_t source) = 0;

  /*!
   * \brief
   *    Возвращает статус компиляции.
   *
   * \return
   *    Если компиляция прошла успешно 'true', иначе 'false'.
   */
  virtual bool isCompiled() const = 0;

  /*!
   * \brief
   *    Получает тип шейдера.
   *
   * \return
   *    Тип шейдера.
   */
  virtual ShaderType_t getType() const = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
