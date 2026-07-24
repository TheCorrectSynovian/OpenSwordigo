/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395dc8
 * Function: Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ChargingMonsterControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty(int, Caver::BindingValue
   const&) */

void __thiscall
Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty
          (ChargingMonsterControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 0x68) {
    *(undefined4 *)(this + 300) = **(undefined4 **)(param_2 + 8);
    return;
  }
  if (param_1 == 0x67) {
    *(undefined4 *)(this + 0x128) = **(undefined4 **)(param_2 + 8);
    return;
  }
  MonsterControllerComponent::SetValueForBindedProperty
            ((MonsterControllerComponent *)this,param_1,param_2);
  return;
}


