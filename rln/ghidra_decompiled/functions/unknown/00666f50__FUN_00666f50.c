/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666f50
 * Function: FUN_00666f50
 * Signature: undefined FUN_00666f50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666f50(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
                    /* try { // try from 00666f50 to 00766f5f has its CatchHandler @ 006680fc */
  lVar4 = *param_1;
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
                    /* try { // try from 00666f90 to 00766feb has its CatchHandler @ 00668018 */
    if (iVar3 < 1) {
      operator_delete((undefined8 *)(lVar4 + -0x18));
      return;
    }
  }
  return;
}


