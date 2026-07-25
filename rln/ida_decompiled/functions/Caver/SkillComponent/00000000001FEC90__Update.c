/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEC90
 * Mangled: ._ZN5Caver14SkillComponent6UpdateEf
 * Demangled: Caver::SkillComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000028F07C  `non-virtual thunk to'Caver::SkillComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000028EF00  Caver::SkillComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEC98 string=0x00000000001FEC9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillComponent::Update(Caver::SkillComponent *this, float a2)
{
  return _ZN5Caver14SkillComponent6UpdateEf(this, a2);
}

