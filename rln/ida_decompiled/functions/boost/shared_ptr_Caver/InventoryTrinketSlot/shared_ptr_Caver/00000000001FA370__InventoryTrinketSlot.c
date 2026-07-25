/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA370
 * Mangled: ._ZN5boost10shared_ptrIN5Caver20InventoryTrinketSlotEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>(Caver::InventoryTrinketSlot *)
 *
 * Callers: 2
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x000000000040D314  boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>(Caver::InventoryTrinketSlot *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA378 string=0x00000000001FA37C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>()
{
  return _ZN5boost10shared_ptrIN5Caver20InventoryTrinketSlotEEC2IS2_EEPT_();
}

