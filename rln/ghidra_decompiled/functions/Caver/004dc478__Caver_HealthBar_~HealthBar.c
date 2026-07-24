/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dc478
 * Function: Caver::HealthBar::~HealthBar
 * Signature: undefined __thiscall ~HealthBar(HealthBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::~HealthBar() */

void __thiscall Caver::HealthBar::~HealthBar(HealthBar *this)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  pvVar4 = *(void **)(this + 400);
  pvVar1 = *(void **)(this + 0x198);
  *(undefined **)this = PTR_vtable_007e4990 + 0x10;
  if (pvVar4 != pvVar1) {
    do {
      plVar5 = *(long **)((long)pvVar4 + 8);
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar1 != pvVar4);
    pvVar4 = *(void **)(this + 400);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar5 = *(long **)(this + 0x188);
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (*(void **)(this + 0x160) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x160));
  }
  if (*(void **)(this + 0x148) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x148));
  }
  plVar5 = *(long **)(this + 0x128);
  if ((plVar5 != (long *)0x0) &&
     (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x100);
  if ((plVar5 != (long *)0x0) &&
     (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0xf8);
  if ((plVar5 != (long *)0x0) &&
     (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0xf0);
                    /* catch() { ... } // from try @ 004dc614 with catch @ 004dc5e4 */
  if ((plVar5 != (long *)0x0) &&
     (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
                    /* try { // try from 004dc600 to 005dc613 has its CatchHandler @ 004dc638 */
  GUIView::~GUIView((GUIView *)this);
  return;
}


