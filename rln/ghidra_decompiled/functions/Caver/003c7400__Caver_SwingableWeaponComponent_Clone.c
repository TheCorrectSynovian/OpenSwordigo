/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c7400
 * Function: Caver::SwingableWeaponComponent::Clone
 * Signature: undefined __thiscall Clone(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::Clone() const */

SwingableWeaponComponent * __thiscall
Caver::SwingableWeaponComponent::Clone(SwingableWeaponComponent *this)

{
  SwingableWeaponComponent *this_00;
  
  this_00 = operator_new(0x1c8);
  SwingableWeaponComponent(this_00);
  InitWithComponent(this_00,this);
  return this_00;
}


