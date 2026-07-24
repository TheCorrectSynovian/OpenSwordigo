/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b4168
 * Function: Caver::ElevatorControllerComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::ValueForBindedProperty(int) */

void Caver::ElevatorControllerComponent::ValueForBindedProperty(int param_1)

{
  int in_w1;
  string *in_x2;
  
  if (in_w1 == 1) {
    BindingValue::ValueWithInt
              ((BindingValue *)(long)*(int *)((ulong)(uint)param_1 + 0x98),
               (int)((long)*(int *)((ulong)(uint)param_1 + 0x98) << 3) + 0x7e8be0,in_x2);
    return;
  }
  Component::ValueForBindedProperty(param_1);
  return;
}


