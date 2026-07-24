/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa150
 * Function: Caver::Proto::BreakableObjectComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::BreakableObjectComponent::InitAsDefaultInstance(BreakableObjectComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


