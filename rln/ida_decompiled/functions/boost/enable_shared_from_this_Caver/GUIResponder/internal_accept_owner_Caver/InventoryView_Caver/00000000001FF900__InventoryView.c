/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF900
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13InventoryViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryView,Caver::InventoryView>(boost::shared_ptr<Caver::InventoryView> const*,Caver::InventoryView *)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x00000000003475F0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryView,Caver::InventoryView>(boost::shared_ptr<Caver::InventoryView> const*,Caver::InventoryView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF908 string=0x00000000001FF90C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryView,Caver::InventoryView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13InventoryViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

