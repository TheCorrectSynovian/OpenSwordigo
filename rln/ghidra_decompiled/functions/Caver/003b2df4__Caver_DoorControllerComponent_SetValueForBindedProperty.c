/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b2df4
 * Function: Caver::DoorControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(DoorControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::DoorControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::DoorControllerComponent::SetValueForBindedProperty
          (DoorControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 4) {
    SetOpen(this + -0x10,*(bool *)*(undefined8 *)(param_2 + 8));
    return;
  }
  Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


