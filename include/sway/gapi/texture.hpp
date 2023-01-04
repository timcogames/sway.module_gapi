#ifndef SWAY_GAPI_TEXTURE_HPP
#define SWAY_GAPI_TEXTURE_HPP

#include <sway/core/foundation/uniqueable.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Texture : public core::foundation::Uniqueable<u32_t> {
public:
  Texture()
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  virtual ~Texture() = default;

  PURE_VIRTUAL(void create(void *data, int width, int height));

  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTURE_HPP
