/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4500
 * Mangled: ._ZN5Caver5Proto29BatMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::BatMonsterControllerComponent::MergeFrom(Caver::Proto::BatMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x000000000032813C  Caver::Proto::BatMonsterControllerComponent::BatMonsterControllerComponent(Caver::Proto::BatMonsterControllerComponent const&)
 *   0x00000000003285D4  Caver::Proto::BatMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003285D8  Caver::Proto::BatMonsterControllerComponent::CopyFrom(Caver::Proto::BatMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x000000000032813C  Caver::Proto::BatMonsterControllerComponent::BatMonsterControllerComponent(Caver::Proto::BatMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4508 string=0x00000000001F450C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::BatMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x328188);
}

