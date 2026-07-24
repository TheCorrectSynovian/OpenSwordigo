/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fad30
 * Function: Caver::Proto::FireBreathComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(FireBreathComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::FireBreathComponent::InitAsDefaultInstance(FireBreathComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


