#ifndef SWAY_GAPI_BUFFER_HPP
#define SWAY_GAPI_BUFFER_HPP

#include <sway/core.hpp>
#include <sway/gapi/bufferdescriptor.hpp>
#include <sway/gapi/buffermapaccesses.hpp>
#include <sway/gapi/buffermaprangeaccesses.hpp>
#include <sway/gapi/buffersubdatadescriptor.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>
#include <sway/gapi/typedefs.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Представление аппаратного буфера.
 */
class Buffer : public core::foundation::Uniqueable<u32_t> {
public:
  struct BindFunctor {
    void operator()(BufferPtr_t buf) { buf->bind(); }
  };

  struct UnbindFunctor {
    void operator()(BufferPtr_t buf) { buf->unbind(); }
  };

  /**
   * @brief Конструктор класса.
   *
   * @param[in] desc Описание буфера.
   */
  Buffer(const BufferDescriptor &desc)
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  virtual ~Buffer() = default;

  /**
   * @brief Устанавливает данные в аппаратный буфер.
   *
   * @param[in] data Первоначальный данные.
   */
  PURE_VIRTUAL(bool allocate(const void *data));

  /**
   * @brief Изменяет данные в уже существующем буфере.
   *
   * @param[in] desc Описание конкретной заполняемой области.
   * @sa updateSubdata(const void *)
   */
  PURE_VIRTUAL(void updateSubdata(BufferSubdataDescriptor desc));

  /**
   * @brief Изменяет данные в уже существующем буфере.
   *
   * @param[in] src Область памяти, содержащая новые значения.
   * @sa updateSubdata(BufferSubdataDescriptor)
   */
  PURE_VIRTUAL(void updateSubdata(const void *src));

  // clang-format off
  PURE_VIRTUAL(auto map(BufferMapAccess flags) -> void *);  // clang-format on

  // clang-format off
  PURE_VIRTUAL(auto mapRange(s32_t offset, s32_t length, core::detail::EnumClassBitset<BufferMapRangeAccess> bitset) -> void *);  // clang-format on

  PURE_VIRTUAL(void unmap());

  PURE_VIRTUAL(void bindRange(u32_t index, u32_t buffer, ptrdiff_t offset, ptrdiff_t size));

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
  PURE_VIRTUAL(auto getTarget() const -> BufferTarget);  // clang-format on

  /**
   * @brief Получает режим работы с данными.
   */
  // clang-format off
  PURE_VIRTUAL(auto getUsage() const -> BufferUsage);  // clang-format on

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

#endif  // SWAY_GAPI_BUFFER_HPP
