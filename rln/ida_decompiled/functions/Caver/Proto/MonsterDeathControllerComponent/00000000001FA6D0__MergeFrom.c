/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA6D0
 * Mangled: ._ZN5Caver5Proto31MonsterDeathControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::MergeFrom(Caver::Proto::MonsterDeathControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000328E04  Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent(Caver::Proto::MonsterDeathControllerComponent const&)
 *   0x0000000000329170  Caver::Proto::MonsterDeathControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000329174  Caver::Proto::MonsterDeathControllerComponent::CopyFrom(Caver::Proto::MonsterDeathControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000328E04  Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent(Caver::Proto::MonsterDeathControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA6D8 string=0x00000000001FA6DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MonsterDeathControllerComponent::MergeFrom()
{
  JUMPOUT(0x328E50);
}

