/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8490
 * Mangled: ._ZN5Caver5Proto34BouncingMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::MergeFrom(Caver::Proto::BouncingMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x00000000003286F4  Caver::Proto::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(Caver::Proto::BouncingMonsterControllerComponent const&)
 *   0x0000000000328CE4  Caver::Proto::BouncingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000328CE8  Caver::Proto::BouncingMonsterControllerComponent::CopyFrom(Caver::Proto::BouncingMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x00000000003286F4  Caver::Proto::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(Caver::Proto::BouncingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8498 string=0x00000000001F849C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::BouncingMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x328740);
}

