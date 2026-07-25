/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA810
 * Mangled: ._ZN5Caver5Proto33WalkingMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::MergeFrom(Caver::Proto::WalkingMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x00000000003240A4  Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(Caver::Proto::WalkingMonsterControllerComponent const&)
 *   0x0000000000324410  Caver::Proto::WalkingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000324414  Caver::Proto::WalkingMonsterControllerComponent::CopyFrom(Caver::Proto::WalkingMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x00000000003240A4  Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(Caver::Proto::WalkingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA818 string=0x00000000001FA81C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::WalkingMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x3240F0);
}

