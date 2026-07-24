/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050e8f0
 * Function: Caver::InventoryTrinketSlot::TouchCancelled
 * Signature: undefined __thiscall TouchCancelled(InventoryTrinketSlot * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::TouchCancelled(Caver::FWTouch const&) */

void __thiscall
Caver::InventoryTrinketSlot::TouchCancelled(InventoryTrinketSlot *this,FWTouch *param_1)

{
  if (*(long *)param_1 == *(long *)(this + 0x148)) {
    *(undefined8 *)(this + 0x148) = 0;
                    /* catch() { ... } // from try @ 0050e93c with catch @ 0050e90c */
    MenuItemSlot::SetSelected(*(MenuItemSlot **)(this + 0x110),(bool)this[0x158]);
    return;
  }
  return;
}


