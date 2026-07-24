/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395da0
 * Function: Caver::ChargingMonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ChargingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::ChargingMonsterControllerComponent::ValueForBindedProperty
          (ChargingMonsterControllerComponent *this,int param_1)

{
  BindingValue *this_00;
  
  this_00 = (BindingValue *)(this + -0x10);
  if (param_1 == 0x68) {
    BindingValue::ValueWithFloat(this_00,*(float *)(this + 0x11c));
    return;
  }
  if (param_1 == 0x67) {
    BindingValue::ValueWithFloat(this_00,*(float *)(this + 0x118));
    return;
  }
  MonsterControllerComponent::ValueForBindedProperty((MonsterControllerComponent *)this_00,param_1);
  return;
}


