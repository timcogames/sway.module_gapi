#ifndef SWAY_GAPI_RENDERBUFFER_HPP
#define SWAY_GAPI_RENDERBUFFER_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Renderbuffer : public core::foundation::Uniqueable<u32_t> {
  DECLARE_CLASS_POINTER_ALIASES(Renderbuffer)

public:
  Renderbuffer()
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  virtual ~Renderbuffer() = default;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_RENDERBUFFER_HPP
