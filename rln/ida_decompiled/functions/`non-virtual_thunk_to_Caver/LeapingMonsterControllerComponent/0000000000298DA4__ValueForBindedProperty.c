/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298DA4
 * Mangled: _ZThn16_N5Caver33LeapingMonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::LeapingMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA990  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000298DA8 string=0x00000000001FA990 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::LeapingMonsterControllerComponent::ValueForBindedProperty(
        Caver::LeapingMonsterControllerComponent *this,
        int a2)
{
  return Caver::MonsterControllerComponent::ValueForBindedProperty(
           (Caver::LeapingMonsterControllerComponent *)((char *)this - 16),
           a2);
}

