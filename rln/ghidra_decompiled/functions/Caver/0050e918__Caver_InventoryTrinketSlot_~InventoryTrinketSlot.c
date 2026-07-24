/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050e918
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
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 0050e928 to 0060e93b has its CatchHandler @ 0050e960 */
  plVar3 = *(long **)(this + 0x138);
                    /* try { // try from 0050e93c to 0060e963 has its CatchHandler @ 0050e90c */
  puVar1 = PTR_vtable_007e6600 + 0x160;
  *(undefined **)this = PTR_vtable_007e6600 + 0x10;
  *(undefined **)(this + 0xf0) = puVar1;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0050e928 with catch @ 0050e960 */
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
                    /* catch() { ... } // from try @ 0050ea3c with catch @ 0050e9d4 */
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
                    /* try { // try from 0050ea20 to 0060ea23 has its CatchHandler @ 0050ea30 */
                    /* catch() { ... } // from try @ 0050ea20 with catch @ 0050ea30 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 0050ea34 to 0060ea3b has its CatchHandler @ 0050ea44 */
                    /* try { // try from 0050ea3c to 0060ea47 has its CatchHandler @ 0050e9d4 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* catch() { ... } // from try @ 0050ea34 with catch @ 0050ea44 */
    lVar2 = plVar3[2];
                    /* try { // try from 0050ea48 to 0060eaaf has its CatchHandler @ 0050ea48
                       catch() { ... } // from try @ 0050ea48 with catch @ 0050ea48
                       catch() { ... } // from try @ 0050eacc with catch @ 0050ea48
                       catch() { ... } // from try @ 0050eba4 with catch @ 0050ea48
                       catch() { ... } // from try @ 0050ebf8 with catch @ 0050ea48
                       catch() { ... } // from try @ 0050ec4c with catch @ 0050ea48
                       catch() { ... } // from try @ 0050ecc4 with catch @ 0050ea48 */
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


