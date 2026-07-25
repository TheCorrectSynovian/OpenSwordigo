/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE4A0
 * Mangled: ._ZN5Caver14TabbedMenuView25TabViewSelectionDidChangeEPNS_7TabViewE
 * Demangled: Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *
 * Callers: 1
 *   0x00000000004420AC  `non-virtual thunk to'Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *
 * Callees: 1
 *   0x0000000000441EDC  Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE4A8 string=0x00000000001FE4AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabbedMenuView *this, Caver::TabView *a2)
{
  return _ZN5Caver14TabbedMenuView25TabViewSelectionDidChangeEPNS_7TabViewE(this, a2);
}

