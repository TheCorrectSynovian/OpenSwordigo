/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003812e4
 * Function: Caver::PhysicsPlatformComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(PhysicsPlatformComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsPlatformComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::PhysicsPlatformComponent::ValueForBindedProperty(PhysicsPlatformComponent *this,int param_1)

{
  switch(param_1) {
  case 0:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x94));
    return;
  case 1:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x98));
    return;
  case 2:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0x9c));
    return;
  case 3:
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xa0) * DAT_00684000);
    return;
  default:
    Component::ValueForBindedProperty((int)this);
    return;
  }
}


