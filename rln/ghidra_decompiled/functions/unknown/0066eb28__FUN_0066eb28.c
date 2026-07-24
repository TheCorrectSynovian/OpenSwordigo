/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066eb28
 * Function: FUN_0066eb28
 * Signature: undefined FUN_0066eb28(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


size_t * FUN_0066eb28(size_t *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  size_t *psVar3;
  size_t __n;
  
  if ((int)param_1[2] < 0) {
    psVar3 = (size_t *)FUN_0066c5b8(*param_1,param_1[1],param_2);
    __n = *param_1;
    if (__n != 0) {
      if (__n == 1) {
        *(int *)(psVar3 + 3) = (int)param_1[3];
      }
      else {
        wmemcpy((wchar_t *)(psVar3 + 3),(wchar_t *)(param_1 + 3),__n);
        __n = *param_1;
      }
    }
    param_1 = psVar3 + 3;
    if (psVar3 != &DAT_007fd300) {
      *(undefined4 *)(psVar3 + 2) = 0;
      *psVar3 = __n;
      *(undefined4 *)((long)psVar3 + __n * 4 + 0x18) = 0;
    }
  }
  else {
    if (param_1 != &DAT_007fd300) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      }
      else {
        psVar3 = param_1 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar2) {
            *(int *)psVar3 = (int)*psVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    param_1 = param_1 + 3;
  }
  return param_1;
}


