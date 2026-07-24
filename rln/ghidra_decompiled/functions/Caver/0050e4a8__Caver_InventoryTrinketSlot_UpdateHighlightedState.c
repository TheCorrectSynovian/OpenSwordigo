/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050e4a8
 * Function: Caver::InventoryTrinketSlot::UpdateHighlightedState
 * Signature: undefined __thiscall UpdateHighlightedState(InventoryTrinketSlot * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::UpdateHighlightedState() */

void __thiscall Caver::InventoryTrinketSlot::UpdateHighlightedState(InventoryTrinketSlot *this)

{
  if (this[0x158] != (InventoryTrinketSlot)0x0) {
    MenuItemSlot::SetSelected(*(MenuItemSlot **)(this + 0x110),true);
    return;
  }
  MenuItemSlot::SetSelected(*(MenuItemSlot **)(this + 0x110),*(long *)(this + 0x148) != 0);
  return;
}


