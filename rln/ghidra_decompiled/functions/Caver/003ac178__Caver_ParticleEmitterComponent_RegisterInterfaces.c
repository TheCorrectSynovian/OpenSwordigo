/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac178
 * Function: Caver::ParticleEmitterComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ParticleEmitterComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ParticleEmitterComponent::RegisterInterfaces
          (ParticleEmitterComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5968);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


