/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F90A0
 * Mangled: ._ZN5Caver14SkillComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000028E374  `non-virtual thunk to'Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000028E21C  Caver::SkillComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F90A8 string=0x00000000001F90AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillComponent::SetValueForBindedProperty(
        Caver::SkillComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver14SkillComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

