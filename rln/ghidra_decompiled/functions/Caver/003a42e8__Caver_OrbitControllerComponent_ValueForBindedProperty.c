/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a42e8
 * Function: Caver::OrbitControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(OrbitControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrbitControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::OrbitControllerComponent::ValueForBindedProperty(OrbitControllerComponent *this,int param_1)

{
  if (param_1 == 2) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x8c));
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      BindingValue::ValueWithVector3((BindingValue *)(this + 0x7c),(Vector3 *)0x0);
      return;
    }
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x88) * DAT_00684000);
  return;
}


