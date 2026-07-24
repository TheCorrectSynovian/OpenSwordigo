/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00321910
 * Function: Caver::KeyframeAnimationComponent::Clone
 * Signature: undefined __thiscall Clone(KeyframeAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::Clone() const */

KeyframeAnimationComponent * __thiscall
Caver::KeyframeAnimationComponent::Clone(KeyframeAnimationComponent *this)

{
  KeyframeAnimationComponent *this_00;
  
  this_00 = operator_new(0x98);
  KeyframeAnimationComponent(this_00);
  InitWithComponent(this_00,this);
  return this_00;
}


