/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003920e8
 * Function: Caver::AttackComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(AttackComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::ValueForBindedProperty(int) */

void __thiscall Caver::AttackComponent::ValueForBindedProperty(AttackComponent *this,int param_1)

{
  switch(param_1) {
  case 4:
    BindingValue::ValueWithProgram((BindingValue *)(this + 0xd0),(Program *)(ulong)(uint)param_1);
    return;
  case 5:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x104));
    return;
  case 6:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x108));
    return;
  case 7:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x114));
    return;
  case 8:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x118));
    return;
  case 9:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x11c));
    return;
  case 10:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x120));
    return;
  case 0xb:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x128));
    return;
  case 0xc:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 300));
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


