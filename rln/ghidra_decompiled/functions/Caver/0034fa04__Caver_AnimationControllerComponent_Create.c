/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fa04
 * Function: Caver::AnimationControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::Create() */

AnimationControllerComponent * Caver::AnimationControllerComponent::Create(void)

{
  AnimationControllerComponent *this;
  
  this = operator_new(0xb8);
  AnimationControllerComponent(this);
  return this;
}


