/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003404b8
 * Function: Caver::TransformComponent::~TransformComponent
 * Signature: undefined __thiscall ~TransformComponent(TransformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformComponent::~TransformComponent() */

void __thiscall Caver::TransformComponent::~TransformComponent(TransformComponent *this)

{
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


