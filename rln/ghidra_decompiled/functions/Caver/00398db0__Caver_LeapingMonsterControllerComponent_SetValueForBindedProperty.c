/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398db0
 * Function: Caver::LeapingMonsterControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(LeapingMonsterControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::LeapingMonsterControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::LeapingMonsterControllerComponent::SetValueForBindedProperty
          (LeapingMonsterControllerComponent *this,int param_1,BindingValue *param_2)

{
  MonsterControllerComponent::SetValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1,param_2);
  return;
}


