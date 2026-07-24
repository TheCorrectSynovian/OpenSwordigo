/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066a6a8
 * Function: FUN_0066a6a8
 * Signature: undefined FUN_0066a6a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066a6a8(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined1 auStack_8 [8];
  
  lVar4 = *param_1;
  lVar6 = *param_2;
  if (lVar4 != lVar6) {
    if (*(int *)(lVar6 + -8) < 0) {
      lVar6 = FUN_0066a3f4((undefined8 *)(lVar6 + -0x18),auStack_8,0);
      lVar4 = *param_1;
    }
    else if ((undefined8 *)(lVar6 + -0x18) != &DAT_007fd2e0) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        *(int *)(lVar6 + -8) = *(int *)(lVar6 + -8) + 1;
      }
      else {
        piVar5 = (int *)(lVar6 + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar4 = *param_1;
      }
    }
    if ((undefined8 *)(lVar4 + -0x18) != &DAT_007fd2e0) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar3 = *(int *)(lVar4 + -8);
        *(int *)(lVar4 + -8) = iVar3 + -1;
      }
      else {
        piVar5 = (int *)(lVar4 + -8);
        do {
          iVar3 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar3 < 1) {
        operator_delete((undefined8 *)(lVar4 + -0x18));
      }
    }
    *param_1 = lVar6;
  }
  return param_1;
}


