/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b63f0
 * Function: Caver::PressureTriggerComponent::~PressureTriggerComponent
 * Signature: undefined __thiscall ~PressureTriggerComponent(PressureTriggerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::~PressureTriggerComponent() */

void __thiscall
Caver::PressureTriggerComponent::~PressureTriggerComponent(PressureTriggerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e6440 + 0x128;
  puVar2 = PTR_vtable_007e6440 + 0x168;
  *(undefined **)this = PTR_vtable_007e6440 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  Program::~Program((Program *)(this + 0xb0));
  Program::~Program((Program *)(this + 0x88));
  Component::~Component((Component *)this);
  return;
}


