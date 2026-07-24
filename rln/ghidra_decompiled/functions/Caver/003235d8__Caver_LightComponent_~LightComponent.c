/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003235d8
 * Function: Caver::LightComponent::~LightComponent
 * Signature: undefined __thiscall ~LightComponent(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::~LightComponent() */

void __thiscall Caver::LightComponent::~LightComponent(LightComponent *this)

{
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


