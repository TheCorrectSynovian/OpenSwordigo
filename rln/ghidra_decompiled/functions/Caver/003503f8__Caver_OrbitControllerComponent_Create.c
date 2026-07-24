/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003503f8
 * Function: Caver::OrbitControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrbitControllerComponent::Create() */

OrbitControllerComponent * Caver::OrbitControllerComponent::Create(void)

{
  OrbitControllerComponent *this;
  
  this = operator_new(0xc0);
  OrbitControllerComponent(this);
  return this;
}


