/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003812dc
 * Function: Caver::PhysicsPlatformComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(PhysicsPlatformComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::PhysicsPlatformComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::PhysicsPlatformComponent::GetEnumValuesForBindedProperty
          (PhysicsPlatformComponent *this,int param_1,vector *param_2)

{
  Component::GetEnumValuesForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


