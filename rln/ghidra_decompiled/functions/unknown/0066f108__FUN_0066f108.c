/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066f108
 * Function: FUN_0066f108
 * Signature: undefined FUN_0066f108(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066f108(long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  undefined1 auStack_8 [8];
  
  lVar3 = *param_2;
  if (*(int *)(lVar3 + -8) < 0) {
    lVar3 = FUN_0066ecac((undefined8 *)(lVar3 + -0x18),auStack_8,0);
  }
  else if ((undefined8 *)(lVar3 + -0x18) != &DAT_007fd300) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      *(int *)(lVar3 + -8) = *(int *)(lVar3 + -8) + 1;
                    /* try { // try from 0066f19c to 0076f1e3 has its CatchHandler @ 0066ee1c */
    }
    else {
      piVar4 = (int *)(lVar3 + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  *param_1 = lVar3;
  FUN_0066e474(param_1,param_3);
  return param_1;
}


