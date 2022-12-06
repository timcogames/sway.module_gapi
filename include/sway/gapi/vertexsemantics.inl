#include <sway/gapi/vertexsemantics.hpp>

#include <string>

template <typename Type = char, typename Traits = std::char_traits<Type>>
inline std::basic_ostream<Type, Traits> &operator<<(
    std::basic_ostream<Type, Traits> &stream, sway::gapi::VertexSemantic_t value) {
  switch (value) {
    case sway::gapi::VertexSemantic_t::Position:
      return stream << "attr_position";
    case sway::gapi::VertexSemantic_t::Color:
      return stream << "attr_color";
    case sway::gapi::VertexSemantic_t::TexCoord_0:
      return stream << "attr_texcoord_0";
    case sway::gapi::VertexSemantic_t::TexCoord_1:
      return stream << "attr_texcoord_1";
    case sway::gapi::VertexSemantic_t::TexCoord_2:
      return stream << "attr_texcoord_2";
    case sway::gapi::VertexSemantic_t::TexCoord_3:
      return stream << "attr_texcoord_3";
    case sway::gapi::VertexSemantic_t::TexCoord_4:
      return stream << "attr_texcoord_4";
    case sway::gapi::VertexSemantic_t::TexCoord_5:
      return stream << "attr_texcoord_5";
    case sway::gapi::VertexSemantic_t::TexCoord_6:
      return stream << "attr_texcoord_6";
    case sway::gapi::VertexSemantic_t::TexCoord_7:
      return stream << "attr_texcoord_7";
    case sway::gapi::VertexSemantic_t::Normal:
      return stream << "attr_normal";
    case sway::gapi::VertexSemantic_t::Tangent:
      return stream << "attr_tangent";
    case sway::gapi::VertexSemantic_t::Binormal:
      return stream << "attr_binormal";
    case sway::gapi::VertexSemantic_t::BlendWeights:
      return stream << "attr_blend_weights";
    case sway::gapi::VertexSemantic_t::BlendIndices:
      return stream << "attr_blend_indices";
    default:
      return stream << "unknown";
  }
}

template <typename Type = char, typename Traits = std::char_traits<Type>, typename Alloc = std::allocator<Type>>
inline std::basic_string<Type, Traits, Alloc> stringize(sway::gapi::VertexSemantic_t value) {
  switch (value) {
    case sway::gapi::VertexSemantic_t::Position:
      return "attr_position";
    case sway::gapi::VertexSemantic_t::Color:
      return "attr_color";
    case sway::gapi::VertexSemantic_t::TexCoord_0:
      return "attr_texcoord_0";
    case sway::gapi::VertexSemantic_t::TexCoord_1:
      return "attr_texcoord_1";
    case sway::gapi::VertexSemantic_t::TexCoord_2:
      return "attr_texcoord_2";
    case sway::gapi::VertexSemantic_t::TexCoord_3:
      return "attr_texcoord_3";
    case sway::gapi::VertexSemantic_t::TexCoord_4:
      return "attr_texcoord_4";
    case sway::gapi::VertexSemantic_t::TexCoord_5:
      return "attr_texcoord_5";
    case sway::gapi::VertexSemantic_t::TexCoord_6:
      return "attr_texcoord_6";
    case sway::gapi::VertexSemantic_t::TexCoord_7:
      return "attr_texcoord_7";
    case sway::gapi::VertexSemantic_t::Normal:
      return "attr_normal";
    case sway::gapi::VertexSemantic_t::Tangent:
      return "attr_tangent";
    case sway::gapi::VertexSemantic_t::Binormal:
      return "attr_binormal";
    case sway::gapi::VertexSemantic_t::BlendWeights:
      return "attr_blend_weights";
    case sway::gapi::VertexSemantic_t::BlendIndices:
      return "attr_blend_indices";
    default:
      return "unknown";
  }
}
