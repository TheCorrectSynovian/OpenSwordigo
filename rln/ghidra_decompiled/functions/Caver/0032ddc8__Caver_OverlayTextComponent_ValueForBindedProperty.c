/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032ddc8
 * Function: Caver::OverlayTextComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(OverlayTextComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::OverlayTextComponent::ValueForBindedProperty(OverlayTextComponent *this,int param_1)

{
  switch(param_1) {
  case 100:
    BindingValue::ValueWithString((BindingValue *)(this + 0x70),(string *)(ulong)(uint)param_1);
    return;
  case 0x65:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x78));
    return;
  case 0x66:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x7c));
    return;
  case 0x67:
    BindingValue::ValueWithString((BindingValue *)(this + 0x90),(string *)(ulong)(uint)param_1);
    return;
  case 0x68:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x98));
    return;
  case 0x69:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x9c));
    return;
  default:
    OverlayComponent::ValueForBindedProperty((int)this);
    return;
  }
}


