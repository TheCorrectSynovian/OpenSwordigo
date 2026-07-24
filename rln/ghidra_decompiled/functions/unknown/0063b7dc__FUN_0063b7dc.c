/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063b7dc
 * Function: FUN_0063b7dc
 * Signature: undefined FUN_0063b7dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063b7dc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_2;
  *param_1 = piVar3;
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return;
  }
  *piVar3 = *piVar3 + 1;
  return;
}


