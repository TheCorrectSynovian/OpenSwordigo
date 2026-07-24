/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b2d14
 * Function: Caver::DoorControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(DoorControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::DoorControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::DoorControllerComponent::ValueForBindedProperty(DoorControllerComponent *this,int param_1)

{
  if (param_1 == 4) {
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0xc0],true);
    return;
  }
  Component::ValueForBindedProperty((int)this + -0x10);
  return;
}


