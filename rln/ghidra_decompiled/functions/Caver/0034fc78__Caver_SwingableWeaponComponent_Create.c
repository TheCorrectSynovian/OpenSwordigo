/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fc78
 * Function: Caver::SwingableWeaponComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::Create() */

SwingableWeaponComponent * Caver::SwingableWeaponComponent::Create(void)

{
  SwingableWeaponComponent *this;
  
  this = operator_new(0x1c8);
  SwingableWeaponComponent(this);
  return this;
}


