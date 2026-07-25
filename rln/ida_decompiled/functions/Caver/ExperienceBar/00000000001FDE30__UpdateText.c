/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE30
 * Mangled: ._ZN5Caver13ExperienceBar10UpdateTextEv
 * Demangled: Caver::ExperienceBar::UpdateText(void)
 *
 * Callers: 3
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003CFB94  Caver::ExperienceBar::SetExperience(int,int,int,int)
 *   0x00000000003CFE74  Caver::ExperienceBar::Update(float)
 *
 * Callees: 1
 *   0x00000000003CE554  Caver::ExperienceBar::UpdateText(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDE38 string=0x00000000001FDE3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ExperienceBar::UpdateText(Caver::ExperienceBar *this)
{
  return _ZN5Caver13ExperienceBar10UpdateTextEv(this);
}

