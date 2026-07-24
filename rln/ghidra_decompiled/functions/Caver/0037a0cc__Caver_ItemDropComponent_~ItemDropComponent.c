/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037a0cc
 * Function: Caver::ItemDropComponent::~ItemDropComponent
 * Signature: undefined __thiscall ~ItemDropComponent(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::~ItemDropComponent() */

void __thiscall Caver::ItemDropComponent::~ItemDropComponent(ItemDropComponent *this)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  plVar11 = *(long **)(this + 0x98);
  plVar2 = *(long **)(this + 0xa0);
  puVar1 = PTR_vtable_007e5060 + 0x128;
  puVar7 = PTR_vtable_007e5060 + 0x168;
  *(undefined **)this = PTR_vtable_007e5060 + 0x10;
  *(undefined **)(this + 0x18) = puVar7;
  *(undefined **)(this + 0x10) = puVar1;
  if (plVar11 != plVar2) {
    do {
      plVar6 = (long *)*plVar11;
      if ((plVar6 != (long *)0x0) &&
         (iVar10 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar10, iVar10 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar11 = plVar11 + 1;
    } while (plVar2 != plVar11);
    plVar11 = *(long **)(this + 0x98);
  }
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector
            ((FastVector<Caver::ItemDropComponent::ItemDropEntry> *)(this + 0x88));
  puVar1 = PTR_DAT_007e5de8;
  puVar7 = (undefined *)(*(long *)(this + 0x80) + -0x18);
  if (puVar7 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)(this + 0x80) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar7);
    }
  }
  puVar7 = (undefined *)(*(long *)(this + 0x78) + -0x18);
  if (puVar7 != puVar1) {
    piVar9 = (int *)(*(long *)(this + 0x78) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar7);
    }
  }
  Component::~Component((Component *)this);
  if (*(long *)(lVar5 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


