/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4D90
 * Mangled: ._ZN5Caver14TabbedMenuViewC2Ev
 * Demangled: Caver::TabbedMenuView::TabbedMenuView(void)
 *
 * Callers: 1
 *   0x0000000000342F7C  Caver::GameMenuViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4D98 string=0x00000000001F4D9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TabbedMenuView::TabbedMenuView(Caver::TabbedMenuView *this)
{
  return _ZN5Caver14TabbedMenuViewC2Ev(this);
}

