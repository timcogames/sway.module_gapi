#ifndef SWAY_GAPI_TEXTURE_HPP
#define SWAY_GAPI_TEXTURE_HPP

#include <sway/core.hpp>
#include <sway/gapi/pixelstoragemodes.hpp>
#include <sway/gapi/texturecreateinfo.hpp>
#include <sway/gapi/texturesubdatadescriptor.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/math.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class Texture : public core::foundation::Uniqueable<ObjectUid_t> {
  DECLARE_PTR_ALIASES(Texture)

public:
  Texture()
      : core::foundation::Uniqueable<ObjectUid_t>(std::nullopt) {}

  virtual ~Texture() = default;

  PURE_VIRTUAL(void create(const TextureCreateInfo &createInfo));

  PURE_VIRTUAL(void updateSubdata(TextureSubdataDescriptor desc));

  PURE_VIRTUAL(void setPixelStorage(PixelStorageMode::Enum mode, u32_t param));

  PURE_VIRTUAL(void setActive(i32_t slot));

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());

  PURE_VIRTUAL(auto getTarget() -> TextureTarget::Enum);
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_TEXTURE_HPP
