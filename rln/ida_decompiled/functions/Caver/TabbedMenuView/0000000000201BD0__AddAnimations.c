/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201BD0
 * Mangled: ._ZN5Caver14TabbedMenuView13AddAnimationsEb
 * Demangled: Caver::TabbedMenuView::AddAnimations(bool)
 *
 * Callers: 2
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x00000000004420B4  Caver::TabbedMenuView::Dismiss(void)
 *
 * Callees: 1
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201BD8 string=0x0000000000201BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::TabbedMenuView::AddAnimations(Caver::TabbedMenuView *this)
{
  JUMPOUT(0x4409DC);
}

