/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c158
 * Function: Caver::ProjectileMonsterControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ProjectileMonsterControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ProjectileMonsterControllerComponent::RegisterInterfaces
          (ProjectileMonsterControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e75c8);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6ba0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


