/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fae60
 * Function: Caver::Proto::SpellComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(SpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::SpellComponent::InitAsDefaultInstance(SpellComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


