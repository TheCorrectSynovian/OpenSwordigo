/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004420AC
 * Mangled: _ZThn240_N5Caver14TabbedMenuView25TabViewSelectionDidChangeEPNS_7TabViewE
 * Demangled: `non-virtual thunk to'Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *
 * Callers: 1
 *   0x0000000000441EDC  Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *
 * Callees: 1
 *   0x00000000001FE4A0  Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::TabbedMenuView::TabViewSelectionDidChange(
        Caver::TabbedMenuView *this,
        Caver::TabView *a2)
{
  return Caver::TabbedMenuView::TabViewSelectionDidChange((Caver::TabbedMenuView *)((char *)this - 240), a2);
}

