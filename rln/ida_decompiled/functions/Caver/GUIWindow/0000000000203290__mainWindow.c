/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203290
 * Mangled: ._ZN5Caver9GUIWindow10mainWindowEv
 * Demangled: Caver::GUIWindow::mainWindow(void)
 *
 * Callers: 5
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x0000000000443080  Caver::TabView::BottomForTabAtIndex(int)
 *   0x00000000004430D4  Caver::TabView::CenterForTabAtIndex(int)
 *   0x00000000004431AC  Caver::TabView::UpdateSprite(void)
 *   0x00000000004435B8  Caver::TabView::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A21EC  Caver::GUIWindow::mainWindow(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203294 string=0x00000000004A21EC "("
 *   insn=0x0000000000203298 string=0x000000000020329C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::mainWindow(Caver::GUIWindow *this)
{
  return _ZN5Caver9GUIWindow10mainWindowEv(this);
}

