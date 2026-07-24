/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053afbc
 * Function: Caver::SettingsView::~SettingsView
 * Signature: undefined __thiscall ~SettingsView(SettingsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::~SettingsView() */

void __thiscall Caver::SettingsView::~SettingsView(SettingsView *this)

{
  void *pvVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  plVar5 = *(long **)(this + 0x1d8);
  *(undefined **)this = PTR_vtable_007e7098 + 0x10;
  if ((plVar5 != (long *)0x0) &&
     (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x1d0);
  if ((plVar5 != (long *)0x0) &&
     (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x1c8);
  if ((plVar5 != (long *)0x0) &&
     (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x1c0);
  if ((plVar5 != (long *)0x0) &&
     (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x1b0);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x1a0);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 400);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x180);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  pvVar11 = *(void **)(this + 0x160);
  pvVar1 = *(void **)(this + 0x168);
  if (pvVar11 != pvVar1) {
    do {
      plVar5 = *(long **)((long)pvVar11 + 8);
      if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar8 = plVar5[2];
        plVar5[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      pvVar11 = (void *)((long)pvVar11 + 0x10);
    } while (pvVar1 != pvVar11);
    pvVar11 = *(void **)(this + 0x160);
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  plVar5 = *(long **)(this + 0x158);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x148);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x138);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x128);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
                    /* catch() { ... } // from try @ 0053b34c with catch @ 0053b31c */
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x118);
                    /* try { // try from 0053b338 to 0063b34b has its CatchHandler @ 0053b370 */
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 0053b34c to 0063b373 has its CatchHandler @ 0053b31c */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* catch() { ... } // from try @ 0053b338 with catch @ 0053b370 */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x108);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0xf0) + -0x18);
                    /* catch() { ... } // from try @ 0053b4a4 with catch @ 0053b3e0 */
  bVar4 = puVar6 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e4808 + 0x10;
  if (bVar4) {
    piVar9 = (int *)(*(long *)(this + 0xf0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
                    /* try { // try from 0053b444 to 0063b447 has its CatchHandler @ 0053b458 */
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 0053b444 with catch @ 0053b458 */
      operator_delete(puVar6);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


