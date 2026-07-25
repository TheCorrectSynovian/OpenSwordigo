/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4F80
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_20InventoryTrinketSlotES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>(boost::shared_ptr<Caver::InventoryTrinketSlot> const*,Caver::InventoryTrinketSlot *)
 *
 * Callers: 1
 *   0x000000000040D314  boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>(Caver::InventoryTrinketSlot *)
 *
 * Callees: 1
 *   0x000000000040D420  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>(boost::shared_ptr<Caver::InventoryTrinketSlot> const*,Caver::InventoryTrinketSlot *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4F88 string=0x00000000001F4F8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::InventoryTrinketSlot,Caver::InventoryTrinketSlot>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_20InventoryTrinketSlotES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

