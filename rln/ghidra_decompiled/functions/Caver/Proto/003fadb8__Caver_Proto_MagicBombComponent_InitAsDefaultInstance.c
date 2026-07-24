/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fadb8
 * Function: Caver::Proto::MagicBombComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::MagicBombComponent::InitAsDefaultInstance(MagicBombComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


