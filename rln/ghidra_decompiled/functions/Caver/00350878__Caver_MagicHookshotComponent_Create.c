/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350878
 * Function: Caver::MagicHookshotComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::Create() */

MagicHookshotComponent * Caver::MagicHookshotComponent::Create(void)

{
  MagicHookshotComponent *this;
  
  this = operator_new(0x170);
  MagicHookshotComponent(this);
  return this;
}


