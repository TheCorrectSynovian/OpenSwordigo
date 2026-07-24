/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003706d4
 * Function: Caver::HealthComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::ValueForBindedProperty(int) */

void Caver::HealthComponent::ValueForBindedProperty(int param_1)

{
  BindingValue *this;
  int in_w1;
  string *in_x2;
  
  this = (BindingValue *)(ulong)(uint)param_1;
  switch(in_w1) {
  case 0:
    BindingValue::ValueWithInt((BindingValue *)(ulong)*(uint *)(this + 0x7c),in_w1);
    return;
  case 1:
    BindingValue::ValueWithInt
              ((BindingValue *)(ulong)*(uint *)(this + 0x88),*(uint *)(this + 0x88) * 8 + 0x7e8b98,
               in_x2);
    return;
  case 2:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0x8c));
    return;
  case 3:
    BindingValue::ValueWithFloat(this,*(float *)(this + 0x90));
    return;
  default:
    Component::ValueForBindedProperty(param_1);
    return;
  }
}


