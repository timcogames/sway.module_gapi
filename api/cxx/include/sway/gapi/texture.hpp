#ifndef SWAY_GAPI_TEXTURE_HPP
#define SWAY_GAPI_TEXTURE_HPP

#include <sway/core.hpp>
#include <sway/gapi/pixelstoragemodes.hpp>
#include <sway/gapi/texturecreateinfo.hpp>
#include <sway/gapi/texturesubdatadescriptor.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/math.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Texture : public core::foundation::Uniqueable<u32_t> {
  DECLARE_CLASS_POINTER_ALIASES(Texture)

public:
  Texture()
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  virtual ~Texture() = default;

  PURE_VIRTUAL(void create(const TextureCreateInfo &createInfo));

  PURE_VIRTUAL(void updateSubdata(TextureSubdataDescriptor desc));

  PURE_VIRTUAL(void setPixelStorage(PixelStorageMode mode, u32_t param));

  PURE_VIRTUAL(void setActive(i32_t slot));

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());

  PURE_VIRTUAL(auto getTarget() -> TextureTarget);
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTURE_HPP
