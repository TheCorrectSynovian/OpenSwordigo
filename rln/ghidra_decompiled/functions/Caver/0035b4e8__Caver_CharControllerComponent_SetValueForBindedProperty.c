/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035b4e8
 * Function: Caver::CharControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(CharControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::CharControllerComponent::SetValueForBindedProperty
          (CharControllerComponent *this,int param_1,BindingValue *param_2)

{
  switch(param_1) {
  case 0x11:
    *(undefined4 *)(this + 0x26c) = **(undefined4 **)(param_2 + 8);
    return;
  case 0x12:
    *(undefined4 *)(this + 0x268) = **(undefined4 **)(param_2 + 8);
    return;
  case 0x13:
    *(undefined4 *)(this + 0x274) = **(undefined4 **)(param_2 + 8);
    return;
  case 0x14:
    *(undefined4 *)(this + 0x280) = **(undefined4 **)(param_2 + 8);
    return;
  case 0x15:
    *(undefined4 *)(this + 0x284) = **(undefined4 **)(param_2 + 8);
    return;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
    return;
  }
}


