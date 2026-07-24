/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b0850
 * Function: Caver::SimpleGlowComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SimpleGlowComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::SimpleGlowComponent::ValueForBindedProperty(SimpleGlowComponent *this,int param_1)

{
  switch(param_1) {
  case 100:
    BindingValue::ValueWithFloatColor
              ((BindingValue *)(this + 0xa4),(FloatColor *)(ulong)(uint)param_1);
    return;
  case 0x65:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xb4));
    return;
  case 0x66:
    BindingValue::ValueWithInt((BindingValue *)(ulong)*(uint *)(this + 0xb8),param_1);
    return;
  case 0x67:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xc4));
    return;
  case 0x68:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xbc));
    return;
  case 0x69:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xc0));
    return;
  case 0x6a:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xcc));
    return;
  case 0x6b:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xd0));
    return;
  default:
    GlowComponent::ValueForBindedProperty((int)this);
    return;
  }
}


