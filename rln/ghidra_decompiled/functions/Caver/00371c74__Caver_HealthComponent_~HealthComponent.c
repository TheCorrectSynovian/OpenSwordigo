/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00371c74
 * Function: Caver::HealthComponent::~HealthComponent
 * Signature: undefined __thiscall ~HealthComponent(HealthComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::~HealthComponent() */

void __thiscall Caver::HealthComponent::~HealthComponent(HealthComponent *this)

{
  ~HealthComponent(this);
  operator_delete(this);
  return;
}


