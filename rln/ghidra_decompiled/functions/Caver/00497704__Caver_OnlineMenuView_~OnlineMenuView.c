/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00497704
 * Function: Caver::OnlineMenuView::~OnlineMenuView
 * Signature: undefined __thiscall ~OnlineMenuView(OnlineMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineMenuView::~OnlineMenuView() */

void __thiscall Caver::OnlineMenuView::~OnlineMenuView(OnlineMenuView *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  plVar3 = *(long **)(this + 0x140);
  *(undefined **)this = PTR_vtable_007e7fd8 + 0x10;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x130);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
                    /* try { // try from 004977a8 to 005977ab has its CatchHandler @ 004980c8 */
    if (lVar2 + -1 == 0) {
                    /* try { // try from 004977ac to 005977f7 has its CatchHandler @ 004976d8 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x120);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 004977f8 to 005977ff has its CatchHandler @ 004980f4 */
                    /* try { // try from 00497800 to 00597abb has its CatchHandler @ 004976d8 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x110);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pvVar4 = *(void **)(this + 0xf0);
  pvVar1 = *(void **)(this + 0xf8);
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
    pvVar4 = *(void **)(this + 0xf0);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


