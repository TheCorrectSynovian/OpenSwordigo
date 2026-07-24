/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa528
 * Function: Caver::Proto::OrbitControllerComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(OrbitControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::OrbitControllerComponent::InitAsDefaultInstance(OrbitControllerComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


