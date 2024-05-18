#ifndef SWAY_GAPI_PRECISIONQUALIFIERS_HPP
#define SWAY_GAPI_PRECISIONQUALIFIERS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class PrecisionQualifier : u32_t {
  LW,  // Low
  MD,  // Medium
  HI,  // Hight
  Latest
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#include <sway/gapi/precisionqualifiers.inl>

#endif  // SWAY_GAPI_PRECISIONQUALIFIERS_HPP
