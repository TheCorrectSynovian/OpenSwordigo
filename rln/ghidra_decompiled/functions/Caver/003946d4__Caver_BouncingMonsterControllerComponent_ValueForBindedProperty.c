/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003946d4
 * Function: Caver::BouncingMonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(BouncingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::BouncingMonsterControllerComponent::ValueForBindedProperty
          (BouncingMonsterControllerComponent *this,int param_1)

{
  BindingValue *this_00;
  
  this_00 = (BindingValue *)(this + -0x10);
  if (param_1 == 0x67) {
    BindingValue::ValueWithFloat(this_00,*(float *)(this + 0xfc));
    return;
  }
  if (param_1 == 0x66) {
    BindingValue::ValueWithFloat(this_00,*(float *)(this + 0xf8) * DAT_00684000);
    return;
  }
  MonsterControllerComponent::ValueForBindedProperty((MonsterControllerComponent *)this_00,param_1);
  return;
}


