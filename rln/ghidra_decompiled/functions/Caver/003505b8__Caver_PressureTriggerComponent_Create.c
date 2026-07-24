/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003505b8
 * Function: Caver::PressureTriggerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::Create() */

PressureTriggerComponent * Caver::PressureTriggerComponent::Create(void)

{
  PressureTriggerComponent *this;
  
  this = operator_new(0xe0);
  PressureTriggerComponent(this);
  return this;
}


