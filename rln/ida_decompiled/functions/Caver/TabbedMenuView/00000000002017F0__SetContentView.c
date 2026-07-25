/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002017F0
 * Mangled: ._ZN5Caver14TabbedMenuView14SetContentViewERKN5boost10shared_ptrINS_12MenuViewPageEEE
 * Demangled: Caver::TabbedMenuView::SetContentView(boost::shared_ptr<Caver::MenuViewPage> const&)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x0000000000441A5C  Caver::TabbedMenuView::SetContentView(boost::shared_ptr<Caver::MenuViewPage> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002017F8 string=0x00000000002017FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::TabbedMenuView::SetContentView()
{
  return _ZN5Caver14TabbedMenuView14SetContentViewERKN5boost10shared_ptrINS_12MenuViewPageEEE();
}

