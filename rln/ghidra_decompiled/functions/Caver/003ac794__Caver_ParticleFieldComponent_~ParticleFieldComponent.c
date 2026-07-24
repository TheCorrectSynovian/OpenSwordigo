/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac794
 * Function: Caver::ParticleFieldComponent::~ParticleFieldComponent
 * Signature: undefined __thiscall ~ParticleFieldComponent(ParticleFieldComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleFieldComponent::~ParticleFieldComponent() */

void __thiscall Caver::ParticleFieldComponent::~ParticleFieldComponent(ParticleFieldComponent *this)

{
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


