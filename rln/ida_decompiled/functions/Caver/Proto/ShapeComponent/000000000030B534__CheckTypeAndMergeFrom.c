/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030B534
 * Mangled: _ZN5Caver5Proto14ShapeComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ShapeComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002032D0  Caver::Proto::ShapeComponent::MergeFrom(Caver::Proto::ShapeComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ShapeComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ShapeComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ShapeComponent::MergeFrom();
}

