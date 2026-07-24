/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381fcc
 * Function: Caver::DimensionSpellComponent::~DimensionSpellComponent
 * Signature: undefined __thiscall ~DimensionSpellComponent(DimensionSpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionSpellComponent::~DimensionSpellComponent() */

void __thiscall
Caver::DimensionSpellComponent::~DimensionSpellComponent(DimensionSpellComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  puVar1 = PTR_vtable_007e4868 + 0x148;
  puVar2 = PTR_vtable_007e4868 + 0x188;
  *(undefined **)this = PTR_vtable_007e4868 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  Program::~Program((Program *)(this + 0x90));
  plVar4 = *(long **)(this + 0x70);
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


