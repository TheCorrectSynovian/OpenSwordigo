/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BF00
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ProjectileMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000029BF00 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProjectileMonsterControllerComponent::ValueForBindedProperty(
        Caver::ProjectileMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::ValueForBindedProperty(this, a2);
}

