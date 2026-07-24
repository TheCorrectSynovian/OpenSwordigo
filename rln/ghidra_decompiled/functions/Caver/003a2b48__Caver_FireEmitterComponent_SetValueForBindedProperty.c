/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a2b48
 * Function: Caver::FireEmitterComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(FireEmitterComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireEmitterComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::FireEmitterComponent::SetValueForBindedProperty
          (FireEmitterComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  switch(param_1) {
  case 2:
    BindingValue::Vector3Value();
    *(undefined8 *)(this + 0xb4) = local_38;
    *(undefined4 *)(this + 0xbc) = uStack_30;
    break;
  case 3:
    BindingValue::FloatColorValue();
    *(ulong *)(this + 200) = CONCAT44(uStack_2c,uStack_30);
    *(undefined8 *)(this + 0xc0) = local_38;
    break;
  case 4:
    *(undefined4 *)(this + 0xa0) = **(undefined4 **)(param_2 + 8);
    break;
  case 5:
    *(undefined4 *)(this + 0xa4) = **(undefined4 **)(param_2 + 8);
    break;
  case 6:
    BindingValue::Vector3Value();
    *(undefined8 *)(this + 0xa8) = local_38;
    *(undefined4 *)(this + 0xb0) = uStack_30;
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


