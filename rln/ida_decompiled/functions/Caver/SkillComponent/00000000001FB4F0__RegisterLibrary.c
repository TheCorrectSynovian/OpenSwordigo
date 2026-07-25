/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB4F0
 * Mangled: ._ZN5Caver14SkillComponent15RegisterLibraryEv
 * Demangled: Caver::SkillComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000028E384  Caver::SkillComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000028E388  Caver::SkillComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB4F8 string=0x00000000001FB4FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillComponent::RegisterLibrary(Caver::SkillComponent *this)
{
  return _ZN5Caver14SkillComponent15RegisterLibraryEv(this);
}

