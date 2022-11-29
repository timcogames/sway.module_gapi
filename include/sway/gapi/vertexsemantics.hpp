#ifndef SWAY_GAPI_VERTEXSEMANTICS_HPP
#define SWAY_GAPI_VERTEXSEMANTICS_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class VertexSemantic_t : u32_t {
  kPosition,
  kColor,
  kTexCoord_0,
  kTexCoord_1,
  kTexCoord_2,
  kTexCoord_3,
  kTexCoord_4,
  kTexCoord_5,
  kTexCoord_6,
  kTexCoord_7,
  kNormal,
  kTangent,
  kBinormal,
  kBlendWeights,
  kBlendIndices
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#include <sway/gapi/vertexsemantics.inl>

#endif  // SWAY_GAPI_VERTEXSEMANTICS_HPP
