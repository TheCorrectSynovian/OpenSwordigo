/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a5b50
 * Function: Caver::ParticleComponent::~ParticleComponent
 * Signature: undefined __thiscall ~ParticleComponent(ParticleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::~ParticleComponent() */

void __thiscall Caver::ParticleComponent::~ParticleComponent(ParticleComponent *this)

{
  ~ParticleComponent(this);
  operator_delete(this);
  return;
}


