/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00335368
 * Function: Caver::ShadowComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ShadowComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ShadowComponent::ValueForBindedProperty(int) */

void __thiscall Caver::ShadowComponent::ValueForBindedProperty(ShadowComponent *this,int param_1)

{
  BindingValue *this_00;
  
  this_00 = (BindingValue *)(this + -0x10);
  if (param_1 == 2) {
    BindingValue::ValueWithVector3((BindingValue *)(this + 0x74),(Vector3 *)0x2);
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      BindingValue::ValueWithFloat(this_00,*(float *)(this + 0x6c));
      return;
    }
    Component::ValueForBindedProperty((int)this_00);
    return;
  }
  BindingValue::ValueWithFloat(this_00,*(float *)(this + 0x70));
  return;
}


