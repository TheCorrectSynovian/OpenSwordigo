/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032de24
 * Function: Caver::OverlayTextComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(OverlayTextComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::OverlayTextComponent::SetValueForBindedProperty
          (OverlayTextComponent *this,int param_1,BindingValue *param_2)

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
  switch(param_1) {
  case 100:
    FUN_0066a528(local_38,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(this + 0x70,local_38);
    this[0x80] = (OverlayTextComponent)0x1;
    puVar4 = (undefined *)(local_38[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) break;
    piVar5 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_0032df84:
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
    goto LAB_0032df90;
  case 0x65:
    *(undefined4 *)(this + 0x78) = **(undefined4 **)(param_2 + 8);
    break;
  case 0x66:
    *(undefined4 *)(this + 0x7c) = **(undefined4 **)(param_2 + 8);
    break;
  case 0x67:
    FUN_0066a528(local_38,*(undefined8 *)(param_2 + 8));
    FUN_0066a6a8(this + 0x90,local_38);
    this[0xa8] = (OverlayTextComponent)0x1;
    puVar4 = (undefined *)(local_38[0] + -0x18);
    if (puVar4 == PTR_DAT_007e5de8) break;
    piVar5 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0032df84;
    do {
      iVar6 = *piVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0032df90:
    if (iVar6 < 1) {
      operator_delete(puVar4);
    }
    break;
  case 0x68:
    *(undefined4 *)(this + 0x98) = **(undefined4 **)(param_2 + 8);
    break;
  case 0x69:
    *(undefined4 *)(this + 0x9c) = **(undefined4 **)(param_2 + 8);
    break;
  default:
    OverlayComponent::SetValueForBindedProperty((int)this,(BindingValue *)(ulong)(uint)param_1);
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


