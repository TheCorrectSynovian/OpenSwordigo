/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002020B0
 * Mangled: ._ZN5Caver13ExperienceBar13SetExperienceEiiii
 * Demangled: Caver::ExperienceBar::SetExperience(int,int,int,int)
 *
 * Callers: 2
 *   0x00000000003CFAE4  Caver::ExperienceBar::UpdateExperience(void)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *
 * Callees: 1
 *   0x00000000003CFB94  Caver::ExperienceBar::SetExperience(int,int,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002020B8 string=0x00000000002020BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ExperienceBar::SetExperience(Caver::ExperienceBar *this, int a2, int a3, int a4, int a5)
{
  return _ZN5Caver13ExperienceBar13SetExperienceEiiii(this, a2, a3, a4, a5);
}

