/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00365c94
 * Function: Caver::DamageComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(DamageComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::DamageComponent::SetValueForBindedProperty
          (DamageComponent *this,int param_1,BindingValue *param_2)

{
  int iVar1;
  
  switch(param_1) {
  case 0:
    *(undefined4 *)(this + 0xa4) = **(undefined4 **)(param_2 + 8);
    return;
  case 1:
    break;
  case 2:
    *(undefined4 *)(this + 0xb4) = **(undefined4 **)(param_2 + 8);
    return;
  case 3:
    *(undefined4 *)(this + 0xb8) = **(undefined4 **)(param_2 + 8);
    return;
  case 4:
    this[0xd0] = **(DamageComponent **)(param_2 + 8);
    return;
  case 5:
    *(undefined4 *)(this + 200) = **(undefined4 **)(param_2 + 8);
    return;
  case 6:
    *(undefined4 *)(this + 0xcc) = **(undefined4 **)(param_2 + 8);
    return;
  case 7:
    this[0xa0] = **(DamageComponent **)(param_2 + 8);
    return;
  case 8:
    this[0xd1] = **(DamageComponent **)(param_2 + 8);
    return;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
    return;
  }
  iVar1 = 0;
  if (*(int *)(this + 0xa4) <= **(int **)(param_2 + 8)) {
    iVar1 = **(int **)(param_2 + 8) - *(int *)(this + 0xa4);
  }
  *(int *)(this + 0xa8) = iVar1;
  return;
}


