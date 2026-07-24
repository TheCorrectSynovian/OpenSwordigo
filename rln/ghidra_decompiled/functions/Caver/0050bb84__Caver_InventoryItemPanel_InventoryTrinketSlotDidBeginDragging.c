/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050bb84
 * Function: Caver::InventoryItemPanel::InventoryTrinketSlotDidBeginDragging
 * Signature: undefined __cdecl InventoryTrinketSlotDidBeginDragging(InventoryTrinketSlot * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::InventoryTrinketSlotDidBeginDragging(Caver::InventoryTrinketSlot*) */

void Caver::InventoryItemPanel::InventoryTrinketSlotDidBeginDragging(InventoryTrinketSlot *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 0050bb94 to 0060bbbf has its CatchHandler @ 0050bbe0 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x110) + 0x100);
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x130) + 0x110) + 0x108);
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
                    /* try { // try from 0050bbc0 to 0060bbc7 has its CatchHandler @ 0050bbd8 */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar4 = plVar1[2];
                    /* catch() { ... } // from try @ 0050bbc0 with catch @ 0050bbd8 */
    plVar1[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* try { // try from 0050bce0 to 0060bf67 has its CatchHandler @ 0050bce0
                       catch() { ... } // from try @ 0050bce0 with catch @ 0050bce0
                       catch() { ... } // from try @ 0050bf6c with catch @ 0050bce0
                       catch() { ... } // from try @ 0050c084 with catch @ 0050bce0
                       catch() { ... } // from try @ 0050c1b8 with catch @ 0050bce0 */
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
                    /* catch() { ... } // from try @ 0050bb94 with catch @ 0050bbe0 */
  if (lVar5 != 0) {
                    /* try { // try from 0050bbe4 to 0060bbeb has its CatchHandler @ 0050bbfc */
    local_48 = 0;
    local_40 = (long *)0x0;
                    /* try { // try from 0050bbec to 0060bbff has its CatchHandler @ 0050bb50 */
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x110) + 0x100);
    plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x130) + 0x110) + 0x108);
                    /* catch() { ... } // from try @ 0050bbe4 with catch @ 0050bbfc */
    if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar4 = plVar1[2];
      plVar1[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    if (lVar5 != 0) {
      InventoryTrinketSlot::SetTrinket
                (*(InventoryTrinketSlot **)(param_1 + 0x130),(shared_ptr *)&local_48);
      UpdateLabels((InventoryItemPanel *)param_1);
    }
    plVar1 = local_40;
    if ((local_40 != (long *)0x0) &&
       (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar5 = plVar1[2];
      plVar1[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,param_1);
    }
    UpdateLabels((InventoryItemPanel *)param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


