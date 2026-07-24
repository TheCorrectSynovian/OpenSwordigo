/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00370790
 * Function: Caver::HealthComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(HealthComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::HealthComponent::SetValueForBindedProperty(int, Caver::BindingValue
   const&) */

void __thiscall
Caver::HealthComponent::SetValueForBindedProperty
          (HealthComponent *this,int param_1,BindingValue *param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = **(undefined4 **)(param_2 + 8);
    *(undefined4 *)(this + 0x6c) = uVar1;
    *(undefined4 *)(this + 0x70) = uVar1;
    return;
  case 1:
    *(undefined4 *)(this + 0x78) = **(undefined4 **)(param_2 + 8);
    return;
  case 2:
    *(undefined4 *)(this + 0x7c) = **(undefined4 **)(param_2 + 8);
    return;
  case 3:
    *(undefined4 *)(this + 0x80) = **(undefined4 **)(param_2 + 8);
    return;
  default:
    Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
    return;
  }
}


