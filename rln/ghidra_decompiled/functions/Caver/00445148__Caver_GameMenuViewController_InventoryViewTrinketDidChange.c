/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445148
 * Function: Caver::GameMenuViewController::InventoryViewTrinketDidChange
 * Signature: undefined __thiscall InventoryViewTrinketDidChange(GameMenuViewController * this, InventoryView * param_1, InventoryViewItemType param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::InventoryViewTrinketDidChange(Caver::InventoryView*,
   Caver::InventoryViewItemType) */

void __thiscall
Caver::GameMenuViewController::InventoryViewTrinketDidChange
          (GameMenuViewController *this,long param_1,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  GameEvent *pGVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  GameEvent *pGVar9;
  long *plVar10;
  
                    /* catch() { ... } // from try @ 00445130 with catch @ 00445148 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004451bc with catch @ 0044514c
                       catch(type#1 @ 00000000) { ... } // from try @ 004451f8 with catch @ 0044514c
                        */
  lVar8 = *(long *)(*(long *)(this + 0x88) + 0x80);
  plVar2 = *(long **)(*(long *)(this + 0x88) + 0x88);
  if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
                    /* try { // try from 00445188 to 005451bb has its CatchHandler @ 004451e4 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar5 = plVar2[2];
    plVar2[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* try { // try from 004451bc to 005451eb has its CatchHandler @ 0044514c */
  if (param_3 == 2) {
                    /* try { // try from 004452b0 to 0054534f has its CatchHandler @ 00445204 */
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x20) + 0x130) + 0x110);
    lVar5 = *(long *)(lVar6 + 0x100);
    plVar2 = *(long **)(lVar6 + 0x108);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    lVar6 = *(long *)(lVar8 + 0x98);
    plVar10 = *(long **)(lVar8 + 0xa0);
    if ((plVar10 != (long *)0x0) && (plVar10[1] == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar7 = plVar2[2];
      plVar2[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 004452a4 with catch @ 00445474 */
                    /* catch() { ... } // from try @ 00445350 with catch @ 00445478 */
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (lVar5 != lVar6) {
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x20) + 0x130) + 0x110);
      uVar1 = *(undefined8 *)(lVar5 + 0x100);
      plVar2 = *(long **)(lVar5 + 0x108);
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 2;
      }
      plVar10 = *(long **)(lVar8 + 0xa0);
      *(undefined8 *)(lVar8 + 0x98) = uVar1;
      *(long **)(lVar8 + 0xa0) = plVar2;
      if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar8 = plVar10[2];
        plVar10[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      if ((plVar2 != (long *)0x0) && (lVar8 = plVar2[1], plVar2[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar8 = plVar2[2];
        plVar2[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      pGVar3 = operator_new(0x68);
      uVar4 = 0xe;
LAB_00445658:
      *(undefined4 *)pGVar3 = uVar4;
      *(undefined8 *)(pGVar3 + 0x18) = 0;
      *(undefined8 *)(pGVar3 + 0x30) = 0;
      pGVar9 = pGVar3 + 0x10;
      *(undefined8 *)pGVar9 = 0;
      *(GameEvent **)(pGVar3 + 0x20) = pGVar9;
      *(GameEvent **)(pGVar3 + 0x28) = pGVar9;
      *(undefined8 *)(pGVar3 + 0x48) = 0;
      *(undefined8 *)(pGVar3 + 0x60) = 0;
      pGVar9 = pGVar3 + 0x40;
      *(undefined8 *)pGVar9 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0044562c with catch @ 00445680
                        */
      *(GameEvent **)(pGVar3 + 0x50) = pGVar9;
      *(GameEvent **)(pGVar3 + 0x58) = pGVar9;
      GameEvent::SendEvent(pGVar3);
      return;
    }
  }
  else if (param_3 == 1) {
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x10) + 0x130) + 0x110);
    lVar5 = *(long *)(lVar6 + 0x100);
    plVar2 = *(long **)(lVar6 + 0x108);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    lVar6 = *(long *)(lVar8 + 0x88);
    plVar10 = *(long **)(lVar8 + 0x90);
    if ((plVar10 != (long *)0x0) && (plVar10[1] == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* try { // try from 0044528c to 00545293 has its CatchHandler @ 00445584 */
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* try { // try from 004452a4 to 005452af has its CatchHandler @ 00445474 */
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar7 = plVar2[2];
                    /* try { // try from 00445350 to 00545387 has its CatchHandler @ 00445478 */
      plVar2[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (lVar5 != lVar6) {
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x130) + 0x10) + 0x130) + 0x110);
      uVar1 = *(undefined8 *)(lVar5 + 0x100);
      plVar2 = *(long **)(lVar5 + 0x108);
      if (plVar2 != (long *)0x0) {
                    /* try { // try from 00445388 to 00545557 has its CatchHandler @ 00445204 */
        plVar2[1] = plVar2[1] + 2;
      }
      plVar10 = *(long **)(lVar8 + 0x90);
      *(undefined8 *)(lVar8 + 0x88) = uVar1;
      *(long **)(lVar8 + 0x90) = plVar2;
      if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar8 = plVar10[2];
        plVar10[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      if ((plVar2 != (long *)0x0) && (lVar8 = plVar2[1], plVar2[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar8 = plVar2[2];
        plVar2[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      pGVar3 = operator_new(0x68);
      uVar4 = 0xd;
      goto LAB_00445658;
    }
  }
  else if (param_3 == 0) {
    lVar6 = *(long *)(*(long *)(**(long **)(param_1 + 0x130) + 0x130) + 0x110);
    lVar5 = *(long *)(lVar6 + 0x100);
    plVar2 = *(long **)(lVar6 + 0x108);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00445188 with catch @ 004451e4
                        */
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 004451ec to 005451ef has its CatchHandler @ 004451f0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004451ec with catch @ 004451f0
                        */
      plVar2[1] = plVar2[1] + 1;
    }
                    /* try { // try from 004451f4 to 005451f7 has its CatchHandler @ 00445200 */
    lVar6 = *(long *)(lVar8 + 0x78);
    plVar10 = *(long **)(lVar8 + 0x80);
                    /* try { // try from 004451f8 to 00545203 has its CatchHandler @ 0044514c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004451f4 with catch @ 00445200
                        */
                    /* try { // try from 00445204 to 0054528b has its CatchHandler @ 00445204
                       catch() { ... } // from try @ 00445204 with catch @ 00445204
                       catch() { ... } // from try @ 004452b0 with catch @ 00445204
                       catch() { ... } // from try @ 00445388 with catch @ 00445204
                       catch() { ... } // from try @ 0044557c with catch @ 00445204 */
    if ((plVar10 != (long *)0x0) && (plVar10[1] == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
                    /* try { // try from 00445558 to 0054555b has its CatchHandler @ 00445574 */
    if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* catch() { ... } // from try @ 00445558 with catch @ 00445574 */
      lVar7 = plVar2[2];
                    /* try { // try from 00445578 to 0054557b has its CatchHandler @ 00445580 */
                    /* try { // try from 0044557c to 005455ef has its CatchHandler @ 00445204 */
      plVar2[2] = lVar7 + -1;
                    /* catch() { ... } // from try @ 00445578 with catch @ 00445580 */
      if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 0044528c with catch @ 00445584 */
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (lVar5 != lVar6) {
      lVar5 = *(long *)(*(long *)(**(long **)(param_1 + 0x130) + 0x130) + 0x110);
      uVar1 = *(undefined8 *)(lVar5 + 0x100);
      plVar2 = *(long **)(lVar5 + 0x108);
      if (plVar2 != (long *)0x0) {
        plVar2[1] = plVar2[1] + 2;
      }
      plVar10 = *(long **)(lVar8 + 0x80);
      *(undefined8 *)(lVar8 + 0x78) = uVar1;
      *(long **)(lVar8 + 0x80) = plVar2;
      if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar8 = plVar10[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00445638 with catch @ 004455f0
                       catch(type#1 @ 00000000) { ... } // from try @ 0044570c with catch @ 004455f0
                        */
        plVar10[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      if ((plVar2 != (long *)0x0) && (lVar8 = plVar2[1], plVar2[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 0044562c to 00545637 has its CatchHandler @ 00445680 */
        lVar8 = plVar2[2];
        plVar2[2] = lVar8 + -1;
                    /* try { // try from 00445638 to 005456ff has its CatchHandler @ 004455f0 */
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      pGVar3 = operator_new(0x68);
      uVar4 = 0xc;
      goto LAB_00445658;
    }
  }
  return;
}


