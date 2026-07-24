/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fac00
 * Function: Caver::Proto::MagicBoltComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::MagicBoltComponent::InitAsDefaultInstance(MagicBoltComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


