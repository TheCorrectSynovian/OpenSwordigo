/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003faabc
 * Function: Caver::Proto::TouchableComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::TouchableComponent::InitAsDefaultInstance(TouchableComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


