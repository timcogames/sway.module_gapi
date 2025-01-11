#ifndef SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP
#define SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP

#include <sway/core.hpp>

namespace sway::gapi {

struct BufferSubdataDescriptor {
  u32_t offset;  ///< Начало изменяемого блока данных.
  u32_t size;  ///< Размер изменяемого блока данных.
  const void *data;  ///< Область памяти, содержащая новые значения.
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_BUFFERUPDATESUBDATAINFO_HPP
