/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063c0c8
 * Function: FUN_0063c0c8
 * Signature: undefined FUN_0063c0c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063c0c8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    iVar3 = *piVar4;
    *piVar4 = iVar3 + -1;
  }
  else {
    do {
      iVar3 = *piVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((iVar3 == 1) && (piVar4 != (int *)0x0)) {
    FUN_0063be88(piVar4);
    operator_delete(piVar4);
    return;
  }
  return;
}


