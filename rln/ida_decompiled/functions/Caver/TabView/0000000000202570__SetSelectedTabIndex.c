/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202570
 * Mangled: ._ZN5Caver7TabView19SetSelectedTabIndexEi
 * Demangled: Caver::TabView::SetSelectedTabIndex(int)
 *
 * Callers: 3
 *   0x0000000000441D94  Caver::TabbedMenuView::SetSelectedTab(std::string const&)
 *   0x0000000000441EDC  Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *   0x00000000004420BC  Caver::TabbedMenuView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x00000000004435B0  Caver::TabView::SetSelectedTabIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202578 string=0x000000000020257C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TabView::SetSelectedTabIndex(Caver::TabView *this, int a2)
{
  return _ZN5Caver7TabView19SetSelectedTabIndexEi(this, a2);
}

