/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033ed08
 * Function: Caver::TextureMappingComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(TextureMappingComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::TextureMappingComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::TextureMappingComponent::ValueForBindedProperty(TextureMappingComponent *this,int param_1)

{
  undefined4 *in_x8;
  
  switch((string *)(ulong)(uint)param_1) {
  case (string *)0x0:
    BindingValue::ValueWithString((BindingValue *)(this + 0x60),(string *)(ulong)(uint)param_1);
    return;
  case (string *)0x1:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x70));
    return;
  case (string *)0x2:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x74));
    return;
  case (string *)0x3:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x78));
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


