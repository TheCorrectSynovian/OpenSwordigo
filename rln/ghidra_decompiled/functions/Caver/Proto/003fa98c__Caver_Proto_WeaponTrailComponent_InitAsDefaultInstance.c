/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa98c
 * Function: Caver::Proto::WeaponTrailComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::WeaponTrailComponent::InitAsDefaultInstance(WeaponTrailComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


