/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCD10
 * Mangled: ._ZN5Caver5Proto19GroundMeshComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::GroundMeshComponent::MergeFrom(Caver::Proto::GroundMeshComponent const&)
 *
 * Callers: 3
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *   0x00000000003085F8  Caver::Proto::GroundMeshComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003085FC  Caver::Proto::GroundMeshComponent::CopyFrom(Caver::Proto::GroundMeshComponent const&)
 *
 * Callees: 1
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCD18 string=0x00000000001FCD1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GroundMeshComponent::MergeFrom(
        Caver::Proto::GroundMeshComponent *this,
        const Caver::Proto::GroundMeshComponent *a2)
{
  JUMPOUT(0x307070);
}

