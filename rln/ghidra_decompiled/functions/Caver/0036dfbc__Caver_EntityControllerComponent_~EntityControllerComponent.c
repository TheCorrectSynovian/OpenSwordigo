/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036dfbc
 * Function: Caver::EntityControllerComponent::~EntityControllerComponent
 * Signature: undefined __thiscall ~EntityControllerComponent(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::~EntityControllerComponent() */

void __thiscall
Caver::EntityControllerComponent::~EntityControllerComponent(EntityControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 0x138);
  plVar3 = *(long **)(this + 0x140);
  puVar1 = PTR_vtable_007e6270 + 0x128;
  puVar2 = PTR_vtable_007e6270 + 0x168;
  *(undefined **)this = PTR_vtable_007e6270 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if (plVar6 != plVar3) {
    do {
      plVar5 = (long *)*plVar6;
      if ((plVar5 != (long *)0x0) &&
         (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar3 != plVar6);
    plVar6 = *(long **)(this + 0x138);
  }
  if (plVar6 != (long *)0x0) {
    operator_delete(plVar6);
  }
  plVar6 = *(long **)(this + 0x118);
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0x100);
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0xf0);
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 200);
  *(undefined **)(this + 0xb8) = PTR_vtable_007e5238 + 0x10;
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0xb0);
  *(undefined **)(this + 0xa0) = PTR_vtable_007e5548 + 0x10;
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0x98);
  *(undefined **)(this + 0x88) = PTR_vtable_007e51c0 + 0x10;
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(this + 0x80);
  *(undefined **)(this + 0x70) = PTR_vtable_007e67b0 + 0x10;
  if ((plVar6 != (long *)0x0) &&
     (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


