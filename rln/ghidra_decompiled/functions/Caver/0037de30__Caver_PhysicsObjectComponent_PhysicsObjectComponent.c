/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037de30
 * Function: Caver::PhysicsObjectComponent::PhysicsObjectComponent
 * Signature: undefined __thiscall PhysicsObjectComponent(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::PhysicsObjectComponent() */

void __thiscall Caver::PhysicsObjectComponent::PhysicsObjectComponent(PhysicsObjectComponent *this)

{
  undefined *puVar1;
  PhysicsObjectComponent *pPVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (PhysicsObjectComponent)0x0;
  puVar1 = PTR_vtable_007e71a8;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pPVar2 = this + 0x48;
  *(undefined8 *)pPVar2 = 0;
  this[0x70] = (PhysicsObjectComponent)0x1;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(PhysicsObjectComponent **)(this + 0x58) = pPVar2;
  *(PhysicsObjectComponent **)(this + 0x60) = pPVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  PhysicsObjectState::PhysicsObjectState((PhysicsObjectState *)(this + 0x78));
  *(undefined8 *)(this + 0x10c) = DAT_00688740;
  this[0x114] = (PhysicsObjectComponent)0x0;
  return;
}


