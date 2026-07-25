/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201830
 * Mangled: ._ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver20InventoryTrinketSlotEEEEEvPT_
 * Demangled: boost::checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>>(boost::shared_ptr<Caver::InventoryTrinketSlot> *)
 *
 * Callers: 2
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x00000000004123BC  Caver::InventoryView::~InventoryView()
 *
 * Callees: 1
 *   0x00000000004127BC  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(boost::shared_ptr<Caver::InventoryItemPanel> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201838 string=0x000000000020183C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>>()
{
  JUMPOUT(0x4128E0);
}

