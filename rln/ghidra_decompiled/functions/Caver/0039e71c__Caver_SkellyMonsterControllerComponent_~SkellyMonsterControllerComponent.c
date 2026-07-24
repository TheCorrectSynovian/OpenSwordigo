/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039e71c
 * Function: Caver::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent
 * Signature: undefined __thiscall ~SkellyMonsterControllerComponent(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent() */

void __thiscall
Caver::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent
          (SkellyMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x108);
  puVar1 = PTR_vtable_007e5818 + 0x128;
  puVar2 = PTR_vtable_007e5818 + 0x168;
  *(undefined **)this = PTR_vtable_007e5818 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x100);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0xf8);
  *(undefined **)(this + 0xe8) = PTR_vtable_007e5238 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0xe0);
  *(undefined **)(this + 0xd0) = PTR_vtable_007e5778 + 0x10;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  MonsterControllerComponent::~MonsterControllerComponent((MonsterControllerComponent *)this);
  return;
}


