/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9fbc
 * Function: Caver::Proto::PressureTriggerComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(PressureTriggerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::PressureTriggerComponent::InitAsDefaultInstance(PressureTriggerComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


