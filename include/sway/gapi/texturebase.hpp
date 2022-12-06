#ifndef SWAY_GAPI_TEXTUREBASE_HPP
#define SWAY_GAPI_TEXTUREBASE_HPP

#include <sway/core/foundation/uniqueable.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class TextureBase : public core::foundation::Uniqueable<u32_t> {
public:
  /**
   * @brief Конструктор класса.
   */
  TextureBase()
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  /**
   * @brief Деструктор класса.
   */
  virtual ~TextureBase() = default;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTUREBASE_HPP
