/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f584
 * Function: Caver::BlendAnimationComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::Create() */

BlendAnimationComponent * Caver::BlendAnimationComponent::Create(void)

{
  BlendAnimationComponent *this;
  
  this = operator_new(0xa0);
  BlendAnimationComponent(this);
  return this;
}


