/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003509b8
 * Function: Caver::MagicSpellCastComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicSpellCastComponent::Create() */

MagicSpellCastComponent * Caver::MagicSpellCastComponent::Create(void)

{
  MagicSpellCastComponent *this;
  
  this = operator_new(0xa8);
  MagicSpellCastComponent(this);
  return this;
}


