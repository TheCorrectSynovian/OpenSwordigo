/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4324
 * Function: Caver::OrbitControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(OrbitControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::OrbitControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::OrbitControllerComponent::ValueForBindedProperty(OrbitControllerComponent *this,int param_1)

{
  BindingValue *this_00;
  
  this_00 = (BindingValue *)(this + -0x10);
  if (param_1 == 2) {
    BindingValue::ValueWithFloat(this_00,*(float *)(this + 0x7c));
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      BindingValue::ValueWithVector3((BindingValue *)(this + 0x6c),(Vector3 *)0x0);
      return;
    }
    Component::ValueForBindedProperty((int)this_00);
    return;
  }
  BindingValue::ValueWithFloat(this_00,*(float *)(this + 0x78) * DAT_00684000);
  return;
}


