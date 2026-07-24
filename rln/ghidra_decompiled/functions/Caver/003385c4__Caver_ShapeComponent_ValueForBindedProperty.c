/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003385c4
 * Function: Caver::ShapeComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ShapeComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::ValueForBindedProperty(int) */

void __thiscall Caver::ShapeComponent::ValueForBindedProperty(ShapeComponent *this,int param_1)

{
  switch(param_1) {
  case 100:
    BindingValue::ValueWithString
              ((BindingValue *)(&DAT_007e8ac0 + *(int *)(this + 0x70)),
               (string *)(ulong)(uint)param_1);
    return;
  case 0x65:
  case 0x69:
    BindingValue::ValueWithFloat((BindingValue *)this,**(float **)(this + 0x78));
    return;
  case 0x66:
    BindingValue::ValueWithFloat
              ((BindingValue *)this,**(float **)(this + 0x78) + (*(float **)(this + 0x78))[2]);
    return;
  case 0x67:
  case 0x6a:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(*(long *)(this + 0x78) + 4));
    return;
  case 0x68:
    BindingValue::ValueWithFloat
              ((BindingValue *)this,
               *(float *)(*(long *)(this + 0x78) + 4) + *(float *)(*(long *)(this + 0x78) + 0xc));
    return;
  case 0x6b:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(*(long *)(this + 0x78) + 8));
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


