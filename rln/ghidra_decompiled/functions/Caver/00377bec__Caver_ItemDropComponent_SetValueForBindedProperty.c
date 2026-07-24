/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00377bec
 * Function: Caver::ItemDropComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ItemDropComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::ItemDropComponent::SetValueForBindedProperty
          (ItemDropComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == 1) {
    this[0x71] = **(ItemDropComponent **)(param_2 + 8);
    goto LAB_00377ce8;
  }
  if (param_1 == 0) {
    this[0x70] = **(ItemDropComponent **)(param_2 + 8);
    goto LAB_00377ce8;
  }
  if (param_1 < 4) {
switchD_00377c80_default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
    goto LAB_00377ce8;
  }
  iVar6 = (param_1 + -4) / 5;
  switch(param_1 + iVar6 * -5) {
  case 4:
    FUN_0066a528(local_48,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(*(long *)(this + 0x90) + (long)iVar6 * 0x20,local_48);
    puVar4 = (undefined *)(local_48[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) break;
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00377dc0:
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
    goto LAB_00377dcc;
  case 5:
    FUN_0066a528(local_48,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(*(long *)(this + 0x90) + (long)iVar6 * 0x20 + 8,local_48);
    puVar4 = (undefined *)(local_48[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) break;
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00377dc0;
    do {
      iVar6 = *piVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00377dcc:
    if (iVar6 < 1) {
      operator_delete(puVar4);
    }
    break;
  case 6:
    *(undefined4 *)(*(long *)(this + 0x90) + (long)iVar6 * 0x20 + 0x10) =
         **(undefined4 **)(param_2 + 8);
    break;
  case 7:
    *(undefined4 *)(*(long *)(this + 0x90) + (long)iVar6 * 0x20 + 0x14) =
         **(undefined4 **)(param_2 + 8);
    break;
  case 8:
    *(undefined4 *)(*(long *)(this + 0x90) + (long)iVar6 * 0x20 + 0x18) =
         **(undefined4 **)(param_2 + 8);
    break;
  default:
    goto switchD_00377c80_default;
  }
LAB_00377ce8:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


