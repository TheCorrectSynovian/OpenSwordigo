/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395dfc
 * Function: Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ChargingMonsterControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty
          (ChargingMonsterControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 0x68) {
    *(undefined4 *)(this + 0x11c) = **(undefined4 **)(param_2 + 8);
    return;
  }
  if (param_1 == 0x67) {
    *(undefined4 *)(this + 0x118) = **(undefined4 **)(param_2 + 8);
    return;
  }
  MonsterControllerComponent::SetValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1,param_2);
  return;
}


