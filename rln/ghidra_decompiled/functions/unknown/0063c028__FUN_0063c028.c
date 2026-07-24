/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063c028
 * Function: FUN_0063c028
 * Signature: undefined FUN_0063c028(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0063c028(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)*param_2;
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0063c0ac to 0073c0d3 has its CatchHandler @ 0063cd44 */
    piVar5 = (int *)*param_1;
    *piVar4 = *piVar4 + 1;
    iVar3 = *piVar5;
    *piVar5 = iVar3 + -1;
  }
  else {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    piVar5 = (int *)*param_1;
    do {
      iVar3 = *piVar5;
                    /* try { // try from 0063c064 to 0073c08b has its CatchHandler @ 0063cd98 */
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((iVar3 == 1) && (piVar5 != (int *)0x0)) {
    FUN_0063be88(piVar5);
    operator_delete(piVar5);
  }
  *param_1 = *param_2;
  return param_1;
}


