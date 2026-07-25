/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA700
 * Mangled: ._ZN5Caver12MainMenuView20SetOnlineMenuVisibleEb
 * Demangled: Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *
 * Callers: 1
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x0000000000394244  Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA708 string=0x00000000001FA70C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuView::SetOnlineMenuVisible(Caver::MainMenuView *this, bool a2)
{
  return _ZN5Caver12MainMenuView20SetOnlineMenuVisibleEb(this, a2);
}

