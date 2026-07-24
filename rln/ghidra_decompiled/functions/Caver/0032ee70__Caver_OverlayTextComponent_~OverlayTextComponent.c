/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032ee70
 * Function: Caver::OverlayTextComponent::~OverlayTextComponent
 * Signature: undefined __thiscall ~OverlayTextComponent(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::~OverlayTextComponent() */

void __thiscall Caver::OverlayTextComponent::~OverlayTextComponent(OverlayTextComponent *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  FontText *this_00;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  plVar11 = *(long **)(this + 0xd0);
  puVar1 = PTR_vtable_007e5598 + 0x130;
  puVar6 = PTR_vtable_007e5598 + 0x170;
  *(undefined **)this = PTR_vtable_007e5598 + 0x10;
  *(undefined **)(this + 0x18) = puVar6;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  plVar11 = *(long **)(this + 0xa0);
  if (plVar11 != (long *)0x0) {
    if ((void *)plVar11[7] != (void *)0x0) {
      operator_delete__((void *)plVar11[7]);
    }
    if ((void *)plVar11[4] != (void *)0x0) {
      operator_delete__((void *)plVar11[4]);
    }
    plVar5 = (long *)*plVar11;
    if ((plVar5 != (long *)0x0) &&
       (iVar10 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
    operator_delete(plVar11);
  }
  puVar1 = PTR_DAT_007e5de8;
  puVar6 = (undefined *)(*(long *)(this + 0x90) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)(this + 0x90) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
      this_00 = *(FontText **)(this + 0x88);
      goto joined_r0x0032f020;
    }
  }
  this_00 = *(FontText **)(this + 0x88);
joined_r0x0032f020:
  if (this_00 != (FontText *)0x0) {
    FontText::~FontText(this_00);
    operator_delete(this_00);
  }
  puVar6 = (undefined *)(*(long *)(this + 0x70) + -0x18);
  if (puVar6 != puVar1) {
    piVar9 = (int *)(*(long *)(this + 0x70) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  Component::~Component((Component *)this);
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


