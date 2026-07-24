/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af4f0
 * Function: Caver::ShatterComponent::~ShatterComponent
 * Signature: undefined __thiscall ~ShatterComponent(ShatterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShatterComponent::~ShatterComponent() */

void __thiscall Caver::ShatterComponent::~ShatterComponent(ShatterComponent *this)

{
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


