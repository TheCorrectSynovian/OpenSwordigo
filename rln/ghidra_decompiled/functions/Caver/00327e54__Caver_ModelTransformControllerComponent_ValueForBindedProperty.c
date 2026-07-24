/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00327e54
 * Function: Caver::ModelTransformControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ModelTransformControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelTransformControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::ModelTransformControllerComponent::ValueForBindedProperty
          (ModelTransformControllerComponent *this,int param_1)

{
  float fVar1;
  
  switch(param_1) {
  case 1:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x8c));
    return;
  case 2:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x90));
    return;
  case 3:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x94));
    return;
  case 4:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x98));
    return;
  case 5:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x9c));
    return;
  case 6:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xa0));
    return;
  case 7:
    fVar1 = *(float *)(this + 0xa4);
    break;
  case 8:
    fVar1 = *(float *)(this + 0xa8);
    break;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
  BindingValue::ValueWithFloat((BindingValue *)this,fVar1 * DAT_00684000);
  return;
}


