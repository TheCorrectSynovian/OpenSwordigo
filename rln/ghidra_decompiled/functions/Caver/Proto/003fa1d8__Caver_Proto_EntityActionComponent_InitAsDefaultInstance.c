/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa1d8
 * Function: Caver::Proto::EntityActionComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::EntityActionComponent::InitAsDefaultInstance(EntityActionComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


