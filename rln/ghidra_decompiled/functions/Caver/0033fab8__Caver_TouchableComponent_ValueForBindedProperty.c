/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033fab8
 * Function: Caver::TouchableComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(TouchableComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::TouchableComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::TouchableComponent::ValueForBindedProperty(TouchableComponent *this,int param_1)

{
  if (param_1 == 1) {
    BindingValue::ValueWithProgram((BindingValue *)(this + 0x70),(Program *)0x1);
    return;
  }
  if (param_1 == 0) {
    BindingValue::ValueWithFloat((BindingValue *)(this + -0x10),*(float *)(this + 0x60));
    return;
  }
  Component::ValueForBindedProperty((int)(BindingValue *)(this + -0x10));
  return;
}


