/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC600
 * Mangled: ._ZN5Caver13ExperienceBarC2Ev
 * Demangled: Caver::ExperienceBar::ExperienceBar(void)
 *
 * Callers: 2
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC608 string=0x00000000001FC60C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ExperienceBar::ExperienceBar(Caver::ExperienceBar *this)
{
  return _ZN5Caver13ExperienceBarC2Ev(this);
}

