/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004eb8c4
 * Function: Caver::PurchaseViewController::~PurchaseViewController
 * Signature: undefined __thiscall ~PurchaseViewController(PurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::~PurchaseViewController() */

void __thiscall Caver::PurchaseViewController::~PurchaseViewController(PurchaseViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x70);
  *(undefined **)this = PTR_vtable_007e7250 + 0x10;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  puVar4 = (undefined *)(*(long *)(this + 0x60) + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(*(long *)(this + 0x60) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar4);
      plVar9 = *(long **)(this + 0x58);
      goto joined_r0x004eba10;
    }
  }
  plVar9 = *(long **)(this + 0x58);
joined_r0x004eba10:
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


