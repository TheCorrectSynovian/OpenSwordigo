/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ad218
 * Function: Caver::ParticleObjectComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ParticleObjectComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleObjectComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ParticleObjectComponent::RegisterInterfaces
          (ParticleObjectComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4e50);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


