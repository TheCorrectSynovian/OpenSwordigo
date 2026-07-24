/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4428
 * Function: Caver::OrbitControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(OrbitControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::OrbitControllerComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::OrbitControllerComponent::SetValueForBindedProperty
          (OrbitControllerComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 2) {
    *(undefined4 *)(this + 0x7c) = **(undefined4 **)(param_2 + 8);
  }
  else if (param_1 == 1) {
    *(float *)(this + 0x78) = **(float **)(param_2 + 8) * DAT_00684004;
  }
  else if (param_1 == 0) {
    BindingValue::Vector3Value();
    local_38 = local_48;
    local_30 = local_40;
    Vector3::Normalize((Vector3 *)&local_38);
    *(undefined8 *)(this + 0x6c) = local_38;
    *(undefined4 *)(this + 0x74) = local_30;
  }
  else {
    Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


