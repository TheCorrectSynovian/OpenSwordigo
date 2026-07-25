/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5920
 * Mangled: ._ZN5Caver12MenuItemSlot11SetSelectedEb
 * Demangled: Caver::MenuItemSlot::SetSelected(bool)
 *
 * Callers: 9
 *   0x000000000040B21C  Caver::InventoryItemPanel::HitTest(Caver::Vector2 const&)
 *   0x000000000040B614  Caver::InventoryItemPanel::DraggableItemDidDropIntoView(Caver::GUIDraggableItem *)
 *   0x000000000040E298  Caver::InventoryTrinketSlot::TouchBegan(Caver::FWTouch const&)
 *   0x000000000040E4A8  Caver::InventoryTrinketSlot::UpdateHighlightedState(void)
 *   0x000000000040E7E0  boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>(Caver::DraggableMenuItem *)
 *   0x000000000040E8F0  Caver::InventoryTrinketSlot::TouchCancelled(Caver::FWTouch const&)
 *   0x000000000043D058  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x000000000043E228  Caver::SkillPickerView::MenuItemSlotDeselected(Caver::MenuItemSlot *)
 *   0x000000000043E264  `non-virtual thunk to'Caver::SkillPickerView::MenuItemSlotDeselected(Caver::MenuItemSlot *)
 *
 * Callees: 1
 *   0x000000000042A548  Caver::MenuItemSlot::SetSelected(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5924 string=0x000000000042A548 "\t"
 *   insn=0x00000000001F5928 string=0x00000000001F592C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MenuItemSlot::SetSelected(Caver::MenuItemSlot *this, bool a2)
{
  return _ZN5Caver12MenuItemSlot11SetSelectedEb(this, a2);
}

