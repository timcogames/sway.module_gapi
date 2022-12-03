#ifndef SWAY_GAPI_SHADERPROGRAMBASE_HPP
#define SWAY_GAPI_SHADERPROGRAMBASE_HPP

#include <sway/gapi/resource.hpp>
#include <sway/gapi/shaderbase.hpp>
#include <sway/keywords.hpp>
#include <sway/math/color.hpp>
#include <sway/math/vector4.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

#include <string>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Представление шейдерной программы.
 */
class AShaderProgramBase : public Resource {
public:
  /**
   * @brief Конструктор класса.
   */
  AShaderProgramBase() {
    // Empty
  }

  /**
   * @brief Деструктор класса.
   */
  virtual ~AShaderProgramBase() = default;

  /**
   * @brief Связывает шейдерный объект с программным объектом.
   * @param[in] shader Указатель на связываемый шейдерный объект.
   * @sa detach(u32_t)
   */
  PURE_VIRTUAL(void attach(ShaderRef_t shader));

  /**
   * @brief Отсоединяет шейдерный объект от программного объекта.
   * @param[in] objectId Отвязываемый шейдерный объект.
   * @sa attach(ShaderRef_t)
   */
  PURE_VIRTUAL(void detach(u32_t objectId));

  /**
   * @brief Компонует программный объект.
   * @sa isLinked() const
   */
  PURE_VIRTUAL(void link());

  /**
   * @brief Возвращает статус компоновки.
   * @sa link()
   */
  // clang-format off
  PURE_VIRTUAL(auto isLinked() const -> bool);  // clang-format on

  /**
   * @brief Проверяет скомпоновонный объект на корректность.
   * @sa isValidated() const
   */
  PURE_VIRTUAL(void validate());

  /**
   * @brief Возвращает статус корректности скомпоновоного объекта.
   * @sa validate()
   */
  // clang-format off
  PURE_VIRTUAL(auto isValidated() const -> bool);  // clang-format on

  /**
   * @brief Делает шейдерную программу активной.
   * @sa unuse(),
   *     isUsed() const
   */
  PURE_VIRTUAL(void use());

  /**
   * @brief Деактивирует шейдерную программу.
   * @sa use(),
   *     isUsed() const
   */
  PURE_VIRTUAL(void unuse());

  /**
   * @brief Возвращает логическое значение, которое определяет,
   *        является ли шейдерная программа активной в текущем состоянии рендеринга.
   * @sa use(),
   *     unuse()
   */
  // clang-format off
  PURE_VIRTUAL(auto isUsed() const -> bool);  // clang-format on

  /**
   * @brief Передает значение uniform-переменной в шейдер.
   * @param[in] uniform Имя uniform-переменной.
   * @param[in] vec Значение uniform-переменной.
   */
  PURE_VIRTUAL(void setUniformVec4f(const std::string &uniform, const math::vec4f_t &vec));

  /**
   * @brief Передает значение uniform-переменной в шейдер.
   * @param[in] uniform Имя uniform-переменной.
   * @param[in] col Значение uniform-переменной.
   */
  PURE_VIRTUAL(void setUniformCol4f(const std::string &uniform, const math::col4f_t &col));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_SHADERPROGRAMBASE_HPP
