/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203000
 * Mangled: ._ZN5Caver18InventoryItemPanel10SetTrinketERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::InventoryItemPanel::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000411D94  Caver::InventoryView::InventoryItemPanelTrinketChanged(Caver::InventoryItemPanel *)
 *
 * Callees: 1
 *   0x000000000040AD68  Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203008 string=0x000000000020300C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::InventoryItemPanel::SetTrinket()
{
  JUMPOUT(0x40B15C);
}

