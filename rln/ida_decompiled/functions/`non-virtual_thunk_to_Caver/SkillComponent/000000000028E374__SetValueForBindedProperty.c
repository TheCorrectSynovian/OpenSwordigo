/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028E374
 * Mangled: _ZThn16_N5Caver14SkillComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F90A0  Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000028E374 string=0x000000000028E378 "J"
 *   insn=0x000000000028E378 string=0x00000000001F90A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SkillComponent::SetValueForBindedProperty(
        Caver::SkillComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::SkillComponent::SetValueForBindedProperty((Caver::SkillComponent *)((char *)this - 16), a2, a3);
}

