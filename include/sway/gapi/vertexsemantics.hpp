#ifndef SWAY_GAPI_VERTEXSEMANTICS_HPP
#define SWAY_GAPI_VERTEXSEMANTICS_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class VertexSemantic_t : u32_t {
  Position,
  Color,
  TexCoord_0,
  TexCoord_1,
  TexCoord_2,
  TexCoord_3,
  TexCoord_4,
  TexCoord_5,
  TexCoord_6,
  TexCoord_7,
  Normal,
  Tangent,
  Binormal,
  BlendWeights,
  BlendIndices
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#include <sway/gapi/vertexsemantics.inl>

#endif  // SWAY_GAPI_VERTEXSEMANTICS_HPP
