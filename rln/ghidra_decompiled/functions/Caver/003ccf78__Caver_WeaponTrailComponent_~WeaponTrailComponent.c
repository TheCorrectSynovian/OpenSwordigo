/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ccf78
 * Function: Caver::WeaponTrailComponent::~WeaponTrailComponent
 * Signature: undefined __thiscall ~WeaponTrailComponent(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::~WeaponTrailComponent() */

void __thiscall Caver::WeaponTrailComponent::~WeaponTrailComponent(WeaponTrailComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  puVar1 = PTR_vtable_007e4f88 + 0x128;
  puVar2 = PTR_vtable_007e4f88 + 0x168;
  *(undefined **)this = PTR_vtable_007e4f88 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (*(void **)(this + 0x88) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x88));
  }
  plVar4 = *(long **)(this + 0x80);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


