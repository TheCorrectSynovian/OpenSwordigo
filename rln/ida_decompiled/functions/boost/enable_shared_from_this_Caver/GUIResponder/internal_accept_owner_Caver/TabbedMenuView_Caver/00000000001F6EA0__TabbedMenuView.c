/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6EA0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14TabbedMenuViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabbedMenuView,Caver::TabbedMenuView>(boost::shared_ptr<Caver::TabbedMenuView> const*,Caver::TabbedMenuView *)
 *
 * Callers: 1
 *   0x0000000000346C64  boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x0000000000346D70  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabbedMenuView,Caver::TabbedMenuView>(boost::shared_ptr<Caver::TabbedMenuView> const*,Caver::TabbedMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6EA8 string=0x00000000001F6EAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabbedMenuView,Caver::TabbedMenuView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14TabbedMenuViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

