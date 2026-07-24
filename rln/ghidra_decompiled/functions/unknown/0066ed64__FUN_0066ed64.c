/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066ed64
 * Function: FUN_0066ed64
 * Signature: undefined FUN_0066ed64(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066ed64(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  undefined1 auStack_8 [8];
  
  lVar4 = *param_2;
  if (*(int *)(lVar4 + -8) < 0) {
    lVar4 = FUN_0066ecac((undefined8 *)(lVar4 + -0x18),auStack_8,0);
    *param_1 = lVar4;
    return;
  }
  if ((undefined8 *)(lVar4 + -0x18) != &DAT_007fd300) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      *(int *)(lVar4 + -8) = *(int *)(lVar4 + -8) + 1;
    }
    else {
      piVar3 = (int *)(lVar4 + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  *param_1 = lVar4;
  return;
}


