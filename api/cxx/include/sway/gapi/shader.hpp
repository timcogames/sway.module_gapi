#ifndef SWAY_GAPI_SHADER_HPP
#define SWAY_GAPI_SHADER_HPP

#include <sway/core.hpp>
#include <sway/gapi/shadercreateinfo.hpp>
#include <sway/gapi/shadertypes.hpp>
#include <sway/gapi/typedefs.hpp>

#include <optional>  // std::optional, std::nullopt

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

/**
 * @brief Представление шейдера.
 */
class Shader : public core::foundation::Uniqueable<ObjectUid_t> {
  DECLARE_PTR_ALIASES(Shader)

public:
  /**
   * @brief Конструктор класса.
   *
   * @param[in] type Тип создаваемого шейдера.
   */
  Shader(ShaderType::Enum type)
      : core::foundation::Uniqueable<ObjectUid_t>(std::nullopt) {}

  virtual ~Shader() = default;

  /**
   * @brief Выполняет компиляцию шейдерного объекта.
   *
   * @param[in] source Исходный код шейдера.
   */
  PURE_VIRTUAL(void compile(lpcstr_t source));

  /**
   * @brief Получает статус компиляции.
   *
   * @return Если компиляция прошла успешно 'true', иначе 'false'.
   */
  PURE_VIRTUAL(auto isCompiled() const -> bool);

  /**
   * @brief Получает ссылку на идентификатор атрибута вершинного шейдера.
   *
   * @param[in] name Имя атрибута.
   * @return Ссылка на идентификатор атрибута.
   */
  PURE_VIRTUAL(auto getAttribLocation(ObjectUidOpt_t progId, lpcstr_t name) -> i32_t);

  /**
   * @brief Получает тип шейдера.
   *
   * @return Тип шейдера.
   */
  PURE_VIRTUAL(auto getType() const -> ShaderType::Enum);
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_SHADER_HPP
