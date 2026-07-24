/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00371b6c
 * Function: Caver::HealthComponent::~HealthComponent
 * Signature: undefined __thiscall ~HealthComponent(HealthComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::~HealthComponent() */

void __thiscall Caver::HealthComponent::~HealthComponent(HealthComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0xb8);
  puVar1 = PTR_vtable_007e4a68 + 0x128;
  puVar2 = PTR_vtable_007e4a68 + 0x168;
  *(undefined **)this = PTR_vtable_007e4a68 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (plVar5 != (long *)0x0) {
    if ((void *)plVar5[7] != (void *)0x0) {
      operator_delete__((void *)plVar5[7]);
    }
    if ((void *)plVar5[4] != (void *)0x0) {
      operator_delete__((void *)plVar5[4]);
    }
    plVar4 = (long *)*plVar5;
    if ((plVar4 != (long *)0x0) &&
       (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
    operator_delete(plVar5);
  }
  plVar5 = *(long **)(this + 0x70);
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


