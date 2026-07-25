/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F53E0
 * Mangled: ._ZN5Caver5Proto34SnappingMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::MergeFrom(Caver::Proto::SnappingMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000324D48  Caver::Proto::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(Caver::Proto::SnappingMonsterControllerComponent const&)
 *   0x00000000003254FC  Caver::Proto::SnappingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000325500  Caver::Proto::SnappingMonsterControllerComponent::CopyFrom(Caver::Proto::SnappingMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000324D48  Caver::Proto::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(Caver::Proto::SnappingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F53E8 string=0x00000000001F53EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SnappingMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x324D98);
}

