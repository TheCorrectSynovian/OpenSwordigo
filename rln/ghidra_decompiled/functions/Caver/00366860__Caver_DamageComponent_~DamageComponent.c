/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366860
 * Function: Caver::DamageComponent::~DamageComponent
 * Signature: undefined __thiscall ~DamageComponent(DamageComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::~DamageComponent() */

void __thiscall Caver::DamageComponent::~DamageComponent(DamageComponent *this)

{
  ~DamageComponent(this);
  operator_delete(this);
  return;
}


