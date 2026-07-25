/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B60
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_18InventoryItemPanelES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryItemPanel,Caver::InventoryItemPanel>(boost::shared_ptr<Caver::InventoryItemPanel> const*,Caver::InventoryItemPanel *)
 *
 * Callers: 1
 *   0x00000000004127BC  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(boost::shared_ptr<Caver::InventoryItemPanel> *)
 *
 * Callees: 1
 *   0x0000000000412B10  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryItemPanel,Caver::InventoryItemPanel>(boost::shared_ptr<Caver::InventoryItemPanel> const*,Caver::InventoryItemPanel *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8B68 string=0x00000000001F8B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryItemPanel,Caver::InventoryItemPanel>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_18InventoryItemPanelES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

