/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFEF0
 * Mangled: ._ZN5Caver7TabViewC2Ev
 * Demangled: Caver::TabView::TabView(void)
 *
 * Callers: 1
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *
 * Callees: 1
 *   0x0000000000442974  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabView,Caver::TabView>(boost::shared_ptr<Caver::TabView> const*,Caver::TabView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFEF8 string=0x00000000001FFEFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::TabView::TabView(Caver::TabView *this)
{
  JUMPOUT(0x442A94);
}

