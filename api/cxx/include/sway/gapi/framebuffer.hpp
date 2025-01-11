#ifndef SWAY_GAPI_FRAMEBUFFER_HPP
#define SWAY_GAPI_FRAMEBUFFER_HPP

#include <sway/core.hpp>
#include <sway/gapi/framebufferattachments.hpp>
#include <sway/gapi/renderbuffer.hpp>
#include <sway/gapi/texture.hpp>
#include <sway/gapi/typedefs.hpp>

namespace sway::gapi {

class FrameBuffer : public core::Uniqueable<ObjectUid_t> {
public:
#pragma region "Ctors/Dtor"

  FrameBuffer()
      : core::Uniqueable<ObjectUid_t>(std::nullopt) {}

  virtual ~FrameBuffer() = default;

#pragma endregion

#pragma region "Pure virtual methods"

  virtual void bind() = 0;

  virtual void unbind() = 0;

  virtual void attach(FrameBufferAttachment::Enum attachment, typedefs::TexturePtr_t tex, i32_t mipLevels) = 0;

  virtual void attach(FrameBufferAttachment::Enum attachment, typedefs::RenderBufferPtr_t buf) = 0;

  virtual void drawBuffers(i32_t num, const u32_t *bufs) = 0;

#pragma endregion
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_FRAMEBUFFER_HPP
