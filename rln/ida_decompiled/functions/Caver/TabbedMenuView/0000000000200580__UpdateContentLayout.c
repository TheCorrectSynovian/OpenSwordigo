/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200580
 * Mangled: ._ZN5Caver14TabbedMenuView19UpdateContentLayoutEv
 * Demangled: Caver::TabbedMenuView::UpdateContentLayout(void)
 *
 * Callers: 3
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x0000000000441A5C  Caver::TabbedMenuView::SetContentView(boost::shared_ptr<Caver::MenuViewPage> const&)
 *
 * Callees: 1
 *   0x0000000000441904  Caver::TabbedMenuView::UpdateContentLayout(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200588 string=0x000000000020058C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TabbedMenuView::UpdateContentLayout(Caver::TabbedMenuView *this)
{
  return _ZN5Caver14TabbedMenuView19UpdateContentLayoutEv(this);
}

