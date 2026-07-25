/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BEE4
 * Mangled: _ZNK5Caver36ProjectileMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ProjectileMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x000000000029BEE4 string=0x00000000001F57F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProjectileMonsterControllerComponent::SaveToProtobufMessage(
        Caver::ProjectileMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  return Caver::MonsterControllerComponent::SaveToProtobufMessage(this, a2);
}

