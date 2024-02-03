#ifndef SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP
#define SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferSubdataDescriptor {
  u32_t offset;  // Начало изменяемого блока данных.
  u32_t size;  // Размер изменяемого блока данных.
  const void *data;  // Область памяти, содержащая новые значения.
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP
