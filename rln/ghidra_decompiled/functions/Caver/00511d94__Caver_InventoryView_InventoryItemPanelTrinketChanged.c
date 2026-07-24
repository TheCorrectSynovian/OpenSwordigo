/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00511d94
 * Function: Caver::InventoryView::InventoryItemPanelTrinketChanged
 * Signature: undefined __thiscall InventoryItemPanelTrinketChanged(InventoryView * this, InventoryItemPanel * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::InventoryItemPanelTrinketChanged(Caver::InventoryItemPanel*) */

void __thiscall
Caver::InventoryView::InventoryItemPanelTrinketChanged
          (InventoryView *this,InventoryItemPanel *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar11 = 0;
  uVar10 = 0;
  do {
    if (*(InventoryItemPanel **)(*(long *)(this + 0x130) + lVar11) != param_1) {
      lVar6 = *(long *)(*(long *)(*(InventoryItemPanel **)(*(long *)(this + 0x130) + lVar11) + 0x130
                                 ) + 0x110);
      lVar1 = *(long *)(lVar6 + 0x100);
      plVar5 = *(long **)(lVar6 + 0x108);
      if (plVar5 != (long *)0x0) {
        plVar5[1] = plVar5[1] + 1;
      }
                    /* catch() { ... } // from try @ 00511e2c with catch @ 00511dfc */
      lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x110) + 0x100);
      plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x130) + 0x110) + 0x108);
      if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
                    /* try { // try from 00511e18 to 00611e2b has its CatchHandler @ 00511e50 */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar7 = plVar2[2];
                    /* try { // try from 00511e2c to 00611e53 has its CatchHandler @ 00511dfc */
        plVar2[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      if ((plVar5 != (long *)0x0) && (lVar7 = plVar5[1], plVar5[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar7 = plVar5[2];
                    /* catch() { ... } // from try @ 00511ec4 with catch @ 00511e80 */
        plVar5[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
                    /* try { // try from 00511ea8 to 00611eab has its CatchHandler @ 00511eb8 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if (lVar1 == lVar6) {
                    /* catch() { ... } // from try @ 00511ea8 with catch @ 00511eb8 */
                    /* try { // try from 00511ebc to 00611ec3 has its CatchHandler @ 00511ecc */
        local_68 = 0;
        local_60 = (long *)0x0;
                    /* try { // try from 00511ec4 to 00611ecf has its CatchHandler @ 00511e80 */
        InventoryItemPanel::SetTrinket
                  (*(InventoryItemPanel **)(*(long *)(this + 0x130) + lVar11),
                   (shared_ptr *)&local_68);
        plVar5 = local_60;
                    /* catch() { ... } // from try @ 00511ebc with catch @ 00511ecc */
                    /* try { // try from 00511ed0 to 00611f17 has its CatchHandler @ 00511ed0
                       catch(type#1 @ 00000000) { ... } // from try @ 00511ed0 with catch @ 00511ed0
                       catch(type#1 @ 00000000) { ... } // from try @ 00511f34 with catch @ 00511ed0
                       catch(type#1 @ 00000000) { ... } // from try @ 00512030 with catch @ 00511ed0
                        */
        if ((local_60 != (long *)0x0) &&
           (lVar11 = local_60[1], local_60[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*local_60 + 0x10))(local_60);
          lVar11 = plVar5[2];
          plVar5[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        plVar5 = *(long **)(this + 0x110);
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 00511f18 to 00611f33 has its CatchHandler @ 00512024 */
          (**(code **)(*plVar5 + 8))(plVar5,this,uVar10 & 0xffffffff);
        }
        break;
      }
    }
    bVar4 = uVar10 < 2;
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 0x10;
  } while (bVar4);
  puVar8 = *(undefined8 **)(this + 0x130);
                    /* try { // try from 00511f34 to 00612027 has its CatchHandler @ 00511ed0 */
  if ((InventoryItemPanel *)*puVar8 == param_1) {
    uVar9 = 0;
  }
  else if ((InventoryItemPanel *)puVar8[2] == param_1) {
    uVar9 = 1;
  }
  else {
    if ((InventoryItemPanel *)puVar8[4] != param_1) goto LAB_00511ff8;
    uVar9 = 2;
  }
  local_68 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x130) + 0x110) + 0x100);
  local_60 = *(long **)(*(long *)(*(long *)(param_1 + 0x130) + 0x110) + 0x108);
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  InventoryItemPanel::SetTrinket(param_1,(shared_ptr *)&local_68);
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar11 = local_60[1], local_60[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar11 = plVar5[2];
    plVar5[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x110);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5,this,uVar9);
  }
LAB_00511ff8:
  UpdateTrinketHighlights(this);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00511f18 with catch @ 00512024
                        */
                    /* try { // try from 00512028 to 0061202f has its CatchHandler @ 00512038 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


