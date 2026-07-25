/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030A9B8
 * Mangled: _ZN5Caver5Proto18WaterMeshComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::WaterMeshComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9180  Caver::Proto::WaterMeshComponent::MergeFrom(Caver::Proto::WaterMeshComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000030A9B8 string=0x00000000001F9180 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::WaterMeshComponent::CheckTypeAndMergeFrom(
        Caver::Proto::WaterMeshComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::WaterMeshComponent::MergeFrom();
}

