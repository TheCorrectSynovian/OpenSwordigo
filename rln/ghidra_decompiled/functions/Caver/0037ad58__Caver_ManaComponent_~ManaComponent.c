/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037ad58
 * Function: Caver::ManaComponent::~ManaComponent
 * Signature: undefined __thiscall ~ManaComponent(ManaComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaComponent::~ManaComponent() */

void __thiscall Caver::ManaComponent::~ManaComponent(ManaComponent *this)

{
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


