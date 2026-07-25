/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028E384
 * Mangled: _ZN5Caver14SkillComponent7PrepareEv
 * Demangled: Caver::SkillComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB4F0  Caver::SkillComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000028E384 string=0x00000000001FB4F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillComponent::Prepare(Caver::SkillComponent *this)
{
  return Caver::SkillComponent::RegisterLibrary(this);
}

