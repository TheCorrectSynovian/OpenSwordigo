/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f6c4
 * Function: Caver::EntityComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityComponent::Create() */

EntityComponent * Caver::EntityComponent::Create(void)

{
  EntityComponent *this;
  
  this = operator_new(0x130);
  EntityComponent(this);
  return this;
}


