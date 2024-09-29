#ifndef SWAY_GAPI_FRAMEBUFFER_HPP
#define SWAY_GAPI_FRAMEBUFFER_HPP

#include <sway/core.hpp>
#include <sway/gapi/framebufferattachments.hpp>
#include <sway/gapi/renderbuffer.hpp>
#include <sway/gapi/texture.hpp>
#include <sway/gapi/typedefs.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Framebuffer : public core::foundation::Uniqueable<ObjectUid_t> {
  DECLARE_CLASS_POINTER_ALIASES(Framebuffer)

public:
  Framebuffer()
      : core::foundation::Uniqueable<ObjectUid_t>(std::nullopt) {}

  virtual ~Framebuffer() = default;

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());

  PURE_VIRTUAL(void attach(FramebufferAttachment attachment, TexturePtr_t tex, i32_t mipLevels));

  PURE_VIRTUAL(void attach(FramebufferAttachment attachment, RenderBufferPtr_t buf));

  PURE_VIRTUAL(void drawBuffers(i32_t num, const u32_t *bufs));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_FRAMEBUFFER_HPP
