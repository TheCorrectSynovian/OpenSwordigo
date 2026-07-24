/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00392db4
 * Function: Caver::AttackComponent::~AttackComponent
 * Signature: undefined __thiscall ~AttackComponent(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::~AttackComponent() */

void __thiscall Caver::AttackComponent::~AttackComponent(AttackComponent *this)

{
  ~AttackComponent(this);
  operator_delete(this);
  return;
}


