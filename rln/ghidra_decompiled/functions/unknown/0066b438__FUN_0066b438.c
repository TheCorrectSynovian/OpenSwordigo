/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b438
 * Function: FUN_0066b438
 * Signature: undefined FUN_0066b438(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b438(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *param_1;
  if ((undefined8 *)(lVar4 + -0x18) != &DAT_007fd300) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar3 = *(int *)(lVar4 + -8);
                    /* try { // try from 0066b488 to 0076b48b has its CatchHandler @ 0066b49c */
      *(int *)(lVar4 + -8) = iVar3 + -1;
                    /* try { // try from 0066b48c to 0076b49f has its CatchHandler @ 0066b370 */
    }
    else {
      piVar5 = (int *)(lVar4 + -8);
      do {
                    /* catch() { ... } // from try @ 0066b3c8 with catch @ 0066b464 */
        iVar3 = *piVar5;
                    /* catch() { ... } // from try @ 0066b41c with catch @ 0066b46c */
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
      return;
    }
  }
  return;
}


