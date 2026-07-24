/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341eb0
 * Function: Caver::Component::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Component * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall Caver::Component::SaveToProtobufMessage(Component *this,Component *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int *piVar9;
  int iVar10;
  long local_48 [2];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  (**(code **)(*(long *)this + 0x100))(local_48);
  puVar6 = PTR__default_class_name__007e5328;
  plVar8 = *(long **)(param_1 + 0x40);
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
  if (plVar8 == (long *)puVar6) {
    plVar8 = operator_new(8);
    *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x40) = plVar8;
  }
  FUN_0066a6a8(plVar8,local_48);
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(this + 0x20);
  *(uint *)(param_1 + 0x58) = uVar1 | 2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  iVar10 = *(int *)(this + 0x24);
  if (iVar10 != 0) {
    *(uint *)(param_1 + 0x58) = uVar1 | 6;
    *(int *)(param_1 + 0x4c) = iVar10;
  }
  if (*(long *)(*(long *)(this + 0x38) + -0x18) != 0) {
    FUN_0066a528(local_48,this + 0x38);
    puVar7 = PTR__default_label__007e6320;
    plVar8 = *(long **)(param_1 + 0x50);
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 8;
    if (plVar8 == (long *)puVar7) {
      plVar8 = operator_new(8);
      *plVar8 = (long)(puVar6 + 0x18);
      *(long **)(param_1 + 0x50) = plVar8;
    }
    FUN_0066a6a8(plVar8,local_48);
    if ((undefined *)(local_48[0] + -0x18) != puVar6) {
      piVar9 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


