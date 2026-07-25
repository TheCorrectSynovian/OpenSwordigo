/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003085F8
 * Mangled: _ZN5Caver5Proto19GroundMeshComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GroundMeshComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCD10  Caver::Proto::GroundMeshComponent::MergeFrom(Caver::Proto::GroundMeshComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000003085F8 string=0x00000000001FCD10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GroundMeshComponent::CheckTypeAndMergeFrom(
        Caver::Proto::GroundMeshComponent *this,
        const Caver::Proto::GroundMeshComponent *a2)
{
  Caver::Proto::GroundMeshComponent::MergeFrom(this, a2);
}

