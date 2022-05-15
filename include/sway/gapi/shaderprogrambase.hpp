#ifndef SWAY_GAPI_SHADERPROGRAMBASE_HPP
#define SWAY_GAPI_SHADERPROGRAMBASE_HPP

#include <sway/gapi/resource.hpp>
#include <sway/gapi/shaderbase.hpp>
#include <sway/math/color.hpp>
#include <sway/math/vector4.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

#include <string>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/*!
 * \brief
 *    Представление шейдерной программы.
 */
class AShaderProgramBase : public Resource {
public:
  /*!
   * \brief
   *    Конструктор класса.
   */
  AShaderProgramBase() {
    // Empty
  }

  /*!
   * \brief
   *    Деструктор класса.
   */
  virtual ~AShaderProgramBase() {
    // Empty
  }

  /*!
   * \brief
   *    Связывает шейдерный объект с программным объектом.
   *
   * \param[in] shader
   *    Указатель на связываемый шейдерный объект.
   *
   * \sa
   *    detach(u32_t)
   */
  virtual void attach(ShaderRef_t shader) = 0;

  /*!
   * \brief
   *    Отсоединяет шейдерный объект от программного объекта.
   *
   * \param[in] objectId
   *    Отвязываемый шейдерный объект.
   *
   * \sa
   *    attach(ShaderRef_t)
   */
  virtual void detach(u32_t objectId) = 0;

  /*!
   * \brief
   *    Компонует программный объект.
   *
   * \sa
   *    isLinked() const
   */
  virtual void link() = 0;

  /*!
   * \brief
   *    Возвращает статус компоновки.
   *
   * \sa
   *    link()
   */
  virtual bool isLinked() const = 0;

  /*!
   * \brief
   *    Проверяет скомпоновонный объект на корректность.
   *
   * \sa
   *    isValidated() const
   */
  virtual void validate() = 0;

  /*!
   * \brief
   *    Возвращает статус корректности скомпоновоного объекта.
   *
   * \sa
   *    validate()
   */
  virtual bool isValidated() const = 0;

  /*!
   * \brief
   *    Делает шейдерную программу активной.
   *
   * \sa
   *    unuse()
   *    isUsed() const
   */
  virtual void use() = 0;

  /*!
   * \brief
   *    Деактивирует шейдерную программу.
   *
   * \sa
   *    use()
   *    isUsed() const
   */
  virtual void unuse() = 0;

  /*!
   * \brief
   *    Возвращает логическое значение, которое определяет,
   *    является ли шейдерная программа активной в текущем состоянии рендеринга.
   *
   * \sa
   *    use()
   *    unuse()
   */
  virtual bool isUsed() const = 0;

  /*!
   * \brief
   *    Передает значение uniform-переменной в шейдер.
   *
   * \param[in] uniform
   *    Имя uniform-переменной.
   *
   * \param[in] vec
   *    Значение uniform-переменной.
   */
  virtual void setUniformVec4f(const std::string &uniform, const math::vec4f_t &vec) = 0;

  /*!
   * \brief
   *    Передает значение uniform-переменной в шейдер.
   *
   * \param[in] uniform
   *    Имя uniform-переменной.
   *
   * \param[in] col
   *    Значение uniform-переменной.
   */
  virtual void setUniformCol4f(const std::string &uniform, const math::col4f_t &col) = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
