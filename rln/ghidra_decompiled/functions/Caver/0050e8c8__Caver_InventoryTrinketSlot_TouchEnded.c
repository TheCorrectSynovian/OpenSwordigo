/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050e8c8
 * Function: Caver::InventoryTrinketSlot::TouchEnded
 * Signature: undefined __thiscall TouchEnded(InventoryTrinketSlot * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::InventoryTrinketSlot::TouchEnded(InventoryTrinketSlot *this,FWTouch *param_1)

{
  if (*(long *)param_1 == *(long *)(this + 0x148)) {
    *(undefined8 *)(this + 0x148) = 0;
    MenuItemSlot::SetSelected(*(MenuItemSlot **)(this + 0x110),(bool)this[0x158]);
    return;
  }
  return;
}


