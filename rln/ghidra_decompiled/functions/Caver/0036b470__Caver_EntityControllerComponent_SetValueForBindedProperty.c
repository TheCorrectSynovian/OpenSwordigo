/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036b470
 * Function: Caver::EntityControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(EntityControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::EntityControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::EntityControllerComponent::SetValueForBindedProperty
          (EntityControllerComponent *this,int param_1,BindingValue *param_2)

{
  switch(param_1) {
  case 3:
    *(undefined4 *)(this + 0xd0) = **(undefined4 **)(param_2 + 8);
    return;
  case 4:
    *(undefined4 *)(this + 0xd4) = **(undefined4 **)(param_2 + 8);
    return;
  case 5:
    *(undefined4 *)(this + 0xd8) = **(undefined4 **)(param_2 + 8);
    return;
  case 6:
    *(undefined4 *)(this + 0xe8) = **(undefined4 **)(param_2 + 8);
    return;
  default:
    Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
    return;
  }
}


