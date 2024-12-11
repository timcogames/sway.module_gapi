#ifndef SWAY_GAPI_RENDERBUFFER_HPP
#define SWAY_GAPI_RENDERBUFFER_HPP

#include <sway/core.hpp>
#include <sway/gapi/pixelformats.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/math.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class RenderBuffer : public core::foundation::Uniqueable<ObjectUid_t> {
  DECLARE_PTR_ALIASES(RenderBuffer)

public:
#pragma region "Ctors/Dtor"

  RenderBuffer()
      : core::foundation::Uniqueable<ObjectUid_t>(std::nullopt) {}

  DTOR_VIRTUAL_DEFAULT(RenderBuffer);

#pragma endregion

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());

  PURE_VIRTUAL(void store(PixelFormat fmt, const math::size2i_t &size, i32_t samples));
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_RENDERBUFFER_HPP
