/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039998c
 * Function: Caver::MonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MonsterControllerComponent::ValueForBindedProperty
          (MonsterControllerComponent *this,int param_1)

{
  if (param_1 == 3) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 200));
    return;
  }
  Component::ValueForBindedProperty((int)this);
  return;
}


