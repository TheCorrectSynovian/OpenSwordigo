/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BEE0
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ProjectileMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProjectileMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::ProjectileMonsterControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  return Caver::MonsterControllerComponent::LoadFromProtobufMessage(this, a2);
}

