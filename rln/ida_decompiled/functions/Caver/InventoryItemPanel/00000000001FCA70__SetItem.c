/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA70
 * Mangled: ._ZN5Caver18InventoryItemPanel7SetItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x000000000040AD68  Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA78 string=0x00000000001FCA7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::InventoryItemPanel::SetItem()
{
  return _ZN5Caver18InventoryItemPanel7SetItemERKN5boost10shared_ptrINS_4ItemEEE();
}

