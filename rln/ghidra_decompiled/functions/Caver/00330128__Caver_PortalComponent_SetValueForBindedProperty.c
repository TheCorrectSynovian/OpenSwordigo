/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00330128
 * Function: Caver::PortalComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(PortalComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::PortalComponent::SetValueForBindedProperty
          (PortalComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_1 == 3) {
    this[0x98] = **(PortalComponent **)(param_2 + 8);
    goto LAB_00330220;
  }
  if (param_1 == 2) {
    FUN_0066a528(local_38,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(this + 0x90,local_38);
    puVar4 = (undefined *)(local_38[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) goto LAB_00330220;
    piVar5 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00330240:
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    if (param_1 != 1) {
      Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
      goto LAB_00330220;
    }
    FUN_0066a528(local_38,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(this + 0x88,local_38);
    puVar4 = (undefined *)(local_38[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) goto LAB_00330220;
    piVar5 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00330240;
    do {
      iVar6 = *piVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar6 < 1) {
    operator_delete(puVar4);
  }
LAB_00330220:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


