#ifndef SWAY_GAPI_PIXELFORMATS_HPP
#define SWAY_GAPI_PIXELFORMATS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class PixelFormat : u32_t {
  UNKNOWN,

  R,
  R32F,
  RG,
  RGB,
  RGBA,
  RGBA32F,  // or HDR
  HDR,  // or RGBA32F
  DEPTH,

  BGR,
  BGRA,
  RGB8,
  RGBA8
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_PIXELFORMATS_HPP
