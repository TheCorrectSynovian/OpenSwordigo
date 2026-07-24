/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003507f8
 * Function: Caver::MagicBombComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBombComponent::Create() */

MagicBombComponent * Caver::MagicBombComponent::Create(void)

{
  MagicBombComponent *this;
  
  this = operator_new(0xf0);
  MagicBombComponent(this);
  return this;
}


