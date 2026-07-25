/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE8B0
 * Mangled: ._ZN5Caver5Proto7Polygon9MergeFromERKS1_
 * Demangled: Caver::Proto::Polygon::MergeFrom(Caver::Proto::Polygon const&)
 *
 * Callers: 5
 *   0x00000000002D01E8  Caver::Proto::Polygon::Polygon(Caver::Proto::Polygon const&)
 *   0x00000000002D09C0  Caver::Proto::Polygon::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D0AA8  Caver::Proto::Polygon::CopyFrom(Caver::Proto::Polygon const&)
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *   0x000000000030AB0C  Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&)
 *
 * Callees: 1
 *   0x00000000002D01E8  Caver::Proto::Polygon::Polygon(Caver::Proto::Polygon const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE8B8 string=0x00000000001FE8BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Polygon::MergeFrom(Caver::Proto::Polygon *this, const Caver::Proto::Polygon *a2)
{
  JUMPOUT(0x2D02AC);
}

