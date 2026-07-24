/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003813ac
 * Function: Caver::PhysicsPlatformComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(PhysicsPlatformComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::PhysicsPlatformComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::PhysicsPlatformComponent::SetValueForBindedProperty
          (PhysicsPlatformComponent *this,int param_1,BindingValue *param_2)

{
  switch(param_1) {
  case 0:
    *(undefined4 *)(this + 0x84) = **(undefined4 **)(param_2 + 8);
    return;
  case 1:
    *(undefined4 *)(this + 0x88) = **(undefined4 **)(param_2 + 8);
    return;
  case 2:
    *(undefined4 *)(this + 0x8c) = **(undefined4 **)(param_2 + 8);
    return;
  case 3:
    *(float *)(this + 0x90) = **(float **)(param_2 + 8) * DAT_00684004;
    return;
  default:
    Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
    return;
  }
}


