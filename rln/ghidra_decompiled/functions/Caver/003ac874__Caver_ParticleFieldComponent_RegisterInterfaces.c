/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac874
 * Function: Caver::ParticleFieldComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ParticleFieldComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleFieldComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ParticleFieldComponent::RegisterInterfaces
          (ParticleFieldComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e77f8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


