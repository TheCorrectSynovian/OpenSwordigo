/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066a354
 * Function: FUN_0066a354
 * Signature: undefined FUN_0066a354(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066a354(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != &DAT_007fd2e0) {
                    /* try { // try from 0066a36c to 0076a41f has its CatchHandler @ 0066a36c
                       catch() { ... } // from try @ 0066a36c with catch @ 0066a36c
                       catch() { ... } // from try @ 0066a424 with catch @ 0066a36c */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(param_1 + 2);
      *(int *)(param_1 + 2) = iVar4 + -1;
    }
    else {
      piVar1 = (int *)(param_1 + 2);
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
    if (iVar4 < 1) {
      operator_delete(param_1);
      return;
    }
  }
  return;
}


