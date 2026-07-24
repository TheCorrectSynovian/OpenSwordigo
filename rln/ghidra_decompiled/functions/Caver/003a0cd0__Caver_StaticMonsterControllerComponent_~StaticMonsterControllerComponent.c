/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0cd0
 * Function: Caver::StaticMonsterControllerComponent::~StaticMonsterControllerComponent
 * Signature: undefined __thiscall ~StaticMonsterControllerComponent(StaticMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StaticMonsterControllerComponent::~StaticMonsterControllerComponent() */

void __thiscall
Caver::StaticMonsterControllerComponent::~StaticMonsterControllerComponent
          (StaticMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x110);
  puVar1 = PTR_vtable_007e6430 + 0x128;
  puVar2 = PTR_vtable_007e6430 + 0x168;
  puVar3 = PTR_vtable_007e5a50 + 0x10;
  *(undefined **)this = PTR_vtable_007e6430 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x100) = puVar3;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined **)(this + 0xe8) = puVar3;
  plVar5 = *(long **)(this + 0xf8);
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


