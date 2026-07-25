/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC490
 * Mangled: ._ZN5Caver5Proto32StaticMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::MergeFrom(Caver::Proto::StaticMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x00000000003272A0  Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent(Caver::Proto::StaticMonsterControllerComponent const&)
 *   0x00000000003279E4  Caver::Proto::StaticMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003279E8  Caver::Proto::StaticMonsterControllerComponent::CopyFrom(Caver::Proto::StaticMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x00000000003272A0  Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent(Caver::Proto::StaticMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC498 string=0x00000000001FC49C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::StaticMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x327318);
}

