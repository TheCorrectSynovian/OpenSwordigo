/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f6c8
 * Function: Caver::EntityInfoComponent::~EntityInfoComponent
 * Signature: undefined __thiscall ~EntityInfoComponent(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::~EntityInfoComponent() */

void __thiscall Caver::EntityInfoComponent::~EntityInfoComponent(EntityInfoComponent *this)

{
  ~EntityInfoComponent(this);
  operator_delete(this);
  return;
}


