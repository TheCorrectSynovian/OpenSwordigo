/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037d978
 * Function: Caver::MonsterEntityComponent::~MonsterEntityComponent
 * Signature: undefined __thiscall ~MonsterEntityComponent(MonsterEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::~MonsterEntityComponent() */

void __thiscall Caver::MonsterEntityComponent::~MonsterEntityComponent(MonsterEntityComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 400);
  puVar1 = PTR_vtable_007e4e30 + 0x128;
  puVar2 = PTR_vtable_007e4e30 + 0x168;
  *(undefined **)this = PTR_vtable_007e4e30 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x188);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Program::~Program((Program *)(this + 0x158));
  Program::~Program((Program *)(this + 0x130));
  plVar4 = *(long **)(this + 0x118);
  puVar1 = PTR_vtable_007e5c90 + 0x128;
  puVar2 = PTR_vtable_007e5c90 + 0x168;
  *(undefined **)this = PTR_vtable_007e5c90 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  PhysicsObjectState::~PhysicsObjectState((PhysicsObjectState *)(this + 0x78));
  Component::~Component((Component *)this);
  return;
}


