/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b2d2c
 * Function: Caver::DoorControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(DoorControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::DoorControllerComponent::SetValueForBindedProperty
          (DoorControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 4) {
    SetOpen(this,*(bool *)*(undefined8 *)(param_2 + 8));
    return;
  }
  Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  return;
}


