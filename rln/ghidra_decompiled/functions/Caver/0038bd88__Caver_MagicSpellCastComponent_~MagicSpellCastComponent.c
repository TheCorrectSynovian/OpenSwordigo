/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038bd88
 * Function: Caver::MagicSpellCastComponent::~MagicSpellCastComponent
 * Signature: undefined __thiscall ~MagicSpellCastComponent(MagicSpellCastComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicSpellCastComponent::~MagicSpellCastComponent() */

void __thiscall
Caver::MagicSpellCastComponent::~MagicSpellCastComponent(MagicSpellCastComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x98);
  puVar1 = PTR_vtable_007e6a58 + 0x128;
  puVar2 = PTR_vtable_007e6a58 + 0x168;
  puVar3 = PTR_vtable_007e5a50 + 0x10;
  *(undefined **)this = PTR_vtable_007e6a58 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x88) = puVar3;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(this + 0x80);
  *(undefined **)(this + 0x70) = PTR_vtable_007e74d8 + 0x10;
  if ((plVar5 != (long *)0x0) &&
     (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  Component::~Component((Component *)this);
  return;
}


