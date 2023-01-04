#ifndef SWAY_GAPI_FRAMEBUFFER_HPP
#define SWAY_GAPI_FRAMEBUFFER_HPP

#include <sway/core/foundation/uniqueable.hpp>
#include <sway/gapi/framebufferattachments.hpp>
#include <sway/gapi/renderbuffer.hpp>
#include <sway/gapi/texture.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Framebuffer : public core::foundation::Uniqueable<u32_t> {
public:
  Framebuffer()
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  virtual ~Framebuffer() = default;

  PURE_VIRTUAL(void attach(FramebufferAttachment attachment, std::shared_ptr<Texture> texture, int mipLevels));

  PURE_VIRTUAL(void attach(FramebufferAttachment attachment, std::shared_ptr<Renderbuffer> renderbuffer));

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_FRAMEBUFFER_HPP
