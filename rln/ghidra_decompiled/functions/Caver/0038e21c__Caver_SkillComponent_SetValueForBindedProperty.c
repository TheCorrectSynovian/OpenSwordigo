/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038e21c
 * Function: Caver::SkillComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SkillComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::SkillComponent::SetValueForBindedProperty
          (SkillComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_1 == 2) {
    BindingValue::Vector2Value();
    *(long *)(this + 0x88) = local_38[0];
  }
  else if (param_1 == 1) {
    FUN_0066a528(local_38,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(this + 0xa0,local_38);
    if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar4 = (int *)(local_38[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar4;
        *piVar4 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete((undefined *)(local_38[0] + -0x18));
      }
    }
  }
  else {
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


