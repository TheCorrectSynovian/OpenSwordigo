/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200AA0
 * Mangled: ._ZNK5Caver7Polygon6BoundsEv
 * Demangled: Caver::Polygon::Bounds(void)
 *
 * Callers: 8
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *   0x00000000002BE92C  Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*)
 *   0x00000000002BEAB8  Caver::GroundPolygonComponent::SetPolygon(Caver::Polygon const&)
 *   0x00000000002BEC04  Caver::GroundPolygonComponent::SetDefaultValues(void)
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BEF34  Caver::GroundPolygonComponent::UpdateBounds(void)
 *   0x00000000004B2760  Caver::Shape::Bounds(void)
 *
 * Callees: 1
 *   0x00000000004B07A0  Caver::Polygon::Bounds(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200AA8 string=0x0000000000200AAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Polygon::Bounds(Caver::Polygon *this)
{
  return _ZNK5Caver7Polygon6BoundsEv(this);
}

