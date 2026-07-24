/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341c68
 * Function: Caver::TransformControllerComponent::~TransformControllerComponent
 * Signature: undefined __thiscall ~TransformControllerComponent(TransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::~TransformControllerComponent() */

void __thiscall
Caver::TransformControllerComponent::~TransformControllerComponent
          (TransformControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0xb8);
  puVar1 = PTR_vtable_007e6898 + 0x128;
  puVar2 = PTR_vtable_007e6898 + 0x168;
  *(undefined **)this = PTR_vtable_007e6898 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


