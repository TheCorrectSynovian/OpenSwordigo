/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037072c
 * Function: Caver::HealthComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(HealthComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::HealthComponent::SetValueForBindedProperty
          (HealthComponent *this,int param_1,BindingValue *param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = **(undefined4 **)(param_2 + 8);
    *(undefined4 *)(this + 0x7c) = uVar1;
    *(undefined4 *)(this + 0x80) = uVar1;
    return;
  case 1:
    *(undefined4 *)(this + 0x88) = **(undefined4 **)(param_2 + 8);
    return;
  case 2:
    *(undefined4 *)(this + 0x8c) = **(undefined4 **)(param_2 + 8);
    return;
  case 3:
    *(undefined4 *)(this + 0x90) = **(undefined4 **)(param_2 + 8);
    return;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
    return;
  }
}


