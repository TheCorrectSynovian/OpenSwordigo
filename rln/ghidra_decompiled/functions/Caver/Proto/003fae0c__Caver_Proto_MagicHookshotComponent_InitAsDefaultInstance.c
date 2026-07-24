/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fae0c
 * Function: Caver::Proto::MagicHookshotComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::MagicHookshotComponent::InitAsDefaultInstance(MagicHookshotComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


