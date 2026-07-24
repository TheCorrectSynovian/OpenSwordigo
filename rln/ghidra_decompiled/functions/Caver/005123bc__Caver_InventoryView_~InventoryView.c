/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005123bc
 * Function: Caver::InventoryView::~InventoryView
 * Signature: undefined __thiscall ~InventoryView(InventoryView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::~InventoryView() */

void __thiscall Caver::InventoryView::~InventoryView(InventoryView *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  plVar11 = *(long **)(this + 0x170);
  puVar6 = PTR_vtable_007e79e0 + 0x180;
  puVar1 = PTR_vtable_007e79e0 + 0x1a0;
  puVar2 = PTR_vtable_007e79e0 + 0x1b8;
  *(undefined **)this = PTR_vtable_007e79e0 + 0x10;
  *(undefined **)(this + 0x100) = puVar1;
  *(undefined **)(this + 0xf8) = puVar6;
  *(undefined **)(this + 0x108) = puVar2;
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>>
            (*(shared_ptr **)(this + 0x160));
  plVar11 = *(long **)(this + 0x150);
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  plVar11 = *(long **)(this + 0x140);
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>
            (*(shared_ptr **)(this + 0x130));
  plVar11 = *(long **)(this + 0x120);
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0xf0) + -0x18);
  bVar5 = puVar6 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e4808 + 0x10;
  if (bVar5) {
    piVar9 = (int *)(*(long *)(this + 0xf0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


