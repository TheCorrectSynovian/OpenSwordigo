/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00511640
 * Function: Caver::InventoryView::UpdateTrinketHighlights
 * Signature: undefined __thiscall UpdateTrinketHighlights(InventoryView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::UpdateTrinketHighlights() */

void __thiscall Caver::InventoryView::UpdateTrinketHighlights(InventoryView *this)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  InventoryTrinketSlot *pIVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (0 < *(int *)(this + 0x158)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      pIVar4 = *(InventoryTrinketSlot **)(*(long *)(this + 0x160) + lVar7);
      pIVar4[0x158] = (InventoryTrinketSlot)0x0;
      InventoryTrinketSlot::UpdateHighlightedState(pIVar4);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < *(int *)(this + 0x158));
    if (0 < *(int *)(this + 0x158)) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        pIVar4 = *(InventoryTrinketSlot **)(*(long *)(this + 0x160) + lVar7);
        lVar6 = *(long *)(*(long *)(pIVar4 + 0x110) + 0x100);
        plVar2 = *(long **)(*(long *)(pIVar4 + 0x110) + 0x108);
        if (plVar2 != (long *)0x0) {
          plVar2[1] = plVar2[1] + 1;
        }
        if (lVar6 != 0) {
          lVar5 = *(long *)(*(long *)(**(long **)(this + 0x130) + 0x130) + 0x110);
          lVar1 = *(long *)(lVar5 + 0x100);
          plVar3 = *(long **)(lVar5 + 0x108);
          if (plVar3 == (long *)0x0) {
            if (lVar6 == lVar1) goto LAB_00511738;
          }
          else {
            if (plVar3[1] == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              lVar5 = plVar3[2];
              plVar3[2] = lVar5 + -1;
              if (lVar5 + -1 == 0) {
                (**(code **)(*plVar3 + 0x18))(plVar3);
              }
            }
            if (lVar6 == lVar1) {
              pIVar4 = *(InventoryTrinketSlot **)(*(long *)(this + 0x160) + lVar7);
LAB_00511738:
              pIVar4[0x158] = (InventoryTrinketSlot)0x1;
                    /* catch() { ... } // from try @ 0051176c with catch @ 0051173c */
              InventoryTrinketSlot::UpdateHighlightedState(pIVar4);
            }
          }
          lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(this + 0x130) + 0x10) + 0x130) + 0x110);
          lVar1 = *(long *)(lVar5 + 0x100);
          plVar3 = *(long **)(lVar5 + 0x108);
                    /* try { // try from 00511758 to 0061176b has its CatchHandler @ 00511790 */
          if ((plVar3 != (long *)0x0) && (plVar3[1] == 0)) {
                    /* try { // try from 0051176c to 00611793 has its CatchHandler @ 0051173c */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            lVar5 = plVar3[2];
            plVar3[2] = lVar5 + -1;
            if (lVar5 + -1 == 0) {
              (**(code **)(*plVar3 + 0x18))(plVar3);
            }
          }
                    /* catch() { ... } // from try @ 00511758 with catch @ 00511790 */
          if (lVar6 == lVar1) {
            pIVar4 = *(InventoryTrinketSlot **)(*(long *)(this + 0x160) + lVar7);
            pIVar4[0x158] = (InventoryTrinketSlot)0x1;
            InventoryTrinketSlot::UpdateHighlightedState(pIVar4);
          }
          lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(this + 0x130) + 0x20) + 0x130) + 0x110);
          lVar1 = *(long *)(lVar5 + 0x100);
          plVar3 = *(long **)(lVar5 + 0x108);
                    /* catch() { ... } // from try @ 00511804 with catch @ 005117c0 */
          if ((plVar3 != (long *)0x0) && (plVar3[1] == 0)) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            lVar5 = plVar3[2];
            plVar3[2] = lVar5 + -1;
            if (lVar5 + -1 == 0) {
                    /* try { // try from 005117e8 to 006117eb has its CatchHandler @ 005117f8 */
              (**(code **)(*plVar3 + 0x18))(plVar3);
            }
          }
                    /* catch() { ... } // from try @ 005117e8 with catch @ 005117f8 */
                    /* try { // try from 005117fc to 00611803 has its CatchHandler @ 0051180c */
          if (lVar6 == lVar1) {
                    /* try { // try from 00511804 to 0061180f has its CatchHandler @ 005117c0 */
            pIVar4 = *(InventoryTrinketSlot **)(*(long *)(this + 0x160) + lVar7);
            pIVar4[0x158] = (InventoryTrinketSlot)0x1;
                    /* catch() { ... } // from try @ 005117fc with catch @ 0051180c */
            InventoryTrinketSlot::UpdateHighlightedState(pIVar4);
          }
        }
                    /* try { // try from 00511810 to 00611857 has its CatchHandler @ 00511810
                       catch(type#1 @ 00000000) { ... } // from try @ 00511810 with catch @ 00511810
                       catch(type#1 @ 00000000) { ... } // from try @ 00511874 with catch @ 00511810
                       catch(type#1 @ 00000000) { ... } // from try @ 00511914 with catch @ 00511810
                        */
        if ((plVar2 != (long *)0x0) && (lVar6 = plVar2[1], plVar2[1] = lVar6 + -1, lVar6 + -1 == 0))
        {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          lVar6 = plVar2[2];
          plVar2[2] = lVar6 + -1;
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
        }
                    /* try { // try from 00511858 to 00611873 has its CatchHandler @ 00511908 */
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar8 < *(int *)(this + 0x158));
    }
  }
                    /* try { // try from 00511874 to 0061190b has its CatchHandler @ 00511810 */
  return;
}


