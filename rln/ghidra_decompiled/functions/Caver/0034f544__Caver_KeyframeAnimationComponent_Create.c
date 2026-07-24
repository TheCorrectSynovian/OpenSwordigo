/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f544
 * Function: Caver::KeyframeAnimationComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::Create() */

KeyframeAnimationComponent * Caver::KeyframeAnimationComponent::Create(void)

{
  KeyframeAnimationComponent *this;
  
  this = operator_new(0x98);
  KeyframeAnimationComponent(this);
  return this;
}


