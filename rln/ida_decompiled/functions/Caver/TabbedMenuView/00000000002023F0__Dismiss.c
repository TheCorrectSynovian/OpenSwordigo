/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002023F0
 * Mangled: ._ZN5Caver14TabbedMenuView7DismissEv
 * Demangled: Caver::TabbedMenuView::Dismiss(void)
 *
 * Callers: 1
 *   0x00000000003437C4  Caver::GameMenuViewController::ViewWillDisappear(void)
 *
 * Callees: 1
 *   0x00000000004420B4  Caver::TabbedMenuView::Dismiss(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002023F8 string=0x00000000002023FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TabbedMenuView::Dismiss(Caver::TabbedMenuView *this)
{
  return _ZN5Caver14TabbedMenuView7DismissEv(this);
}

