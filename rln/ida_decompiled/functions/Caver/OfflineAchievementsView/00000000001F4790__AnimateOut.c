/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4790
 * Mangled: ._ZN5Caver23OfflineAchievementsView10AnimateOutEv
 * Demangled: Caver::OfflineAchievementsView::AnimateOut(void)
 *
 * Callers: 1
 *   0x0000000000385FFC  Caver::OfflineAchievementsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x0000000000383DD0  Caver::OfflineAchievementsView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4798 string=0x00000000001F479C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::OfflineAchievementsView::AnimateOut(Caver::OfflineAchievementsView *this)
{
  JUMPOUT(0x384358);
}

