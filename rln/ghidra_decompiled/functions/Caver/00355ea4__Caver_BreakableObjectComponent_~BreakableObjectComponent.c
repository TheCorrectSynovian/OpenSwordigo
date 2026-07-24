/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00355ea4
 * Function: Caver::BreakableObjectComponent::~BreakableObjectComponent
 * Signature: undefined __thiscall ~BreakableObjectComponent(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::~BreakableObjectComponent() */

void __thiscall
Caver::BreakableObjectComponent::~BreakableObjectComponent(BreakableObjectComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e56c8 + 0x128;
  puVar2 = PTR_vtable_007e56c8 + 0x168;
  *(undefined **)this = PTR_vtable_007e56c8 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  Program::~Program((Program *)(this + 0x80));
  Component::~Component((Component *)this);
  return;
}


