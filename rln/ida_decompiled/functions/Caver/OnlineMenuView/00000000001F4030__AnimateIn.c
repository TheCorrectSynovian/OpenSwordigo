/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4030
 * Mangled: ._ZN5Caver14OnlineMenuView9AnimateInEv
 * Demangled: Caver::OnlineMenuView::AnimateIn(void)
 *
 * Callers: 2
 *   0x0000000000394244  Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *   0x0000000000398058  Caver::OnlineMenuViewController::ViewDidAppear(void)
 *
 * Callees: 1
 *   0x00000000003973D4  Caver::OnlineMenuView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4038 string=0x00000000001F403C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineMenuView::AnimateIn(Caver::OnlineMenuView *this)
{
  return _ZN5Caver14OnlineMenuView9AnimateInEv(this);
}

