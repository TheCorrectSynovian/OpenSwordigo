/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002934CC
 * Mangled: _ZThn16_N5Caver29BatMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::BatMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002934CC string=0x00000000002934D0 "0"
 *   insn=0x00000000002934D0 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BatMonsterControllerComponent::ValueForBindedProperty(
        Caver::BatMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::ValueForBindedProperty(
           (Caver::BatMonsterControllerComponent *)((char *)this - 16),
           a2);
}

