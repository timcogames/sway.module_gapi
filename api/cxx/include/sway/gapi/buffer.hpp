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

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

/**
 * \~russian @brief Представление аппаратного буфера.
 */
class Buffer : public core::foundation::Uniqueable<ObjectUid_t> {
  DECLARE_PTR_ALIASES(Buffer)

public:
  struct BindFunctor {
    void operator()(BufferPtr_t buf) { buf->bind(); }
  };

  struct UnbindFunctor {
    void operator()(BufferPtr_t buf) { buf->unbind(); }
  };

#pragma region "Ctors/Dtor"

  /**
   * \~russian @brief Конструктор класса.
   *
   * @param[in] desc Описание буфера.
   */
  Buffer(const BufferDescriptor &desc)
      : core::foundation::Uniqueable<ObjectUid_t>(std::nullopt) {}

  DTOR_VIRTUAL_DEFAULT(Buffer);

#pragma endregion

  /**
   * \~russian @brief Устанавливает данные в аппаратный буфер.
   *
   * @param[in] data Первоначальный данные.
   */
  PURE_VIRTUAL(bool allocate(const void *data));

  /**
   * \~russian @brief Изменяет данные в уже существующем буфере.
   *
   * @param[in] desc Описание конкретной заполняемой области.
   * @sa updateSubdata(const void *)
   */
  PURE_VIRTUAL(void updateSubdata(BufferSubdataDescriptor desc));

  /**
   * \~russian @brief Изменяет данные в уже существующем буфере.
   *
   * @param[in] src Область памяти, содержащая новые значения.
   * @sa updateSubdata(BufferSubdataDescriptor)
   */
  PURE_VIRTUAL(void updateSubdata(const void *src));

  PURE_VIRTUAL(void flush(i32_t offset, i32_t len));

  PURE_VIRTUAL(auto map(BufferMapAccess::Enum flags) -> void *);

  PURE_VIRTUAL(auto mapRange(i32_t offset, i32_t len, core::detail::EnumClassBitset<BufferMapRangeAccess::Enum> bitset)
          -> void *);

  PURE_VIRTUAL(void unmap());

  PURE_VIRTUAL(void bindRange(u32_t buf, ptrdiff_t offset, ptrdiff_t size));

  /**
   * \~russian @brief Делает буфер текущим.
   *
   * @sa unbind()
   */
  PURE_VIRTUAL(void bind());

  /**
   * \~russian @brief Делает текущим пустой буфер.
   *
   * @sa bind()
   */
  PURE_VIRTUAL(void unbind());

  /**
   * \~russian @brief Получает целевой тип буфера.
   */
  PURE_VIRTUAL(auto getTarget() const -> BufferTarget::Enum);

  /**
   * \~russian @brief Получает режим работы с данными.
   */
  PURE_VIRTUAL(auto getUsage() const -> BufferUsage::Enum);

  /**
   * \~russian @brief Получает количество элементов в массиве.
   */
  PURE_VIRTUAL(auto getCapacity() const -> i32_t);

  /**
   * \~russian @brief Получает размер структуры данных.
   */
  PURE_VIRTUAL(auto getByteStride() const -> i32_t);
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BUFFER_HPP
