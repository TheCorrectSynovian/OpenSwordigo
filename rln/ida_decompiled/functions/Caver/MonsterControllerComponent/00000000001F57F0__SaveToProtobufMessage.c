/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F57F0
 * Mangled: ._ZNK5Caver26MonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 11
 *   0x0000000000293438  Caver::BatMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002941C8  Caver::BouncingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000295890  Caver::ChargingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002972C0  Caver::GenericMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000298CAC  Caver::LeapingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000029BEE4  Caver::ProjectileMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000029C638  Caver::ShootingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000029DB00  Caver::SkellyMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000029F400  Caver::SnappingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A0758  Caver::StaticMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A1298  Caver::WalkingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x0000000000299678  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F57F8 string=0x00000000001F57FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterControllerComponent::SaveToProtobufMessage(
        Caver::MonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  return _ZNK5Caver26MonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE(this, a2);
}

