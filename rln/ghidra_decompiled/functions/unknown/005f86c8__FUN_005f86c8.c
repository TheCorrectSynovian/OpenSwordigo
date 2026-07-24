/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f86c8
 * Function: FUN_005f86c8
 * Signature: undefined FUN_005f86c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f86c8(long *param_1)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*param_1 == 0) {
    pbVar2 = (byte *)(*(code *)param_1[2])(param_1[4],param_1[3],&local_30);
    if ((pbVar2 == (byte *)0x0) || (local_30 == 0)) {
      uVar3 = 0xffffffff;
      goto LAB_005f871c;
    }
    *param_1 = local_30;
    param_1[1] = (long)pbVar2;
  }
  else {
    pbVar2 = (byte *)param_1[1];
  }
  uVar3 = (ulong)*pbVar2;
LAB_005f871c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


