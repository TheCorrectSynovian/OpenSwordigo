/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b4188
 * Function: Caver::ElevatorControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ElevatorControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ElevatorControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::ElevatorControllerComponent::ValueForBindedProperty
          (ElevatorControllerComponent *this,int param_1)

{
  string *in_x2;
  
  if (param_1 == 1) {
    BindingValue::ValueWithInt
              ((BindingValue *)(long)*(int *)(this + 0x88),
               (int)((long)*(int *)(this + 0x88) << 3) + 0x7e8be0,in_x2);
    return;
  }
  Component::ValueForBindedProperty((int)this + -0x10);
  return;
}


