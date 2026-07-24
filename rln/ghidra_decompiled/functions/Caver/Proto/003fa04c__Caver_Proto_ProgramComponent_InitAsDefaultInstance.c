/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa04c
 * Function: Caver::Proto::ProgramComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::ProgramComponent::InitAsDefaultInstance(ProgramComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


