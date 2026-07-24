/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b41c8
 * Function: Caver::ElevatorControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ElevatorControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ElevatorControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::ElevatorControllerComponent::SetValueForBindedProperty
          (ElevatorControllerComponent *this,int param_1,BindingValue *param_2)

{
  if (param_1 == 1) {
    *(undefined4 *)(this + 0x88) = **(undefined4 **)(param_2 + 8);
    return;
  }
  Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  return;
}


