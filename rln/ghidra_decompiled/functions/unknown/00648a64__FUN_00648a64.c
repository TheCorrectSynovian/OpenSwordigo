/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00648a64
 * Function: FUN_00648a64
 * Signature: undefined FUN_00648a64(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00648a64(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined1 auStack_18 [16];
  undefined *local_8;
  
  local_8 = PTR_DAT_007e6438 + 0x18;
  *param_1 = (long)local_8;
  uVar6 = *(ulong *)(param_2 + 0x38);
  if (uVar6 == 0) {
    FUN_0066edf4(param_1,param_2 + 0x58);
    return param_1;
  }
  uVar8 = *(ulong *)(param_2 + 0x28);
  uVar3 = *(ulong *)(param_2 + 0x30);
  if (uVar8 < uVar6) {
    if (uVar6 != uVar3) {
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665330("basic_string::_S_construct null not valid");
      }
      local_8 = (undefined *)FUN_00644b60(uVar3,uVar6,auStack_18);
    }
    FUN_0066edf4(param_1,&local_8);
    puVar4 = local_8 + -0x18;
    if (puVar4 == PTR_DAT_007e6438) {
      return param_1;
    }
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
      piVar7 = (int *)(local_8 + -8);
      do {
        iVar5 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00648b70;
    }
  }
  else {
    if (uVar8 != uVar3) {
      if ((uVar3 == 0) && (uVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00665330("basic_string::_S_construct null not valid");
      }
      local_8 = (undefined *)FUN_00644b60(uVar3,uVar8,auStack_18);
    }
    FUN_0066edf4(param_1,&local_8);
    puVar4 = local_8 + -0x18;
    if (puVar4 == PTR_DAT_007e6438) {
      return param_1;
    }
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
      piVar7 = (int *)(local_8 + -8);
      do {
        iVar5 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00648b70;
    }
  }
  iVar5 = *(int *)(local_8 + -8);
  *(int *)(local_8 + -8) = iVar5 + -1;
LAB_00648b70:
  if (iVar5 < 1) {
    operator_delete(puVar4);
  }
  return param_1;
}


