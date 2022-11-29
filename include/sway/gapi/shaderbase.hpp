#ifndef SWAY_GAPI_SHADERBASE_HPP
#define SWAY_GAPI_SHADERBASE_HPP

#include <sway/gapi/resource.hpp>
#include <sway/gapi/shadercreateinfo.hpp>
#include <sway/gapi/shadertypes.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Представление шейдера.
 *
 */
class AShaderBase : public Resource {
public:
  /**
   * @brief Конструктор класса.
   *
   * @param[in] type Тип создаваемого шейдера.
   *
   */
  AShaderBase(ShaderType_t type) {
    // Empty
  }

  /**
   * @brief Деструктор класса.
   *
   */
  virtual ~AShaderBase() = default;

  /**
   * @brief Выполняет компиляцию шейдерного объекта.
   *
   * @param[in] source Исходный код шейдера.
   *
   */
  PURE_VIRTUAL(void compile(lpcstr_t source));

  /**
   * @brief Возвращает статус компиляции.
   *
   * @return Если компиляция прошла успешно 'true', иначе 'false'.
   *
   */
  PURE_VIRTUAL(bool isCompiled() const);

  /**
   * @brief Получает тип шейдера.
   *
   * @return Тип шейдера.
   *
   */
  // clang-format off
  PURE_VIRTUAL(auto getType() const -> ShaderType_t);  // clang-format on
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_SHADERBASE_HPP
