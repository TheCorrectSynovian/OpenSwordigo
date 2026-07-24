/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050cd64
 * Function: Caver::InventoryItemPanel::~InventoryItemPanel
 * Signature: undefined __thiscall ~InventoryItemPanel(InventoryItemPanel * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::~InventoryItemPanel() */

void __thiscall Caver::InventoryItemPanel::~InventoryItemPanel(InventoryItemPanel *this)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0050cbf4 with catch @ 0050cd64
                        */
                    /* try { // try from 0050cd68 to 0060cd6f has its CatchHandler @ 0050cd78 */
                    /* try { // try from 0050cd70 to 0060cd7b has its CatchHandler @ 0050cbac */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0050cd68 with catch @ 0050cd78
                        */
  plVar3 = *(long **)(this + 0x168);
  puVar1 = PTR_vtable_007e4af0 + 0x158;
  *(undefined **)this = PTR_vtable_007e4af0 + 0x10;
  *(undefined **)(this + 0xf0) = puVar1;
                    /* catch() { ... } // from try @ 0050cdb8 with catch @ 0050cd94 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 0050cdb4 to 0060cdb7 has its CatchHandler @ 0050cdc8 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 0050cdb8 to 0060cddb has its CatchHandler @ 0050cd94 */
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 0050cdb4 with catch @ 0050cdc8 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x158);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x148);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x138);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x128);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x118);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x108);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


