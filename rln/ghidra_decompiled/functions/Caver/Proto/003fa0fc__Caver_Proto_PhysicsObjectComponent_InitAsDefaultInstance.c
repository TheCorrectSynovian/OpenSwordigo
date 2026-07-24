/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa0fc
 * Function: Caver::Proto::PhysicsObjectComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::PhysicsObjectComponent::InitAsDefaultInstance(PhysicsObjectComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


