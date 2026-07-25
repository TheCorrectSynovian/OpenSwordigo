/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB630
 * Mangled: ._ZN5Caver20InventoryTrinketSlotC2Ev
 * Demangled: Caver::InventoryTrinketSlot::InventoryTrinketSlot(void)
 *
 * Callers: 2
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x000000000040D5F4  Caver::InventoryTrinketSlot::InventoryTrinketSlot(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB638 string=0x00000000001FB63C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::InventoryTrinketSlot::InventoryTrinketSlot(Caver::InventoryTrinketSlot *this)
{
  return _ZN5Caver20InventoryTrinketSlotC2Ev(this);
}

