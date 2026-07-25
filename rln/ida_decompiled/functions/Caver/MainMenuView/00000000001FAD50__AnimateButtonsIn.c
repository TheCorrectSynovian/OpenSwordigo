/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAD50
 * Mangled: ._ZN5Caver12MainMenuView16AnimateButtonsInEf
 * Demangled: Caver::MainMenuView::AnimateButtonsIn(float)
 *
 * Callers: 2
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000394244  Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *
 * Callees: 1
 *   0x0000000000393F74  Caver::MainMenuView::AnimateButtonsIn(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAD58 string=0x00000000001FAD5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuView::AnimateButtonsIn(Caver::MainMenuView *this, float a2)
{
  return _ZN5Caver12MainMenuView16AnimateButtonsInEf(this, a2);
}

