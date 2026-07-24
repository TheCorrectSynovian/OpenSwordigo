/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fe78
 * Function: Caver::BreakableObjectComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::Create() */

BreakableObjectComponent * Caver::BreakableObjectComponent::Create(void)

{
  BreakableObjectComponent *this;
  
  this = operator_new(0xb0);
  BreakableObjectComponent(this);
  return this;
}


