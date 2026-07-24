/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395d74
 * Function: Caver::ChargingMonsterControllerComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(ChargingMonsterControllerComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::ChargingMonsterControllerComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::ChargingMonsterControllerComponent::GetEnumValuesForBindedProperty
          (ChargingMonsterControllerComponent *this,int param_1,vector *param_2)

{
  MonsterControllerComponent::GetEnumValuesForBindedProperty
            ((int)this + -0x10,(vector *)(ulong)(uint)param_1);
  return;
}


