#ifndef SWAY_GAPI_PIXELFORMATS_HPP
#define SWAY_GAPI_PIXELFORMATS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

enum class PixelFormat : u32_t {
  UNKNOWN,

  R,
  R32F,
  RG,
  RGB,
  RGBA,
  RGBA32F,  ///< or HDR
  HDR,  ///< or RGBA32F
  D16,
  D24,
  D24S8,

  LUMINANCE,
  LUMINANCE_ALPHA,

  RGBA4,

  BGR,
  BGRA,
  RGB8,
  RGBA8
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_PIXELFORMATS_HPP
