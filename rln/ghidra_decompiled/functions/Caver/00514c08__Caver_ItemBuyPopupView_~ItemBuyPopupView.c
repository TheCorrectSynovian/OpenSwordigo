/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00514c08
 * Function: Caver::ItemBuyPopupView::~ItemBuyPopupView
 * Signature: undefined __thiscall ~ItemBuyPopupView(ItemBuyPopupView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemBuyPopupView::~ItemBuyPopupView() */

void __thiscall Caver::ItemBuyPopupView::~ItemBuyPopupView(ItemBuyPopupView *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 00514bf8 with catch @ 00514c08 */
                    /* try { // try from 00514c0c to 00614c13 has its CatchHandler @ 00514c1c */
                    /* try { // try from 00514c14 to 00614c1f has its CatchHandler @ 00514bd0 */
                    /* catch() { ... } // from try @ 00514c0c with catch @ 00514c1c */
                    /* try { // try from 00514c20 to 00614c67 has its CatchHandler @ 00514c20
                       catch(type#1 @ 00000000) { ... } // from try @ 00514c20 with catch @ 00514c20
                       catch(type#1 @ 00000000) { ... } // from try @ 00514c84 with catch @ 00514c20
                       catch(type#1 @ 00000000) { ... } // from try @ 00514d20 with catch @ 00514c20
                        */
  plVar2 = *(long **)(this + 0x150);
  *(undefined **)this = PTR_vtable_007e6700 + 0x10;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x148);
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00514c68 to 00614c83 has its CatchHandler @ 00514d14 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
                    /* try { // try from 00514c84 to 00614d17 has its CatchHandler @ 00514c20 */
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x138);
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x128);
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00514c68 with catch @ 00514d14
                        */
    if (lVar3 + -1 == 0) {
                    /* try { // try from 00514d18 to 00614d1f has its CatchHandler @ 00514d28 */
                    /* try { // try from 00514d20 to 00614d2b has its CatchHandler @ 00514c20 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00514d18 with catch @ 00514d28
                        */
  plVar2 = *(long **)(this + 0x118);
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00514d68 with catch @ 00514d44 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 00514d64 to 00614d67 has its CatchHandler @ 00514d78 */
                    /* try { // try from 00514d68 to 00614d8b has its CatchHandler @ 00514d44 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x108);
                    /* catch() { ... } // from try @ 00514d64 with catch @ 00514d78 */
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0xf8);
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


