/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00646688
 * Function: FUN_00646688
 * Signature: undefined FUN_00646688(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00646688(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  lVar5 = param_1[0xb];
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18)) = param_2[3];
  param_1[2] = (long)&PTR_FUN_007da7b0;
  if ((undefined *)(lVar5 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar3 = *(int *)(lVar5 + -8);
      *(int *)(lVar5 + -8) = iVar3 + -1;
    }
    else {
      piVar6 = (int *)(lVar5 + -8);
      do {
        iVar3 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar3 < 1) {
      operator_delete((undefined *)(lVar5 + -0x18));
    }
  }
  param_1[2] = (long)(PTR_DAT_007e6a48 + 0x10);
  FUN_0063c0c8(param_1 + 9);
  lVar4 = param_2[1];
  *param_1 = lVar4;
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18)) = param_2[2];
  return;
}


