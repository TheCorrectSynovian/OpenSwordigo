/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00340060
 * Function: Caver::TouchableComponent::~TouchableComponent
 * Signature: undefined __thiscall ~TouchableComponent(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TouchableComponent::~TouchableComponent() */

void __thiscall Caver::TouchableComponent::~TouchableComponent(TouchableComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e7010 + 0x128;
  puVar2 = PTR_vtable_007e7010 + 0x168;
  *(undefined **)this = PTR_vtable_007e7010 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  Program::~Program((Program *)(this + 0x80));
  Component::~Component((Component *)this);
  return;
}


