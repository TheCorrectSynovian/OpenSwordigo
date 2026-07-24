/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350578
 * Function: Caver::TouchableComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TouchableComponent::Create() */

TouchableComponent * Caver::TouchableComponent::Create(void)

{
  TouchableComponent *this;
  
  this = operator_new(0xa8);
  TouchableComponent(this);
  return this;
}


