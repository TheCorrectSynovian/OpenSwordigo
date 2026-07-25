/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA0A0
 * Mangled: ._ZN5Caver5Proto32SkellyMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::MergeFrom(Caver::Proto::SkellyMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000326CD4  Caver::Proto::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(Caver::Proto::SkellyMonsterControllerComponent const&)
 *   0x000000000032716C  Caver::Proto::SkellyMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000327170  Caver::Proto::SkellyMonsterControllerComponent::CopyFrom(Caver::Proto::SkellyMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000326CD4  Caver::Proto::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(Caver::Proto::SkellyMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA0A8 string=0x00000000001FA0AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SkellyMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x326D20);
}

