/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE7E0
 * Mangled: ._ZN5Caver5Proto34ChargingMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::MergeFrom(Caver::Proto::ChargingMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000324528  Caver::Proto::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(Caver::Proto::ChargingMonsterControllerComponent const&)
 *   0x0000000000324C10  Caver::Proto::ChargingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000324C14  Caver::Proto::ChargingMonsterControllerComponent::CopyFrom(Caver::Proto::ChargingMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000324528  Caver::Proto::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(Caver::Proto::ChargingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE7E8 string=0x00000000001FE7EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ChargingMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x324578);
}

