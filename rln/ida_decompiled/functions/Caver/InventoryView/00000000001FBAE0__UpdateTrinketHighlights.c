/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBAE0
 * Mangled: ._ZN5Caver13InventoryView23UpdateTrinketHighlightsEv
 * Demangled: Caver::InventoryView::UpdateTrinketHighlights(void)
 *
 * Callers: 2
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000411D94  Caver::InventoryView::InventoryItemPanelTrinketChanged(Caver::InventoryItemPanel *)
 *
 * Callees: 1
 *   0x0000000000411444  Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBAE8 string=0x00000000001FBAEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::InventoryView::UpdateTrinketHighlights(Caver::InventoryView *this)
{
  JUMPOUT(0x411640);
}

