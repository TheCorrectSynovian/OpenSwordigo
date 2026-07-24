/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fcf8
 * Function: Caver::SwingComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingComponent::Create() */

SwingComponent * Caver::SwingComponent::Create(void)

{
  SwingComponent *this;
  
  this = operator_new(0x98);
  SwingComponent(this);
  return this;
}


