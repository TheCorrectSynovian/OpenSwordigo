/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066a3a8
 * Function: FUN_0066a3a8
 * Signature: undefined FUN_0066a3a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0066a3a8(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != &DAT_007fd2e0) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
    }
    else {
      piVar1 = (int *)(param_1 + 2);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return param_1 + 3;
}


