/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328710
 * Function: Caver::ModelTransformControllerComponent::~ModelTransformControllerComponent
 * Signature: undefined __thiscall ~ModelTransformControllerComponent(ModelTransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelTransformControllerComponent::~ModelTransformControllerComponent() */

void __thiscall
Caver::ModelTransformControllerComponent::~ModelTransformControllerComponent
          (ModelTransformControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x80);
  puVar1 = PTR_vtable_007e6d38 + 0x128;
  puVar2 = PTR_vtable_007e6d38 + 0x168;
  puVar3 = PTR_vtable_007e50d0 + 0x10;
  *(undefined **)this = PTR_vtable_007e6d38 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x70) = puVar3;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


