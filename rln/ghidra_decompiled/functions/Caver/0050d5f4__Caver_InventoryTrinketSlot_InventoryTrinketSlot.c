/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050d5f4
 * Function: Caver::InventoryTrinketSlot::InventoryTrinketSlot
 * Signature: undefined __thiscall InventoryTrinketSlot(InventoryTrinketSlot * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::InventoryTrinketSlot() */

void __thiscall Caver::InventoryTrinketSlot::InventoryTrinketSlot(InventoryTrinketSlot *this)

{
  undefined *puVar1;
  
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e6600 + 0x160;
  *(undefined **)this = PTR_vtable_007e6600 + 0x10;
  *(undefined **)(this + 0xf0) = puVar1;
  memset(this + 0xf8,0,0x48);
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x140) = 0x3f800000;
  this[0x158] = (InventoryTrinketSlot)0x0;
  return;
}


