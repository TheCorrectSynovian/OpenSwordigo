/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395d7c
 * Function: Caver::ChargingMonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ChargingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::ChargingMonsterControllerComponent::ValueForBindedProperty
          (ChargingMonsterControllerComponent *this,int param_1)

{
  if (param_1 == 0x68) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 300));
    return;
  }
  if (param_1 == 0x67) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x128));
    return;
  }
  MonsterControllerComponent::ValueForBindedProperty((MonsterControllerComponent *)this,param_1);
  return;
}


