#ifndef SWAY_GAPI_VERTEXSEMANTICS_HPP
#define SWAY_GAPI_VERTEXSEMANTICS_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class VertexSemantic : u32_t {
  POS,
  COL,
  TEXCOORD_0,
  TEXCOORD_1,
  TEXCOORD_2,
  TEXCOORD_3,
  TEXCOORD_4,
  TEXCOORD_5,
  TEXCOORD_6,
  TEXCOORD_7,
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
