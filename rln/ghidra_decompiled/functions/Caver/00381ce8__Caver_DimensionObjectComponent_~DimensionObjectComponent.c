/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381ce8
 * Function: Caver::DimensionObjectComponent::~DimensionObjectComponent
 * Signature: undefined __thiscall ~DimensionObjectComponent(DimensionObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionObjectComponent::~DimensionObjectComponent() */

void __thiscall
Caver::DimensionObjectComponent::~DimensionObjectComponent(DimensionObjectComponent *this)

{
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


