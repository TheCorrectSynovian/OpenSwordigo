/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00649c78
 * Function: FUN_00649c78
 * Signature: undefined FUN_00649c78(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00649c78(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  lVar5 = param_1[0xc];
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  param_1[3] = (long)&PTR_FUN_007da9f0;
  if ((undefined *)(lVar5 + -0x18) != PTR_DAT_007e6438) {
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
  param_1[3] = (long)(PTR_DAT_007e6338 + 0x10);
  FUN_0063c0c8(param_1 + 10);
  lVar4 = param_2[1];
  *param_1 = lVar4;
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar4 = param_2[4];
  param_1[2] = lVar4;
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18) + 0x10) = param_2[5];
  lVar4 = param_2[2];
  *param_1 = lVar4;
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18)) = param_2[3];
  return;
}


