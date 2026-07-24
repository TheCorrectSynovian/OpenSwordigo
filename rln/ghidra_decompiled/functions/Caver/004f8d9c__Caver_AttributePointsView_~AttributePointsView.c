/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f8d9c
 * Function: Caver::AttributePointsView::~AttributePointsView
 * Signature: undefined __thiscall ~AttributePointsView(AttributePointsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::~AttributePointsView() */

void __thiscall Caver::AttributePointsView::~AttributePointsView(AttributePointsView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  AttributePointsView *pAVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  AttributePointsView *pAVar11;
  AttributePointsView *pAVar12;
  AttributePointsView *pAVar13;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  *(undefined **)this = PTR_vtable_007e7208 + 0x10;
  if (*(void **)(this + 0x520) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x520));
  }
  if (*(void **)(this + 0x508) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x508));
  }
  plVar5 = *(long **)(this + 0x4e8);
  if ((plVar5 != (long *)0x0) &&
     (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  pAVar11 = this + 0x4e8;
  do {
    pAVar12 = pAVar11 + -0x28;
    pAVar11 = pAVar11 + -0x48;
    pAVar4 = *(AttributePointsView **)pAVar12;
    while (pAVar4 != pAVar12) {
      plVar5 = *(long **)(pAVar4 + 0x18);
      pAVar13 = *(AttributePointsView **)pAVar4;
      if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar8 = plVar5[2];
        plVar5[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      operator_delete(pAVar4);
      pAVar4 = pAVar13;
    }
    plVar5 = *(long **)pAVar11;
    if ((plVar5 != (long *)0x0) &&
       (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
  } while (pAVar11 != this + 0x188);
  plVar5 = *(long **)(this + 0x178);
  if ((plVar5 != (long *)0x0) &&
     (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x170);
  if ((plVar5 != (long *)0x0) &&
     (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar6 = (undefined *)(*(long *)(this + 0x168) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)(this + 0x168) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
      plVar5 = *(long **)(this + 0x160);
      goto joined_r0x004f9144;
    }
  }
  plVar5 = *(long **)(this + 0x160);
joined_r0x004f9144:
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x150);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x140);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x130);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x120);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = *(long **)(this + 0x110);
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


