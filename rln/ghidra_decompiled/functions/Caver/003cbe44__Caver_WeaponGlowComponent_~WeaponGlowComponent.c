/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cbe44
 * Function: Caver::WeaponGlowComponent::~WeaponGlowComponent
 * Signature: undefined __thiscall ~WeaponGlowComponent(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::~WeaponGlowComponent() */

void __thiscall Caver::WeaponGlowComponent::~WeaponGlowComponent(WeaponGlowComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0xe0);
  puVar1 = PTR_vtable_007e4918 + 0x138;
  puVar2 = PTR_vtable_007e4918 + 0x178;
  *(undefined **)this = PTR_vtable_007e4918 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0xd8);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete__(*(void **)(this + 200));
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xb8));
  }
  plVar4 = *(long **)(this + 0x98);
  *(undefined **)(this + 0x88) = PTR_vtable_007e74d8 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


