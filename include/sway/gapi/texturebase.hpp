#ifndef SWAY_GAPI_TEXTUREBASE_HPP
#define SWAY_GAPI_TEXTUREBASE_HPP

#include <sway/gapi/resource.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class ATextureBase : public Resource {
public:
  /*!
   * \brief
   *    Конструктор класса.
   */
  ATextureBase() {
    // Empty
  }

  /*!
   * \brief
   *    Деструктор класса.
   */
  virtual ~ATextureBase() = default;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
