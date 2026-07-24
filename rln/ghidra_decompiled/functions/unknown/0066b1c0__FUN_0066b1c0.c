/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b1c0
 * Function: FUN_0066b1c0
 * Signature: undefined FUN_0066b1c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b1c0(void *param_1)

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
                    /* try { // try from 0066b1d8 to 0076b1db has its CatchHandler @ 0066b1e4 */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
                    /* try { // try from 0066b1dc to 0076b1e7 has its CatchHandler @ 0066b060 */
    } while (cVar3 != '\0');
  }
  if (iVar2 < 1) {
    operator_delete(param_1);
    return;
  }
                    /* try { // try from 0066b1e8 to 0076b23b has its CatchHandler @ 0066b1e8
                       catch() { ... } // from try @ 0066b1e8 with catch @ 0066b1e8
                       catch() { ... } // from try @ 0066b28c with catch @ 0066b1e8 */
  return;
}


