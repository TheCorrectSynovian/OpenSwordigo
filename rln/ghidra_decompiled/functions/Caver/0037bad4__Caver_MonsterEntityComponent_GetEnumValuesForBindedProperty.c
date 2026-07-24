/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037bad4
 * Function: Caver::MonsterEntityComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(MonsterEntityComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MonsterEntityComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::MonsterEntityComponent::GetEnumValuesForBindedProperty
          (MonsterEntityComponent *this,int param_1,vector *param_2)

{
  EntityComponent::GetEnumValuesForBindedProperty((EntityComponent *)(this + -0x10),param_1,param_2)
  ;
  return;
}


