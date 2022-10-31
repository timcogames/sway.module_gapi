#ifndef SWAY_GAPI_BUFFERBASE_HPP
#define SWAY_GAPI_BUFFERBASE_HPP

#include <sway/gapi/bufferdescriptor.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>
#include <sway/gapi/resource.hpp>
#include <sway/keywords.hpp>
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
  virtual ~ABufferBase() = default;

  /*!
   * \brief
   *    Устанавливает данные в аппаратный буфер.
   *
   * \param[in] data
   *    Первоначальный данные.
   */
  PURE_VIRTUAL(bool allocate(const void *data));

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
  PURE_VIRTUAL(void updateSubdata(u32_t offset, u32_t size, const void *source));

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
  PURE_VIRTUAL(void updateSubdata(const void *source));

  /*!
   * \brief
   *    Получает указатель на область памяти, в которой находятся данные буфера.
   *
   * \sa
   *    unmap()
   */
  PURE_VIRTUAL(void *map());

  /*!
   * \brief
   *    Возвращает данные буфера в память.
   *
   * \sa
   *    map()
   */
  PURE_VIRTUAL(void unmap());

  /*!
   * \brief
   *    Делает буфер текущим.
   *
   * \sa
   *    unbind()
   */
  PURE_VIRTUAL(void bind());

  /*!
   * \brief
   *    Делает текущим пустой буфер.
   *
   * \sa
   *    bind()
   */
  PURE_VIRTUAL(void unbind());

  /*!
   * \brief
   *    Получает целевой тип буфера.
   */
  PURE_VIRTUAL(BufferTarget_t getTarget() const);

  /*!
   * \brief
   *    Получает режим работы с данными.
   */
  PURE_VIRTUAL(BufferUsage_t getUsage() const);

  /*!
   * \brief
   *    Получает количество элементов в массиве.
   */
  PURE_VIRTUAL(s32_t getCapacity() const);

  /*!
   * \brief
   *    Получает размер структуры данных.
   */
  PURE_VIRTUAL(s32_t getByteStride() const);
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif