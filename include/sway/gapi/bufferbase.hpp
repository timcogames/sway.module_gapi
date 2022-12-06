#ifndef SWAY_GAPI_BUFFERBASE_HPP
#define SWAY_GAPI_BUFFERBASE_HPP

#include <sway/core/foundation/uniqueable.hpp>
#include <sway/gapi/bufferdescriptor.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>
#include <sway/visibilitymacros.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Представление аппаратного буфера.
 */
class BufferBase : public core::foundation::Uniqueable<u32_t> {
public:
  /**
   * @brief Конструктор класса.
   *
   * @param[in] desc Описание буфера.
   */
  BufferBase(const BufferDescriptor &desc)
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  /**
   * @brief Деструктор класса.
   */
  virtual ~BufferBase() = default;

  /**
   * @brief Устанавливает данные в аппаратный буфер.
   *
   * @param[in] data Первоначальный данные.
   */
  PURE_VIRTUAL(bool allocate(const void *data));

  /**
   * @brief Изменяет данные в уже существующем буфере.
   *
   * @param[in] offset Начало изменяемого блока данных.
   * @param[in] size Размер изменяемого блока данных.
   * @param[in] source Область памяти, содержащая новые значения.
   * @sa updateSubdata(const void *)
   */
  PURE_VIRTUAL(void updateSubdata(u32_t offset, u32_t size, const void *source));

  /**
   * @brief Изменяет данные в уже существующем буфере.
   *
   * @param[in] source Область памяти, содержащая новые значения.
   * @sa updateSubdata(u32_t, u32_t, const void *)
   */
  PURE_VIRTUAL(void updateSubdata(const void *source));

  /**
   * @brief Получает указатель на область памяти, в которой находятся данные буфера.
   *
   * @sa unmap()
   */
  // clang-format off
  PURE_VIRTUAL(auto map() -> void *);  // clang-format on

  /**
   * @brief Возвращает данные буфера в память.
   *
   * @sa map()
   */
  PURE_VIRTUAL(void unmap());

  /**
   * @brief Делает буфер текущим.
   *
   * @sa unbind()
   */
  PURE_VIRTUAL(void bind());

  /**
   * @brief Делает текущим пустой буфер.
   *
   * @sa bind()
   */
  PURE_VIRTUAL(void unbind());

  /**
   * @brief Получает целевой тип буфера.
   */
  // clang-format off
  PURE_VIRTUAL(auto getTarget() const -> BufferTarget_t);  // clang-format on

  /**
   * @brief Получает режим работы с данными.
   */
  // clang-format off
  PURE_VIRTUAL(auto getUsage() const -> BufferUsage_t);  // clang-format on

  /**
   * @brief Получает количество элементов в массиве.
   */
  // clang-format off
  PURE_VIRTUAL(auto getCapacity() const -> s32_t);  // clang-format on

  /**
   * @brief Получает размер структуры данных.
   */
  // clang-format off
  PURE_VIRTUAL(auto getByteStride() const -> s32_t);  // clang-format on
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERBASE_HPP
