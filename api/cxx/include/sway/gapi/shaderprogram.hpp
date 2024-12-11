#ifndef SWAY_GAPI_SHADERPROGRAM_HPP
#define SWAY_GAPI_SHADERPROGRAM_HPP

#include <sway/core.hpp>
#include <sway/gapi/shader.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/math.hpp>

#include <string>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

/**
 * \~russian @brief Представление шейдерной программы.
 */
class ShaderProgram : public core::foundation::Uniqueable<ObjectUid_t> {
  DECLARE_PTR_ALIASES(ShaderProgram)

public:
#pragma region "Ctors/Dtor"

  ShaderProgram()
      : core::foundation::Uniqueable<ObjectUid_t>(std::nullopt) {}

  DTOR_VIRTUAL_DEFAULT(ShaderProgram);

#pragma endregion

  /**
   * \~russian @brief Связывает шейдерный объект с программным объектом.
   *
   * @param[in] shader Указатель на связываемый шейдерный объект.
   * @sa detach(std::pair<ShaderType::Enum, ShaderPtr_t>)
   */
  PURE_VIRTUAL(void attach(ShaderPtr_t shader));

  /**
   * \~russian @brief Отсоединяет шейдерный объект от программного объекта.
   *
   * @param[in] pair Отвязываемый шейдерный объект.
   * @param[in] erasing Убрать из коллекции?.
   * @sa attach(ShaderPtr_t)
   */
  PURE_VIRTUAL(void detach(std::pair<ShaderType::Enum, ShaderPtr_t> pair, bool erasing));

  PURE_VIRTUAL(auto getShader(ShaderType::Enum type) -> ShaderPtr_t);

  /**
   * \~russian @brief Компонует программный объект.
   *
   * @sa isLinked() const
   */
  PURE_VIRTUAL(void link());

  /**
   * \~russian @brief Возвращает статус компоновки.
   *
   * @sa link()
   */
  PURE_VIRTUAL(auto isLinked() const -> bool);

  /**
   * \~russian @brief Проверяет скомпоновонный объект на корректность.
   *
   * @sa isValidated() const
   */
  PURE_VIRTUAL(void validate());

  /**
   * \~russian @brief Возвращает статус корректности скомпоновоного объекта.
   *
   * @sa validate()
   */
  PURE_VIRTUAL(auto isValidated() const -> bool);

  /**
   * \~russian @brief Делает шейдерную программу активной.
   *
   * @sa unuse(),
   *     isUsed() const
   */
  PURE_VIRTUAL(void use());

  /**
   * \~russian @brief Деактивирует шейдерную программу.
   *
   * @sa use(),
   *     isUsed() const
   */
  PURE_VIRTUAL(void unuse());

  /**
   * \~russian @brief Возвращает логическое значение, которое определяет,
   *                  является ли шейдерная программа активной в текущем состоянии рендеринга.
   *
   * @sa use(),
   *     unuse()
   */
  PURE_VIRTUAL(auto isUsed() const -> bool);

  /**
   * \~russian @brief Передает значение uniform-переменной в шейдер.
   *
   * @param[in] uniform Имя uniform-переменной.
   * @param[in] vec Значение uniform-переменной.
   */
  PURE_VIRTUAL(void setUniformVec4f(const std::string &uniform, const math::vec4f_t &vec));

  /**
   * \~russian @brief Передает значение uniform-переменной в шейдер.
   *
   * @param[in] uniform Имя uniform-переменной.
   * @param[in] col Значение uniform-переменной.
   */
  PURE_VIRTUAL(void setUniformCol4f(const std::string &uniform, const math::col4f_t &col));

  PURE_VIRTUAL(void setUniformMat4f(const std::string &uniform, const math::mat4f_t &mat));

  PURE_VIRTUAL(void setUniform1i(const std::string &uniform, i32_t val));

  PURE_VIRTUAL(void setUniform1f(const std::string &uniform, f32_t val));
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_SHADERPROGRAM_HPP
