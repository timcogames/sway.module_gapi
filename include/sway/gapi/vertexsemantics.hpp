#ifndef SWAY_GAPI_VERTEXSEMANTICS_HPP
#define SWAY_GAPI_VERTEXSEMANTICS_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class VertexSemantic : u32_t {
  POS,
  COL,
  TEX_COORD_0,
  TEX_COORD_1,
  TEX_COORD_2,
  TEX_COORD_3,
  TEX_COORD_4,
  TEX_COORD_5,
  TEX_COORD_6,
  TEX_COORD_7,
  NORMAL,
  TANGENT,
  BINORM,
  BLEND_WEIGHTS,
  BLEND_INDICES
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#include <sway/gapi/vertexsemantics.inl>

#endif  // SWAY_GAPI_VERTEXSEMANTICS_HPP
