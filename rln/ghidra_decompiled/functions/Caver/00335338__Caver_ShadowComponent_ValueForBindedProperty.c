/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00335338
 * Function: Caver::ShadowComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ShadowComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::ValueForBindedProperty(int) */

void __thiscall Caver::ShadowComponent::ValueForBindedProperty(ShadowComponent *this,int param_1)

{
  if (param_1 == 2) {
    BindingValue::ValueWithVector3((BindingValue *)(this + 0x84),(Vector3 *)0x2);
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x7c));
      return;
    }
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x80));
  return;
}


