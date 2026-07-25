/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAC70
 * Mangled: ._ZN5Caver12MainMenuViewC2Ev
 * Demangled: Caver::MainMenuView::MainMenuView(void)
 *
 * Callers: 1
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAC78 string=0x00000000001FAC7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuView::MainMenuView(Caver::MainMenuView *this)
{
  return _ZN5Caver12MainMenuViewC2Ev(this);
}

