/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039fc64
 * Function: Caver::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent
 * Signature: undefined __thiscall ~SnappingMonsterControllerComponent(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent() */

void __thiscall
Caver::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent
          (SnappingMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x140);
  puVar1 = PTR_vtable_007e5c38 + 0x128;
  puVar2 = PTR_vtable_007e5c38 + 0x168;
  puVar3 = PTR_vtable_007e5a50 + 0x10;
  *(undefined **)this = PTR_vtable_007e5c38 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x130) = puVar3;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x128);
  *(undefined **)(this + 0x118) = PTR_vtable_007e5238 + 0x10;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x110);
  *(undefined **)(this + 0x100) = PTR_vtable_007e4a40 + 0x10;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0xf8);
  puVar1 = PTR_vtable_007e5548 + 0x10;
  *(undefined **)(this + 0xe8) = puVar1;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0xe0);
  *(undefined **)(this + 0xd0) = puVar1;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  MonsterControllerComponent::~MonsterControllerComponent((MonsterControllerComponent *)this);
  return;
}


