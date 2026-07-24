/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00374404
 * Function: Caver::HeroEntityComponent::Clone
 * Signature: undefined __thiscall Clone(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::Clone() const */

HeroEntityComponent * __thiscall Caver::HeroEntityComponent::Clone(HeroEntityComponent *this)

{
  HeroEntityComponent *this_00;
  
  this_00 = operator_new(0x1d0);
  HeroEntityComponent(this_00);
  InitWithComponent(this_00,this);
  return this_00;
}


