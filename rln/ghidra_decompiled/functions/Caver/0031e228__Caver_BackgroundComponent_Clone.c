/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031e228
 * Function: Caver::BackgroundComponent::Clone
 * Signature: undefined __thiscall Clone(BackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::Clone() const */

BackgroundComponent * __thiscall Caver::BackgroundComponent::Clone(BackgroundComponent *this)

{
  BackgroundComponent *this_00;
  
  this_00 = operator_new(0x90);
  BackgroundComponent(this_00);
  InitWithComponent(this_00,this);
  return this_00;
}


