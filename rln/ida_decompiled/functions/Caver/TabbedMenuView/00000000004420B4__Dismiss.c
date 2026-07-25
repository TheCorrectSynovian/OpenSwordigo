/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004420B4
 * Mangled: _ZN5Caver14TabbedMenuView7DismissEv
 * Demangled: Caver::TabbedMenuView::Dismiss(void)
 *
 * Callers: 1
 *   0x00000000002023F0  Caver::TabbedMenuView::Dismiss(void)
 *
 * Callees: 1
 *   0x0000000000201BD0  Caver::TabbedMenuView::AddAnimations(bool)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TabbedMenuView::Dismiss(Caver::TabbedMenuView *this)
{
  Caver::TabbedMenuView::AddAnimations(this);
}

