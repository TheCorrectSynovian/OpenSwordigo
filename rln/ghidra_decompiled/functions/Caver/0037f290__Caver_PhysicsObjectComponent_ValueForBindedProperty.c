/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f290
 * Function: Caver::PhysicsObjectComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(PhysicsObjectComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::PhysicsObjectComponent::ValueForBindedProperty(PhysicsObjectComponent *this,int param_1)

{
  switch(param_1) {
  case 0:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x70],SUB41(param_1,0));
    return;
  case 1:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xe8) / DAT_0068796c);
    return;
  case 2:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xe0));
    return;
  case 3:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xe4));
    return;
  case 4:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x10c));
    return;
  case 5:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x110));
    return;
  case 6:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xac));
    return;
  case 7:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0xed],SUB41(param_1,0));
    return;
  case 8:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xf0));
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


