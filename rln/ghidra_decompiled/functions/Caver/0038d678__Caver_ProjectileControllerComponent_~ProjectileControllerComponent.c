/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038d678
 * Function: Caver::ProjectileControllerComponent::~ProjectileControllerComponent
 * Signature: undefined __thiscall ~ProjectileControllerComponent(ProjectileControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::~ProjectileControllerComponent() */

void __thiscall
Caver::ProjectileControllerComponent::~ProjectileControllerComponent
          (ProjectileControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x78);
  puVar1 = PTR_vtable_007e78b0 + 0x128;
  puVar2 = PTR_vtable_007e78b0 + 0x168;
  *(undefined **)this = PTR_vtable_007e78b0 + 0x10;
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


