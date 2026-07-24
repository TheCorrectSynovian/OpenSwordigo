/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00386840
 * Function: Caver::MagicBombComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(MagicBombComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBombComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::MagicBombComponent::RegisterInterfaces(MagicBombComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6488);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6868);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


