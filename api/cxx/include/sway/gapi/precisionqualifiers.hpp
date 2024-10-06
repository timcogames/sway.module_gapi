#ifndef SWAY_GAPI_PRECISIONQUALIFIERS_HPP
#define SWAY_GAPI_PRECISIONQUALIFIERS_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

enum class PrecisionQualifier : u32_t {
  LW,  // Low
  MD,  // Medium
  HI,  // Hight
  Latest
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#include <sway/gapi/precisionqualifiers.inl>

#endif  // SWAY_GAPI_PRECISIONQUALIFIERS_HPP
