/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa930
 * Function: Caver::Proto::WeaponGlowComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::WeaponGlowComponent::InitAsDefaultInstance(WeaponGlowComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


