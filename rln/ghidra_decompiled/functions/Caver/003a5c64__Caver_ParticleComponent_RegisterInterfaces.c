/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a5c64
 * Function: Caver::ParticleComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ParticleComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ParticleComponent::RegisterInterfaces(ParticleComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6510);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


