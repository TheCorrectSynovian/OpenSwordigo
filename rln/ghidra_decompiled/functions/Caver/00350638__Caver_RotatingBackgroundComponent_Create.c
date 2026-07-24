/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350638
 * Function: Caver::RotatingBackgroundComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RotatingBackgroundComponent::Create() */

RotatingBackgroundComponent * Caver::RotatingBackgroundComponent::Create(void)

{
  RotatingBackgroundComponent *this;
  
  this = operator_new(0x98);
  RotatingBackgroundComponent(this);
  return this;
}


