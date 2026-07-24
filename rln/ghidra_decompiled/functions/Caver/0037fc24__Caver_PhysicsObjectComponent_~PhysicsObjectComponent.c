/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037fc24
 * Function: Caver::PhysicsObjectComponent::~PhysicsObjectComponent
 * Signature: undefined __thiscall ~PhysicsObjectComponent(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::~PhysicsObjectComponent() */

void __thiscall Caver::PhysicsObjectComponent::~PhysicsObjectComponent(PhysicsObjectComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e71a8 + 0x128;
  puVar2 = PTR_vtable_007e71a8 + 0x168;
  *(undefined **)this = PTR_vtable_007e71a8 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  PhysicsObjectState::~PhysicsObjectState((PhysicsObjectState *)(this + 0x78));
  Component::~Component((Component *)this);
  return;
}


