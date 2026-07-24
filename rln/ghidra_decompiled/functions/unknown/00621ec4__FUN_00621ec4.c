/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621ec4
 * Function: FUN_00621ec4
 * Signature: undefined FUN_00621ec4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00621ec4(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar1 = DAT_007fbd34 + 4;
    DAT_007fbd34 = DAT_007fbd34 + 1;
    return iVar1;
  }
  do {
    iVar1 = DAT_007fbd34;
                    /* catch() { ... } // from try @ 006214b4 with catch @ 00621edc */
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7fbd34,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_007fbd34 = DAT_007fbd34 + 1;
    }
  } while (cVar2 != '\0');
  return iVar1 + 4;
}


