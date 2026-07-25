/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFBB0
 * Mangled: ._ZN5Caver26MonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 11
 *   0x0000000000293378  Caver::BatMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000294108  Caver::BouncingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000295774  Caver::ChargingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000297240  Caver::GenericMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000298BAC  Caver::LeapingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000029BEE0  Caver::ProjectileMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000029C578  Caver::ShootingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000029DA00  Caver::SkellyMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000029F28C  Caver::SnappingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A0690  Caver::StaticMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A1218  Caver::WalkingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x000000000029957C  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFBB8 string=0x00000000001FFBBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterControllerComponent::LoadFromProtobufMessage(
        Caver::MonsterControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  return _ZN5Caver26MonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}

