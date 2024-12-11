#ifndef SWAY_GAPI_FRAMEBUFFER_HPP
#define SWAY_GAPI_FRAMEBUFFER_HPP

#include <sway/core.hpp>
#include <sway/gapi/framebufferattachments.hpp>
#include <sway/gapi/renderbuffer.hpp>
#include <sway/gapi/texture.hpp>
#include <sway/gapi/typedefs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class FrameBuffer : public core::foundation::Uniqueable<ObjectUid_t> {
  DECLARE_PTR_ALIASES(FrameBuffer)

public:
#pragma region "Ctors/Dtor"

  FrameBuffer()
      : core::foundation::Uniqueable<ObjectUid_t>(std::nullopt) {}

  DTOR_VIRTUAL_DEFAULT(FrameBuffer);

#pragma endregion

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());

  PURE_VIRTUAL(void attach(FrameBufferAttachment::Enum attachment, TexturePtr_t tex, i32_t mipLevels));

  PURE_VIRTUAL(void attach(FrameBufferAttachment::Enum attachment, RenderBufferPtr_t buf));

  PURE_VIRTUAL(void drawBuffers(i32_t num, const u32_t *bufs));
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_FRAMEBUFFER_HPP
