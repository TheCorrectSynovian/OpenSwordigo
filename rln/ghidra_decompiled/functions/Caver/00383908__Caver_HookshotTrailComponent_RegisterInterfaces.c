/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00383908
 * Function: Caver::HookshotTrailComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(HookshotTrailComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HookshotTrailComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::HookshotTrailComponent::RegisterInterfaces
          (HookshotTrailComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6500);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6330);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


