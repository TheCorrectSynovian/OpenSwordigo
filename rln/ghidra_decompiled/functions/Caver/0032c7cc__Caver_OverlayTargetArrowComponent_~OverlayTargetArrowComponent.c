/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032c7cc
 * Function: Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent
 * Signature: undefined __thiscall ~OverlayTargetArrowComponent(OverlayTargetArrowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent() */

void __thiscall
Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent(OverlayTargetArrowComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 0xa8);
  puVar1 = PTR_vtable_007e6cd8 + 0x130;
  puVar2 = PTR_vtable_007e6cd8 + 0x170;
  *(undefined **)this = PTR_vtable_007e6cd8 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (plVar6 != (long *)0x0) {
    if ((void *)plVar6[7] != (void *)0x0) {
      operator_delete__((void *)plVar6[7]);
    }
    if ((void *)plVar6[4] != (void *)0x0) {
      operator_delete__((void *)plVar6[4]);
    }
    plVar4 = (long *)*plVar6;
    if ((plVar4 != (long *)0x0) &&
       (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
    operator_delete(plVar6);
  }
  plVar6 = *(long **)(this + 0xa0);
  if (plVar6 != (long *)0x0) {
    if ((void *)plVar6[7] != (void *)0x0) {
      operator_delete__((void *)plVar6[7]);
    }
    if ((void *)plVar6[4] != (void *)0x0) {
      operator_delete__((void *)plVar6[4]);
    }
    plVar4 = (long *)*plVar6;
    if ((plVar4 != (long *)0x0) &&
       (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
    operator_delete(plVar6);
  }
  plVar6 = *(long **)(this + 0x90);
  if ((plVar6 != (long *)0x0) &&
     (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0x78);
  plVar4 = *(long **)(this + 0x80);
  if (plVar6 != plVar4) {
    do {
      plVar5 = (long *)*plVar6;
      if ((plVar5 != (long *)0x0) &&
         (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar4 != plVar6);
    plVar6 = *(long **)(this + 0x78);
  }
  if (plVar6 != (long *)0x0) {
    operator_delete(plVar6);
  }
  plVar6 = *(long **)(this + 0x70);
  if ((plVar6 != (long *)0x0) &&
     (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


