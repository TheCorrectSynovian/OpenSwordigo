/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033ecb8
 * Function: Caver::TextureMappingComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureMappingComponent::ValueForBindedProperty(int) */

void Caver::TextureMappingComponent::ValueForBindedProperty(int param_1)

{
  BindingValue *this;
  undefined4 in_w1;
  undefined4 in_register_0000400c;
  undefined4 *in_x8;
  
  this = (BindingValue *)(ulong)(uint)param_1;
  switch(in_w1) {
  case 0:
    BindingValue::ValueWithString(this + 0x70,(string *)CONCAT44(in_register_0000400c,in_w1));
    return;
  case 1:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0x80));
    return;
  case 2:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0x84));
    return;
  case 3:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0x88));
    return;
  default:
    *in_x8 = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    return;
  }
}


