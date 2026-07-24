/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00322be0
 * Function: Caver::LightComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(LightComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::ValueForBindedProperty(int) */

void __thiscall Caver::LightComponent::ValueForBindedProperty(LightComponent *this,int param_1)

{
  Vector3 *pVVar1;
  
  pVVar1 = (Vector3 *)(ulong)(uint)param_1;
  switch(pVVar1) {
  case (Vector3 *)0x0:
    BindingValue::ValueWithString
              ((BindingValue *)(PTR_typeStrings_007e6870 + (long)*(int *)(this + 0x70) * 8),
               (string *)pVVar1);
    return;
  case (Vector3 *)0x1:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x74));
    return;
  case (Vector3 *)0x2:
    BindingValue::ValueWithFloatColor((BindingValue *)(this + 0x78),(FloatColor *)pVVar1);
    return;
  case (Vector3 *)0x3:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x94));
    return;
  case (Vector3 *)0x4:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x98));
    return;
  case (Vector3 *)0x5:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x9c));
    return;
  case (Vector3 *)0x6:
    BindingValue::ValueWithVector3((BindingValue *)(this + 0xa0),pVVar1);
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


