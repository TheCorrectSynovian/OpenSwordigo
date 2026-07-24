/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063c4d0
 * Function: FUN_0063c4d0
 * Signature: undefined FUN_0063c4d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0063c4d0(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar3 = DAT_007fbdf8 + 1;
      DAT_007fbdf8 = iVar3;
    }
    else {
      do {
        iVar3 = DAT_007fbdf8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x7fbdf8,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          DAT_007fbdf8 = DAT_007fbdf8 + 1;
        }
      } while (cVar1 != '\0');
                    /* try { // try from 0063c4fc to 0073c523 has its CatchHandler @ 0063cd48 */
      iVar3 = iVar3 + 1;
    }
    lVar4 = (long)iVar3;
    *param_1 = lVar4;
  }
  return lVar4 + -1;
}


