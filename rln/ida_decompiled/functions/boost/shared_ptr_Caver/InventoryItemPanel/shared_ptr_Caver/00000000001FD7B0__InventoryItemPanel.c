/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD7B0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver18InventoryItemPanelEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::InventoryItemPanel>::shared_ptr<Caver::InventoryItemPanel>(Caver::InventoryItemPanel *)
 *
 * Callers: 1
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x00000000004127BC  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(boost::shared_ptr<Caver::InventoryItemPanel> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD7B8 string=0x00000000001FD7BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::InventoryItemPanel>::shared_ptr<Caver::InventoryItemPanel>()
{
  JUMPOUT(0x412A04);
}

