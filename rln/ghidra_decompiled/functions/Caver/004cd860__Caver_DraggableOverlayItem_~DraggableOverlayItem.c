/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cd860
 * Function: Caver::DraggableOverlayItem::~DraggableOverlayItem
 * Signature: undefined __thiscall ~DraggableOverlayItem(DraggableOverlayItem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DraggableOverlayItem::~DraggableOverlayItem() */

void __thiscall Caver::DraggableOverlayItem::~DraggableOverlayItem(DraggableOverlayItem *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined *)(*(long *)(this + 600) + -0x18);
  bVar3 = puVar4 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e7810 + 0x10;
  if (bVar3) {
    piVar8 = (int *)(*(long *)(this + 600) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar4);
      pvVar5 = *(void **)(this + 0x238);
      goto joined_r0x004cd9d4;
    }
  }
  pvVar5 = *(void **)(this + 0x238);
joined_r0x004cd9d4:
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  if (*(void **)(this + 0x220) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x220));
  }
  plVar6 = *(long **)(this + 0x200);
  if ((plVar6 != (long *)0x0) &&
     (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0x1b0);
  if ((plVar6 != (long *)0x0) &&
     (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  if (*(void **)(this + 400) != (void *)0x0) {
    operator_delete__(*(void **)(this + 400));
  }
  if (*(void **)(this + 0x178) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x178));
  }
  plVar6 = *(long **)(this + 0x158);
  if ((plVar6 != (long *)0x0) &&
     (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0x108);
  if ((plVar6 != (long *)0x0) &&
     (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  GUIView::~GUIView((GUIView *)this);
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


