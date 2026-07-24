/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064926c
 * Function: FUN_0064926c
 * Signature: undefined FUN_0064926c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064926c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  lVar5 = param_1[10];
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18)) = param_2[3];
  param_1[1] = (long)&PTR_FUN_007da9f0;
  if ((undefined *)(lVar5 + -0x18) != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00649324 to 0074932b has its CatchHandler @ 00649338 */
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
                    /* catch() { ... } // from try @ 006492e4 with catch @ 0064931c */
      operator_delete((undefined *)(lVar5 + -0x18));
    }
  }
  param_1[1] = (long)(PTR_DAT_007e6338 + 0x10);
                    /* catch() { ... } // from try @ 006492ec with catch @ 006492cc
                       catch() { ... } // from try @ 00649350 with catch @ 006492cc */
  FUN_0063c0c8(param_1 + 8);
  lVar4 = param_2[1];
  *param_1 = lVar4;
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18)) = param_2[2];
                    /* try { // try from 006492e4 to 007492eb has its CatchHandler @ 0064931c */
                    /* try { // try from 006492ec to 00749323 has its CatchHandler @ 006492cc */
  return;
}


