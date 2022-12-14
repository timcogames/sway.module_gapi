#ifndef SWAY_GAPI_SHADER_HPP
#define SWAY_GAPI_SHADER_HPP

#include <sway/core/foundation/uniqueable.hpp>
#include <sway/gapi/shadercreateinfo.hpp>
#include <sway/gapi/shadertypes.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Представление шейдера.
 */
class Shader : public core::foundation::Uniqueable<u32_t> {
public:
  /**
   * @brief Конструктор класса.
   *
   * @param[in] type Тип создаваемого шейдера.
   */
  Shader(ShaderType_t type)
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  /**
   * @brief Деструктор класса.
   */
  virtual ~Shader() = default;

  /**
   * @brief Выполняет компиляцию шейдерного объекта.
   *
   * @param[in] source Исходный код шейдера.
   */
  PURE_VIRTUAL(void compile(lpcstr_t source));

  /**
   * @brief Возвращает статус компиляции.
   *
   * @return Если компиляция прошла успешно 'true', иначе 'false'.
   */
  // clang-format off
  PURE_VIRTUAL(auto isCompiled() const -> bool);  // clang-format on

  /**
   * @brief Получает тип шейдера.
   *
   * @return Тип шейдера.
   */
  // clang-format off
  PURE_VIRTUAL(auto getType() const -> ShaderType_t);  // clang-format on
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_SHADER_HPP
