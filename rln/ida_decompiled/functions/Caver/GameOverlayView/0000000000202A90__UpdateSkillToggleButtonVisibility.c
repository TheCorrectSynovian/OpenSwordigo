/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202A90
 * Mangled: ._ZN5Caver15GameOverlayView33UpdateSkillToggleButtonVisibilityEv
 * Demangled: Caver::GameOverlayView::UpdateSkillToggleButtonVisibility(void)
 *
 * Callers: 1
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003D4AE4  Caver::GameOverlayView::UpdateSkillToggleButtonVisibility(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202A94 string=0x00000000003D4AE4 "\t"
 *   insn=0x0000000000202A98 string=0x0000000000202A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverlayView::UpdateSkillToggleButtonVisibility(Caver::GameOverlayView *this)
{
  return _ZN5Caver15GameOverlayView33UpdateSkillToggleButtonVisibilityEv(this);
}

