/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398d98
 * Function: Caver::LeapingMonsterControllerComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(LeapingMonsterControllerComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::LeapingMonsterControllerComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::LeapingMonsterControllerComponent::GetEnumValuesForBindedProperty
          (LeapingMonsterControllerComponent *this,int param_1,vector *param_2)

{
  MonsterControllerComponent::GetEnumValuesForBindedProperty
            ((int)this + -0x10,(vector *)(ulong)(uint)param_1);
  return;
}


