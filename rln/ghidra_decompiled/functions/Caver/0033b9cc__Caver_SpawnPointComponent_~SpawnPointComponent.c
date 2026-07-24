/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033b9cc
 * Function: Caver::SpawnPointComponent::~SpawnPointComponent
 * Signature: undefined __thiscall ~SpawnPointComponent(SpawnPointComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpawnPointComponent::~SpawnPointComponent() */

void __thiscall Caver::SpawnPointComponent::~SpawnPointComponent(SpawnPointComponent *this)

{
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


