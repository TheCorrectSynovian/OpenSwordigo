/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB5E0
 * Mangled: ._ZN5Caver5Proto22GroundPolygonComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::GroundPolygonComponent::MergeFrom(Caver::Proto::GroundPolygonComponent const&)
 *
 * Callers: 3
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *   0x0000000000306C98  Caver::Proto::GroundPolygonComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000306C9C  Caver::Proto::GroundPolygonComponent::CopyFrom(Caver::Proto::GroundPolygonComponent const&)
 *
 * Callees: 1
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB5E8 string=0x00000000001FB5EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::GroundPolygonComponent::MergeFrom()
{
  JUMPOUT(0x305E04);
}

