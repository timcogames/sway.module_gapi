#ifndef SWAY_GAPI_RENDERBUFFER_HPP
#define SWAY_GAPI_RENDERBUFFER_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/math.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class RenderBuffer : public core::foundation::Uniqueable<u32_t> {
  DECLARE_CLASS_POINTER_ALIASES(RenderBuffer)

public:
  RenderBuffer()
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  virtual ~RenderBuffer() = default;

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());

  PURE_VIRTUAL(void store(const math::size2i_t &size));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_RENDERBUFFER_HPP
