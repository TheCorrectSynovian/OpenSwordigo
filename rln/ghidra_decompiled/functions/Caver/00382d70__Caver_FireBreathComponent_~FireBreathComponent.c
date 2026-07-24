/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00382d70
 * Function: Caver::FireBreathComponent::~FireBreathComponent
 * Signature: undefined __thiscall ~FireBreathComponent(FireBreathComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireBreathComponent::~FireBreathComponent() */

void __thiscall Caver::FireBreathComponent::~FireBreathComponent(FireBreathComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0xe8);
  puVar1 = PTR_vtable_007e4a08 + 0x148;
  puVar2 = PTR_vtable_007e4a08 + 0x188;
  puVar3 = PTR_vtable_007e5a50 + 0x10;
  *(undefined **)this = PTR_vtable_007e4a08 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0xd8) = puVar3;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0xd0);
  *(undefined **)(this + 0xc0) = PTR_vtable_007e74d8 + 0x10;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar1 = PTR_vtable_007e4868 + 0x148;
  puVar2 = PTR_vtable_007e4868 + 0x188;
  *(undefined **)this = PTR_vtable_007e4868 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  Program::~Program((Program *)(this + 0x90));
  plVar5 = *(long **)(this + 0x70);
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


