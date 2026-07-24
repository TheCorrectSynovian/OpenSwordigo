/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398dd0
 * Function: Caver::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent
 * Signature: undefined __thiscall ~LeapingMonsterControllerComponent(LeapingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent() */

void __thiscall
Caver::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent
          (LeapingMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0xf8);
  puVar1 = PTR_vtable_007e70b8 + 0x128;
  puVar2 = PTR_vtable_007e70b8 + 0x168;
  puVar3 = PTR_vtable_007e7fa0 + 0x10;
  *(undefined **)this = PTR_vtable_007e70b8 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0xe8) = puVar3;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0xe0);
  *(undefined **)(this + 0xd0) = PTR_vtable_007e5548 + 0x10;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  MonsterControllerComponent::~MonsterControllerComponent((MonsterControllerComponent *)this);
  return;
}


