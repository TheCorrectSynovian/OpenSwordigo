/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050eb90
 * Function: Caver::InventoryTrinketSlot::~InventoryTrinketSlot
 * Signature: undefined __thiscall ~InventoryTrinketSlot(InventoryTrinketSlot * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::~InventoryTrinketSlot() */

void __thiscall Caver::InventoryTrinketSlot::~InventoryTrinketSlot(InventoryTrinketSlot *this)

{
                    /* try { // try from 0050eba0 to 0060eba3 has its CatchHandler @ 0050eca4 */
  ~InventoryTrinketSlot(this);
                    /* try { // try from 0050eba4 to 0060ebf3 has its CatchHandler @ 0050ea48 */
  operator_delete(this);
  return;
}


