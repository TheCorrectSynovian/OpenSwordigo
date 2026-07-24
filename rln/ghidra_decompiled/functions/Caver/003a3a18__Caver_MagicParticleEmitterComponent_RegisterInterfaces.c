/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3a18
 * Function: Caver::MagicParticleEmitterComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(MagicParticleEmitterComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicParticleEmitterComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::MagicParticleEmitterComponent::RegisterInterfaces
          (MagicParticleEmitterComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5628);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5968);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


