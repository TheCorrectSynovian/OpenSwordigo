/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f704
 * Function: Caver::EntityInfoComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::Create() */

EntityInfoComponent * Caver::EntityInfoComponent::Create(void)

{
  EntityInfoComponent *this;
  
  this = operator_new(0x98);
  EntityInfoComponent(this);
  return this;
}


