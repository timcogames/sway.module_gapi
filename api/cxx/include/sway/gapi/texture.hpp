#ifndef SWAY_GAPI_TEXTURE_HPP
#define SWAY_GAPI_TEXTURE_HPP

#include <sway/core.hpp>
#include <sway/gapi/texturecreateinfo.hpp>
#include <sway/math.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Texture : public core::foundation::Uniqueable<u32_t> {
public:
  Texture()
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  virtual ~Texture() = default;

  PURE_VIRTUAL(void create(const TextureCreateInfo &createInfo));

  PURE_VIRTUAL(void setUnpackAlignement(u32_t param));

  PURE_VIRTUAL(void setActive(s32_t slot));

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTURE_HPP
