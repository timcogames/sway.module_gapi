#ifndef SWAY_GAPI_BUFFERBASE_HPP
#define SWAY_GAPI_BUFFERBASE_HPP

#include <sway/gapi/bufferdescriptor.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>
#include <sway/gapi/resource.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>
#include <sway/visibilitymacros.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/*!
 * \brief
 *    Представление аппаратного буфера.
 */
class ABufferBase : public Resource {
public:
  /*!
   * \brief
   *    Конструктор класса.
   *
   * \param[in] desc
   *    Описание буфера.
   */
  ABufferBase(const BufferDescriptor &desc) {
    // Empty
  }

  /*!
   * \brief
   *    Деструктор класса.
   */
  virtual ~ABufferBase() {
    // Empty
  }

  /*!
   * \brief
   *    Устанавливает данные в аппаратный буфер.
   *
   * \param[in] data
   *    Первоначальный данные.
   */
  virtual bool allocate(const void *data) = 0;

  /*!
   * \brief
   *    Изменяет данные в уже существующем буфере.
   *
   * \param[in] offset
   *    Начало изменяемого блока данных.
   *
   * \param[in] size
   *    Размер изменяемого блока данных.
   *
   * \param[in] source
   *    Область памяти, содержащая новые значения.
   *
   * \sa
   *    updateSubdata(const void *)
   */
  virtual void updateSubdata(u32_t offset, u32_t size, const void *source) = 0;

  /*!
   * \brief
   *    Изменяет данные в уже существующем буфере.
   *
   * \param[in] source
   *    Область памяти, содержащая новые значения.
   *
   * \sa
   *    updateSubdata(u32_t, u32_t, const void *)
   */
  virtual void updateSubdata(const void *source) = 0;

  /*!
   * \brief
   *    Получает указатель на область памяти, в которой находятся данные буфера.
   *
   * \sa
   *    unmap()
   */
  virtual void *map() = 0;

  /*!
   * \brief
   *    Возвращает данные буфера в память.
   *
   * \sa
   *    map()
   */
  virtual void unmap() = 0;

  /*!
   * \brief
   *    Делает буфер текущим.
   *
   * \sa
   *    unbind()
   */
  virtual void bind() = 0;

  /*!
   * \brief
   *    Делает текущим пустой буфер.
   *
   * \sa
   *    bind()
   */
  virtual void unbind() = 0;

  /*!
   * \brief
   *    Получает целевой тип буфера.
   */
  virtual BufferTarget_t getTarget() const = 0;

  /*!
   * \brief
   *    Получает режим работы с данными.
   */
  virtual BufferUsage_t getUsage() const = 0;

  /*!
   * \brief
   *    Получает количество элементов в массиве.
   */
  virtual s32_t getCapacity() const = 0;

  /*!
   * \brief
   *    Получает размер структуры данных.
   */
  virtual s32_t getByteStride() const = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
