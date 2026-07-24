/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066a278
 * Function: FUN_0066a278
 * Signature: undefined FUN_0066a278(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


size_t * FUN_0066a278(size_t *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  size_t *psVar3;
  size_t *psVar4;
  size_t __n;
  size_t sVar5;
  
  if ((int)param_1[2] < 0) {
    psVar3 = (size_t *)FUN_00668c20(*param_1,param_1[1],param_2);
    __n = *param_1;
    psVar4 = psVar3 + 3;
    sVar5 = 0;
    if (__n != 0) {
      psVar4 = psVar3 + 3;
      if (__n == 1) {
        *(char *)(psVar3 + 3) = (char)param_1[3];
        sVar5 = *param_1;
      }
      else {
        psVar4 = memcpy(psVar4,param_1 + 3,__n);
                    /* catch() { ... } // from try @ 0066a2c0 with catch @ 0066a30c */
        sVar5 = *param_1;
      }
    }
    if (psVar3 != &DAT_007fd2e0) {
      *(undefined4 *)(psVar3 + 2) = 0;
      *psVar3 = sVar5;
      *(undefined1 *)((long)psVar3 + sVar5 + 0x18) = 0;
    }
  }
  else {
    if (param_1 != &DAT_007fd2e0) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      }
      else {
        psVar4 = param_1 + 2;
        do {
                    /* try { // try from 0066a2c0 to 0076a2c3 has its CatchHandler @ 0066a30c */
                    /* try { // try from 0066a2c4 to 0076a36b has its CatchHandler @ 0066a20c */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar2) {
            *(int *)psVar4 = (int)*psVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    psVar4 = param_1 + 3;
  }
  return psVar4;
}


