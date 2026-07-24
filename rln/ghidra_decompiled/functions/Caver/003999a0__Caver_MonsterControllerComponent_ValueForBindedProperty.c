/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003999a0
 * Function: Caver::MonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MonsterControllerComponent::ValueForBindedProperty
          (MonsterControllerComponent *this,int param_1)

{
  if (param_1 == 3) {
    BindingValue::ValueWithFloat((BindingValue *)(this + -0x10),*(float *)(this + 0xb8));
    return;
  }
  Component::ValueForBindedProperty((int)(BindingValue *)(this + -0x10));
  return;
}


