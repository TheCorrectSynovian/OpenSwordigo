/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003506f8
 * Function: Caver::ProgramComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::Create() */

ProgramComponent * Caver::ProgramComponent::Create(void)

{
  ProgramComponent *this;
  
  this = operator_new(0xc0);
  ProgramComponent(this);
  return this;
}


