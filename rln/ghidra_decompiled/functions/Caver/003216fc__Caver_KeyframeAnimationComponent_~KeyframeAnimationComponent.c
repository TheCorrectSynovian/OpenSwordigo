/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003216fc
 * Function: Caver::KeyframeAnimationComponent::~KeyframeAnimationComponent
 * Signature: undefined __thiscall ~KeyframeAnimationComponent(KeyframeAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::~KeyframeAnimationComponent() */

void __thiscall
Caver::KeyframeAnimationComponent::~KeyframeAnimationComponent(KeyframeAnimationComponent *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  plVar5 = *(long **)(this + 0x90);
  puVar6 = PTR_vtable_007e50a8 + 0x130;
  puVar1 = PTR_vtable_007e50a8 + 0x170;
  *(undefined **)this = PTR_vtable_007e50a8 + 0x10;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar6;
  if ((plVar5 != (long *)0x0) &&
     (iVar9 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar6 = (undefined *)(*(long *)(this + 0x88) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)(this + 0x88) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar6);
    }
  }
  plVar5 = *(long **)(this + 0x80);
  *(undefined **)(this + 0x70) = PTR_vtable_007e50d0 + 0x10;
  if ((plVar5 != (long *)0x0) &&
     (iVar9 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  Component::~Component((Component *)this);
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


