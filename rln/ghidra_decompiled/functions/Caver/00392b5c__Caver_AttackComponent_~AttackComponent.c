/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00392b5c
 * Function: Caver::AttackComponent::~AttackComponent
 * Signature: undefined __thiscall ~AttackComponent(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::~AttackComponent() */

void __thiscall Caver::AttackComponent::~AttackComponent(AttackComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0xf8);
  puVar1 = PTR_vtable_007e50d8 + 0x128;
  puVar2 = PTR_vtable_007e50d8 + 0x168;
  *(undefined **)this = PTR_vtable_007e50d8 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Program::~Program((Program *)(this + 0xd0));
  plVar4 = *(long **)(this + 200);
  *(undefined **)(this + 0xb8) = PTR_vtable_007e5a50 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0xb0);
  *(undefined **)(this + 0xa0) = PTR_vtable_007e5238 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x98);
  *(undefined **)(this + 0x88) = PTR_vtable_007e5f58 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x80);
  *(undefined **)(this + 0x70) = PTR_vtable_007e5548 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


