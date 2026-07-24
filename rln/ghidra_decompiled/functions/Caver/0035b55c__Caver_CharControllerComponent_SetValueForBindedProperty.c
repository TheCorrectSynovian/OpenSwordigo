/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035b55c
 * Function: Caver::CharControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(CharControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::CharControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::CharControllerComponent::SetValueForBindedProperty
          (CharControllerComponent *this,int param_1,BindingValue *param_2)

{
  switch(param_1) {
  case 0x11:
    *(undefined4 *)(this + 0x25c) = **(undefined4 **)(param_2 + 8);
    return;
  case 0x12:
    *(undefined4 *)(this + 600) = **(undefined4 **)(param_2 + 8);
    return;
  case 0x13:
    *(undefined4 *)(this + 0x264) = **(undefined4 **)(param_2 + 8);
    return;
  case 0x14:
    *(undefined4 *)(this + 0x270) = **(undefined4 **)(param_2 + 8);
    return;
  case 0x15:
    *(undefined4 *)(this + 0x274) = **(undefined4 **)(param_2 + 8);
    return;
  default:
    Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
    return;
  }
}


