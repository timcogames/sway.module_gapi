#ifndef SWAY_GAPI_RENDERBUFFER_HPP
#define SWAY_GAPI_RENDERBUFFER_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Renderbuffer : public core::foundation::Uniqueable<u32_t> {
public:
  Renderbuffer()
      : core::foundation::Uniqueable<u32_t>(std::nullopt) {}

  virtual ~Renderbuffer() = default;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_RENDERBUFFER_HPP
