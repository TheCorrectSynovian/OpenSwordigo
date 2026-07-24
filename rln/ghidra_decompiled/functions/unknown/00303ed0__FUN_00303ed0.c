/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00303ed0
 * Function: FUN_00303ed0
 * Signature: undefined FUN_00303ed0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00303ed0(void *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar4 = *(int *)((long)param_1 + 0x10);
    *(int *)((long)param_1 + 0x10) = iVar4 + -1;
  }
  else {
    piVar1 = (int *)((long)param_1 + 0x10);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (0 < iVar4) {
    return;
  }
  operator_delete(param_1);
  return;
}


