/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336c6c
 * Function: Caver::ShadowVolumeComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ShadowVolumeComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowVolumeComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ShadowVolumeComponent::RegisterInterfaces
          (ShadowVolumeComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5cb8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


