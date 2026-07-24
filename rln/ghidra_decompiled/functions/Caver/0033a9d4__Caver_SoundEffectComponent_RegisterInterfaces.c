/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a9d4
 * Function: Caver::SoundEffectComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(SoundEffectComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SoundEffectComponent::RegisterInterfaces
          (SoundEffectComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7968);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


