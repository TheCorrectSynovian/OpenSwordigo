/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cc7f0
 * Function: Caver::DebugInfoOverlay::~DebugInfoOverlay
 * Signature: undefined __thiscall ~DebugInfoOverlay(DebugInfoOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::~DebugInfoOverlay() */

void __thiscall Caver::DebugInfoOverlay::~DebugInfoOverlay(DebugInfoOverlay *this)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = *(void **)(this + 0x130);
  pvVar1 = *(void **)(this + 0x138);
  *(undefined **)this = PTR_vtable_007e48e8 + 0x10;
  if (pvVar3 != pvVar1) {
    do {
      plVar4 = *(long **)((long)pvVar3 + 8);
                    /* catch() { ... } // from try @ 004cc8fc with catch @ 004cc828 */
      if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar2 = plVar4[2];
        plVar4[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      pvVar3 = (void *)((long)pvVar3 + 0x10);
    } while (pvVar1 != pvVar3);
    pvVar3 = *(void **)(this + 0x130);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(this + 0x128);
                    /* try { // try from 004cc88c to 005cc893 has its CatchHandler @ 004cc8f0 */
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 004cc89c to 005cc8a7 has its CatchHandler @ 004cc8b4 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
                    /* catch() { ... } // from try @ 004cc89c with catch @ 004cc8b4 */
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x118);
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 004cc8e8 to 005cc8fb has its CatchHandler @ 004cc904 */
                    /* catch() { ... } // from try @ 004cc88c with catch @ 004cc8f0 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
                    /* try { // try from 004cc8fc to 005cc907 has its CatchHandler @ 004cc828 */
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 004cc8e8 with catch @ 004cc904 */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x108);
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0xf8);
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


