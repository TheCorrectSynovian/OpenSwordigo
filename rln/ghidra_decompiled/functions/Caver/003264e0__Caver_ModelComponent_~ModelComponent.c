/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003264e0
 * Function: Caver::ModelComponent::~ModelComponent
 * Signature: undefined __thiscall ~ModelComponent(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::~ModelComponent() */

void __thiscall Caver::ModelComponent::~ModelComponent(ModelComponent *this)

{
  ~ModelComponent(this);
  operator_delete(this);
  return;
}


