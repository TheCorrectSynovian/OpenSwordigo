/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ef938
 * Function: Caver::StoreView::~StoreView
 * Signature: undefined __thiscall ~StoreView(StoreView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreView::~StoreView() */

void __thiscall Caver::StoreView::~StoreView(StoreView *this)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = *(void **)(this + 0x140);
  pvVar1 = *(void **)(this + 0x148);
  *(undefined **)this = PTR_vtable_007e5c08 + 0x10;
  if (pvVar3 != pvVar1) {
    do {
      plVar4 = *(long **)((long)pvVar3 + 8);
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
    pvVar3 = *(void **)(this + 0x140);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  plVar4 = *(long **)(this + 0x138);
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x128);
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x118);
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
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


