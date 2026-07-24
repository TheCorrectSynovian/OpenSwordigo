/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350838
 * Function: Caver::MagicBoltComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::Create() */

MagicBoltComponent * Caver::MagicBoltComponent::Create(void)

{
  MagicBoltComponent *this;
  
  this = operator_new(0x138);
  MagicBoltComponent(this);
  return this;
}


