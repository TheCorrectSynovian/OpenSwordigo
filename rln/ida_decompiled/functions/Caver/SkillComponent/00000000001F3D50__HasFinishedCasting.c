/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3D50
 * Mangled: ._ZN5Caver14SkillComponent18HasFinishedCastingEv
 * Demangled: Caver::SkillComponent::HasFinishedCasting(void)
 *
 * Callers: 1
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x000000000028EE80  Caver::SkillComponent::HasFinishedCasting(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3D58 string=0x00000000001F3D5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillComponent::HasFinishedCasting(Caver::SkillComponent *this)
{
  return _ZN5Caver14SkillComponent18HasFinishedCastingEv(this);
}

