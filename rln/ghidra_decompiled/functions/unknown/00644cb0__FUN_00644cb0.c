/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00644cb0
 * Function: FUN_00644cb0
 * Signature: undefined FUN_00644cb0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00644cb0(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
                    /* try { // try from 00644cbc to 00744cbf has its CatchHandler @ 00645680 */
                    /* try { // try from 00644cc0 to 00744cfb has its CatchHandler @ 00644c48 */
  *param_1 = (long)&PTR_FUN_007da9f0;
  lVar4 = param_1[9];
  if ((undefined *)(lVar4 + -0x18) != PTR_DAT_007e6438) {
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
      operator_delete((undefined *)(lVar4 + -0x18));
    }
  }
  *param_1 = (long)(PTR_DAT_007e6338 + 0x10);
  FUN_0063c0c8(param_1 + 7);
                    /* try { // try from 00644cfc to 00744cff has its CatchHandler @ 0064567c */
                    /* try { // try from 00644d00 to 00744eaf has its CatchHandler @ 00644c48 */
  return;
}


