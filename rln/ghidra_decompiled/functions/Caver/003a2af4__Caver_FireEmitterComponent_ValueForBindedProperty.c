/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a2af4
 * Function: Caver::FireEmitterComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(FireEmitterComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireEmitterComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::FireEmitterComponent::ValueForBindedProperty(FireEmitterComponent *this,int param_1)

{
  Vector3 *pVVar1;
  
  pVVar1 = (Vector3 *)(ulong)(uint)param_1;
  switch(param_1) {
  case 2:
    BindingValue::ValueWithVector3((BindingValue *)(this + 0xb4),pVVar1);
    return;
  case 3:
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0xc0),(FloatColor *)pVVar1);
    return;
  case 4:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xa0));
    return;
  case 5:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xa4));
    return;
  case 6:
    BindingValue::ValueWithVector3((BindingValue *)(this + 0xa8),pVVar1);
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


