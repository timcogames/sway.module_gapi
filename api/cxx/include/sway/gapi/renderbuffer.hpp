#ifndef SWAY_GAPI_RENDERBUFFER_HPP
#define SWAY_GAPI_RENDERBUFFER_HPP

#include <sway/core.hpp>
#include <sway/gapi/pixelformats.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/math.hpp>

namespace sway::gapi {

class RenderBuffer : public core::Uniqueable<ObjectUid_t> {
public:
#pragma region "Ctors/Dtor"

  RenderBuffer()
      : core::Uniqueable<ObjectUid_t>(std::nullopt) {}

  DTOR_VIRTUAL_DEFAULT(RenderBuffer);

#pragma endregion

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());

  PURE_VIRTUAL(void store(PixelFormat fmt, const math::size2i_t &size, i32_t samples));
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_RENDERBUFFER_HPP
