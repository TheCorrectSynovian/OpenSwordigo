/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F99E0
 * Mangled: ._ZN5Caver18InventoryItemPanelC2Ev
 * Demangled: Caver::InventoryItemPanel::InventoryItemPanel(void)
 *
 * Callers: 1
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x0000000000407430  Caver::InventoryItemPanel::InventoryItemPanel(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F99E8 string=0x00000000001F99EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::InventoryItemPanel::InventoryItemPanel(Caver::InventoryItemPanel *this)
{
  return _ZN5Caver18InventoryItemPanelC2Ev(this);
}

