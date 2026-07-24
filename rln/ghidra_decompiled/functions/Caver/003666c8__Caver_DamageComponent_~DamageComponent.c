/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003666c8
 * Function: Caver::DamageComponent::~DamageComponent
 * Signature: undefined __thiscall ~DamageComponent(DamageComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::~DamageComponent() */

void __thiscall Caver::DamageComponent::~DamageComponent(DamageComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(this + 0x88);
  pvVar3 = *(void **)(this + 0x90);
  puVar1 = PTR_vtable_007e5798 + 0x128;
  puVar2 = PTR_vtable_007e5798 + 0x168;
  *(undefined **)this = PTR_vtable_007e5798 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (pvVar6 != pvVar3) {
    do {
      plVar5 = *(long **)((long)pvVar6 + 8);
      if ((plVar5 != (long *)0x0) &&
         (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
        (**(code **)(*plVar5 + 8))();
      }
      pvVar6 = (void *)((long)pvVar6 + 0x40);
    } while (pvVar3 != pvVar6);
    pvVar6 = *(void **)(this + 0x88);
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x70);
  pvVar3 = *(void **)(this + 0x78);
  if (pvVar6 != pvVar3) {
    do {
      plVar5 = *(long **)((long)pvVar6 + 8);
      if ((plVar5 != (long *)0x0) &&
         (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
        (**(code **)(*plVar5 + 8))();
      }
      pvVar6 = (void *)((long)pvVar6 + 0x40);
    } while (pvVar3 != pvVar6);
    pvVar6 = *(void **)(this + 0x70);
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  Component::~Component((Component *)this);
  return;
}


