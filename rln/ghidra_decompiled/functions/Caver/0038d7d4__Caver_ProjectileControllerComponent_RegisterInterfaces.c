/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038d7d4
 * Function: Caver::ProjectileControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ProjectileControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ProjectileControllerComponent::RegisterInterfaces
          (ProjectileControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6e68);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


