/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00388d60
 * Function: Caver::MagicExplosionComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(MagicExplosionComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::MagicExplosionComponent::RegisterInterfaces
          (MagicExplosionComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7a68);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


