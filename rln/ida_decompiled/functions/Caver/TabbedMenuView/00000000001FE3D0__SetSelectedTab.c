/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE3D0
 * Mangled: ._ZN5Caver14TabbedMenuView14SetSelectedTabERKSs
 * Demangled: Caver::TabbedMenuView::SetSelectedTab(std::string const&)
 *
 * Callers: 1
 *   0x0000000000342F7C  Caver::GameMenuViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000441D94  Caver::TabbedMenuView::SetSelectedTab(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE3D8 string=0x00000000001FE3DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::TabbedMenuView::SetSelectedTab()
{
  return _ZN5Caver14TabbedMenuView14SetSelectedTabERKSs();
}

