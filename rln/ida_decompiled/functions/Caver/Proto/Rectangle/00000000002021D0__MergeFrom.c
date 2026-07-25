/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002021D0
 * Mangled: ._ZN5Caver5Proto9Rectangle9MergeFromERKS1_
 * Demangled: Caver::Proto::Rectangle::MergeFrom(Caver::Proto::Rectangle const&)
 *
 * Callers: 10
 *   0x00000000002CEC00  Caver::Proto::Rectangle::Rectangle(Caver::Proto::Rectangle const&)
 *   0x00000000002CF158  Caver::Proto::Rectangle::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002CF15C  Caver::Proto::Rectangle::CopyFrom(Caver::Proto::Rectangle const&)
 *   0x00000000002D12AC  Caver::Proto::Texture_Subtexture::Texture_Subtexture(Caver::Proto::Texture_Subtexture const&)
 *   0x00000000002D3664  Caver::Proto::Font_Glyph::Font_Glyph(Caver::Proto::Font_Glyph const&)
 *   0x00000000002D4268  Caver::Proto::Font::Font(Caver::Proto::Font const&)
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *   0x000000000030AB0C  Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&)
 *
 * Callees: 1
 *   0x00000000002CEC00  Caver::Proto::Rectangle::Rectangle(Caver::Proto::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002021D8 string=0x00000000002021DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Rectangle::MergeFrom(Caver::Proto::Rectangle *this, const Caver::Proto::Rectangle *a2)
{
  JUMPOUT(0x2CEC4C);
}

