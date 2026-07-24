/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c8e60
 * Function: Caver::ConfigureOverlayView::~ConfigureOverlayView
 * Signature: undefined __thiscall ~ConfigureOverlayView(ConfigureOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::~ConfigureOverlayView() */

void __thiscall Caver::ConfigureOverlayView::~ConfigureOverlayView(ConfigureOverlayView *this)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
                    /* catch() { ... } // from try @ 004c8b34 with catch @ 004c8e6c */
                    /* catch() { ... } // from try @ 004c8bd4 with catch @ 004c8e78
                       catch() { ... } // from try @ 004c8cdc with catch @ 004c8e78 */
  plVar5 = *(long **)(this + 0x168);
  puVar1 = PTR_vtable_007e5dc8 + 0x168;
  puVar2 = PTR_vtable_007e5dc8 + 0x180;
  *(undefined **)this = PTR_vtable_007e5dc8 + 0x10;
                    /* try { // try from 004c8e9c to 005c8ec3 has its CatchHandler @ 004c8ecc */
  *(undefined **)(this + 0xf8) = puVar2;
  *(undefined **)(this + 0xf0) = puVar1;
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* try { // try from 004c8ec4 to 005c8ecf has its CatchHandler @ 004c8aec */
    lVar4 = plVar5[2];
                    /* catch() { ... } // from try @ 004c8dbc with catch @ 004c8ecc
                       catch() { ... } // from try @ 004c8e9c with catch @ 004c8ecc */
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  pvVar6 = *(void **)(this + 0x148);
  pvVar3 = *(void **)(this + 0x150);
                    /* try { // try from 004c8eec to 005c8fc3 has its CatchHandler @ 004c8eec
                       catch(type#1 @ 00000000) { ... } // from try @ 004c8eec with catch @ 004c8eec
                       catch(type#1 @ 00000000) { ... } // from try @ 004c8fd0 with catch @ 004c8eec
                       catch(type#1 @ 00000000) { ... } // from try @ 004c9064 with catch @ 004c8eec
                        */
  if (pvVar6 != pvVar3) {
    do {
      plVar5 = *(long **)((long)pvVar6 + 8);
      if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar4 = plVar5[2];
        plVar5[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      pvVar6 = (void *)((long)pvVar6 + 0x10);
    } while (pvVar3 != pvVar6);
    pvVar6 = *(void **)(this + 0x148);
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  plVar5 = *(long **)(this + 0x140);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x130);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* try { // try from 004c8fc4 to 005c8fcf has its CatchHandler @ 004c9038 */
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
                    /* try { // try from 004c8fd0 to 005c905b has its CatchHandler @ 004c8eec */
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x120);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x110);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004c8fc4 with catch @ 004c9038
                        */
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
                    /* try { // try from 004c905c to 005c9063 has its CatchHandler @ 004c906c */
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* try { // try from 004c9064 to 005c906f has its CatchHandler @ 004c8eec */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004c905c with catch @ 004c906c
                        */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


