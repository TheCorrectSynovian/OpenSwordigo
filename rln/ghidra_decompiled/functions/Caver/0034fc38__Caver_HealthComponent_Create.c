/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fc38
 * Function: Caver::HealthComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::Create() */

HealthComponent * Caver::HealthComponent::Create(void)

{
  HealthComponent *this;
  
  this = operator_new(200);
  HealthComponent(this);
  return this;
}


