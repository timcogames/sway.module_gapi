#ifndef SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP
#define SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

struct BufferSubdataDescriptor {
  u32_t offset;  // Начало изменяемого блока данных.
  u32_t size;  // Размер изменяемого блока данных.
  const void *data;  // Область памяти, содержащая новые значения.
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP
