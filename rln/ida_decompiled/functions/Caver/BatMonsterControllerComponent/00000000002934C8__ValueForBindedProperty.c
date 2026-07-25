/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002934C8
 * Mangled: _ZN5Caver29BatMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::BatMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002934C8 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BatMonsterControllerComponent::ValueForBindedProperty(
        Caver::BatMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::ValueForBindedProperty(this, a2);
}

