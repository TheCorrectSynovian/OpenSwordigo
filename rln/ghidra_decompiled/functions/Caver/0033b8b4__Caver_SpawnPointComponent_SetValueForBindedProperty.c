/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033b8b4
 * Function: Caver::SpawnPointComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SpawnPointComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpawnPointComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::SpawnPointComponent::SetValueForBindedProperty
          (SpawnPointComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_1 == 1) {
    BindingValue::Vector3Value();
    *(undefined8 *)(this + 0x74) = local_38;
    *(undefined4 *)(this + 0x7c) = local_30;
  }
  else if (param_1 == 0) {
    *(undefined4 *)(this + 0x70) = **(undefined4 **)(param_2 + 8);
  }
  else {
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


