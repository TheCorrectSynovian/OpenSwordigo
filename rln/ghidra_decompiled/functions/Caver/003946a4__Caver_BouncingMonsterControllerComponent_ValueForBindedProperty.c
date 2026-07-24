/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003946a4
 * Function: Caver::BouncingMonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(BouncingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::BouncingMonsterControllerComponent::ValueForBindedProperty
          (BouncingMonsterControllerComponent *this,int param_1)

{
  if (param_1 == 0x67) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x10c));
    return;
  }
  if (param_1 == 0x66) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x108) * DAT_00684000);
    return;
  }
  MonsterControllerComponent::ValueForBindedProperty((MonsterControllerComponent *)this,param_1);
  return;
}


