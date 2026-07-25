/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000306C98
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GroundPolygonComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB5E0  Caver::Proto::GroundPolygonComponent::MergeFrom(Caver::Proto::GroundPolygonComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000306C98 string=0x00000000001FB5E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GroundPolygonComponent::CheckTypeAndMergeFrom(
        Caver::Proto::GroundPolygonComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::GroundPolygonComponent::MergeFrom();
}

