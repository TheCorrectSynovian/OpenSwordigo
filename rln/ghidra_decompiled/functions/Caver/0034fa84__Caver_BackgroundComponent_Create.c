/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fa84
 * Function: Caver::BackgroundComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::Create() */

BackgroundComponent * Caver::BackgroundComponent::Create(void)

{
  BackgroundComponent *this;
  
  this = operator_new(0x90);
  BackgroundComponent(this);
  return this;
}


