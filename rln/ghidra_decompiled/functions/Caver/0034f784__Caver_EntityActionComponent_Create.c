/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f784
 * Function: Caver::EntityActionComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::Create() */

EntityActionComponent * Caver::EntityActionComponent::Create(void)

{
  EntityActionComponent *this;
  
  this = operator_new(0xb0);
  EntityActionComponent(this);
  return this;
}


