/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b877c
 * Function: Caver::GroundMeshComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(GroundMeshComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GroundMeshComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::GroundMeshComponent::ValueForBindedProperty(GroundMeshComponent *this,int param_1)

{
  if (param_1 == 1) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0xb0],true);
    return;
  }
  if (param_1 == 0) {
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xa0),(FloatColor *)0x0);
    return;
  }
  Component::ValueForBindedProperty((int)this + -0x10);
  return;
}


