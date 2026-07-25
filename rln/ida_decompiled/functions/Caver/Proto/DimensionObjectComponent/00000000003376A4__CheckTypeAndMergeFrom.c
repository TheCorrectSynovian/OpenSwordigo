/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003376A4
 * Mangled: _ZN5Caver5Proto24DimensionObjectComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::DimensionObjectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203E40  Caver::Proto::DimensionObjectComponent::MergeFrom(Caver::Proto::DimensionObjectComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::DimensionObjectComponent::CheckTypeAndMergeFrom(
        Caver::Proto::DimensionObjectComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::DimensionObjectComponent::MergeFrom();
}

