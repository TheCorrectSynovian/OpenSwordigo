/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00591f18
 * Function: Caver::GUIAlertView::~GUIAlertView
 * Signature: undefined __thiscall ~GUIAlertView(GUIAlertView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::~GUIAlertView() */

void __thiscall Caver::GUIAlertView::~GUIAlertView(GUIAlertView *this)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  pvVar4 = *(void **)(this + 0x188);
  pvVar2 = *(void **)(this + 400);
  puVar1 = PTR_vtable_007e59e8 + 0x160;
  *(undefined **)this = PTR_vtable_007e59e8 + 0x10;
  *(undefined **)(this + 0x110) = puVar1;
  if (pvVar4 != pvVar2) {
    do {
      plVar5 = *(long **)((long)pvVar4 + 8);
                    /* catch() { ... } // from try @ 0058f4cc with catch @ 00591f60 */
                    /* catch() { ... } // from try @ 0058f478 with catch @ 00591f64 */
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 0058f284 with catch @ 00591f98 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
                    /* catch() { ... } // from try @ 0058f27c with catch @ 00591f9c */
      pvVar4 = (void *)((long)pvVar4 + 0x10);
                    /* catch() { ... } // from try @ 0058f1d8 with catch @ 00591fa0 */
                    /* catch() { ... } // from try @ 0058f1d0 with catch @ 00591fa4 */
    } while (pvVar2 != pvVar4);
                    /* catch() { ... } // from try @ 0058f17c with catch @ 00591fa8 */
    pvVar4 = *(void **)(this + 0x188);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x170);
  pvVar2 = *(void **)(this + 0x178);
  if (pvVar4 != pvVar2) {
    do {
      plVar5 = *(long **)((long)pvVar4 + 8);
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
                    /* catch() { ... } // from try @ 0058f138 with catch @ 00591ff8 */
        if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 0058f0e4 with catch @ 00591ffc */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar2 != pvVar4);
    pvVar4 = *(void **)(this + 0x170);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x158);
  pvVar2 = *(void **)(this + 0x160);
                    /* catch() { ... } // from try @ 0058eef0 with catch @ 00592030 */
  if (pvVar4 != pvVar2) {
    do {
                    /* catch() { ... } // from try @ 0058eee8 with catch @ 00592034 */
      plVar5 = *(long **)((long)pvVar4 + 8);
                    /* catch() { ... } // from try @ 0058ee44 with catch @ 00592038 */
                    /* catch() { ... } // from try @ 0058ee3c with catch @ 0059203c */
                    /* catch() { ... } // from try @ 0058edf8 with catch @ 00592040 */
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 0058ed50 with catch @ 00592074 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar2 != pvVar4);
    pvVar4 = *(void **)(this + 0x158);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x140);
  pvVar2 = *(void **)(this + 0x148);
  if (pvVar4 != pvVar2) {
    do {
      plVar5 = *(long **)((long)pvVar4 + 8);
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0058ecb8 with catch @ 005920c4 */
                    /* catch() { ... } // from try @ 0058eb3c with catch @ 005920c8 */
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* catch() { ... } // from try @ 0058eacc with catch @ 005920cc */
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar2 != pvVar4);
    pvVar4 = *(void **)(this + 0x140);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar5 = *(long **)(this + 0x138);
                    /* catch() { ... } // from try @ 0058ea5c with catch @ 0059211c */
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* catch() { ... } // from try @ 0058e93c with catch @ 00592150 */
  plVar5 = *(long **)(this + 0x128);
                    /* catch() { ... } // from try @ 0058e8ec with catch @ 00592154 */
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* catch() { ... } // from try @ 0058e87c with catch @ 005921a4 */
  GUIFrameView::~GUIFrameView((GUIFrameView *)this);
  return;
}


