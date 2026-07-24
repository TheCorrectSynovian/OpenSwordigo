/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e7eec
 * Function: Caver::PurchaseView::~PurchaseView
 * Signature: undefined __thiscall ~PurchaseView(PurchaseView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseView::~PurchaseView() */

void __thiscall Caver::PurchaseView::~PurchaseView(PurchaseView *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  plVar3 = *(long **)(this + 0x140);
  *(undefined **)this = PTR_vtable_007e7530 + 0x10;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004e7f5c with catch @ 004e7f2c */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
                    /* try { // try from 004e7f48 to 005e7f5b has its CatchHandler @ 004e7f80 */
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 004e7f5c to 005e7f83 has its CatchHandler @ 004e7f2c */
  plVar3 = *(long **)(this + 0x130);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004e7f48 with catch @ 004e7f80 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x120);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pvVar4 = *(void **)(this + 0x100);
  pvVar1 = *(void **)(this + 0x108);
  if (pvVar4 != pvVar1) {
    do {
      plVar3 = *(long **)((long)pvVar4 + 8);
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar1 != pvVar4);
    pvVar4 = *(void **)(this + 0x100);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar3 = *(long **)(this + 0xf8);
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


