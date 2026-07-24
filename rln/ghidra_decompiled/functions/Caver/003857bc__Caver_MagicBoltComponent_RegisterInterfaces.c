/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003857bc
 * Function: Caver::MagicBoltComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(MagicBoltComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::MagicBoltComponent::RegisterInterfaces(MagicBoltComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4fd0);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6868);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


