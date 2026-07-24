/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa42c
 * Function: Caver::Proto::FireEmitterComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(FireEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::FireEmitterComponent::InitAsDefaultInstance(FireEmitterComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}


