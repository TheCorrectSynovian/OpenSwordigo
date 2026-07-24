/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031f67c
 * Function: Caver::BlendAnimationComponent::~BlendAnimationComponent
 * Signature: undefined __thiscall ~BlendAnimationComponent(BlendAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::~BlendAnimationComponent() */

void __thiscall
Caver::BlendAnimationComponent::~BlendAnimationComponent(BlendAnimationComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x98);
  puVar1 = PTR_vtable_007e69a0 + 0x130;
  puVar2 = PTR_vtable_007e69a0 + 0x170;
  *(undefined **)this = PTR_vtable_007e69a0 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x88);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x78);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


