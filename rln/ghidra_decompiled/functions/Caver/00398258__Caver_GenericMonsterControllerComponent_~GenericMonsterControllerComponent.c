/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398258
 * Function: Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent
 * Signature: undefined __thiscall ~GenericMonsterControllerComponent(GenericMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent() */

void __thiscall
Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent
          (GenericMonsterControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(this + 0x118);
  puVar1 = PTR_vtable_007e52e0 + 0x128;
  puVar2 = PTR_vtable_007e52e0 + 0x168;
  *(undefined **)this = PTR_vtable_007e52e0 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0xe8);
  plVar3 = *(long **)(this + 0xf0);
  if (plVar5 != plVar3) {
    do {
      plVar6 = (long *)*plVar5;
      if ((plVar6 != (long *)0x0) &&
         (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar3 != plVar5);
    plVar5 = *(long **)(this + 0xe8);
  }
  if (plVar5 != (long *)0x0) {
    operator_delete(plVar5);
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


