#ifndef SWAY_GAPI_DEPTHDESCRIPTOR_HPP
#define SWAY_GAPI_DEPTHDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/blendfunctions.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct DepthDescriptor {
  BlendFn func;
  bool mask;
  f64_t near;
  f64_t far;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_DEPTHDESCRIPTOR_HPP
