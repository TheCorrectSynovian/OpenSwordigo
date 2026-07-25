/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298DB0
 * Mangled: _ZThn16_N5Caver33LeapingMonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::LeapingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8E50  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000298DB0 string=0x0000000000298DB4 "'"
 *   insn=0x0000000000298DB4 string=0x00000000001F8E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::LeapingMonsterControllerComponent::SetValueForBindedProperty(
        Caver::LeapingMonsterControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::MonsterControllerComponent::SetValueForBindedProperty(
           (Caver::LeapingMonsterControllerComponent *)((char *)this - 16),
           a2,
           a3);
}

