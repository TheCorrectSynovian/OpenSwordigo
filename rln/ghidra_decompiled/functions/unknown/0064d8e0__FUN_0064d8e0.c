/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d8e0
 * Function: FUN_0064d8e0
 * Signature: undefined FUN_0064d8e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064d8e0(void *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar2 = *(int *)((long)param_1 + 0x10);
    *(int *)((long)param_1 + 0x10) = iVar2 + -1;
  }
  else {
    piVar1 = (int *)((long)param_1 + 0x10);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar2 < 1) {
    operator_delete(param_1);
    return;
  }
  return;
}


