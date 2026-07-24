/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003be2e0
 * Function: Caver::GroundMeshGeneratorComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int) */

void Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int param_1)

{
  BindingValue *this;
  int in_w1;
  string *in_x2;
  
  this = (BindingValue *)(ulong)(uint)param_1;
  switch(in_w1) {
  case 4:
    BindingValue::ValueWithInt
              ((BindingValue *)(long)*(int *)(this + 0xd0),
               (int)PTR_groundMeshTypeStrings_007e5d28 + *(int *)(this + 0xd0) * 8,in_x2);
    return;
  case 5:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0xd4));
    return;
  case 6:
    BindingValue::ValueWithInt((BindingValue *)(ulong)*(uint *)(this + 0xd8),in_w1);
    return;
  case 7:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0xdc));
    return;
  case 8:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0xe0));
    return;
  case 9:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0xe4));
    return;
  case 10:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0xe8));
    return;
  default:
    Component::ValueForBindedProperty(param_1);
    return;
  }
}


