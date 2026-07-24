/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c2764
 * Function: Caver::WaterMeshComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(WaterMeshComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::WaterMeshComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::WaterMeshComponent::ValueForBindedProperty(WaterMeshComponent *this,int param_1)

{
  if (param_1 == 3) {
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xb0),(FloatColor *)0x3);
    return;
  }
  if (param_1 == 2) {
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xa0),(FloatColor *)0x2);
    return;
  }
  Component::ValueForBindedProperty((int)this + -0x10);
  return;
}


