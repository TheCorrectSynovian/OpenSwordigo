/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066edf4
 * Function: FUN_0066edf4
 * Signature: undefined FUN_0066edf4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066edf4(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined1 auStack_8 [8];
  
  lVar4 = *param_1;
  lVar6 = *param_2;
  if (lVar4 != lVar6) {
                    /* catch() { ... } // from try @ 0066ef68 with catch @ 0066ee1c
                       catch() { ... } // from try @ 0066f19c with catch @ 0066ee1c */
    if (*(int *)(lVar6 + -8) < 0) {
      lVar6 = FUN_0066ecac((undefined8 *)(lVar6 + -0x18),auStack_8,0);
      lVar4 = *param_1;
    }
    else if ((undefined8 *)(lVar6 + -0x18) != &DAT_007fd300) {
                    /* try { // try from 0066eea0 to 0076eea3 has its CatchHandler @ 0066f0b0 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        *(int *)(lVar6 + -8) = *(int *)(lVar6 + -8) + 1;
      }
      else {
        piVar5 = (int *)(lVar6 + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar4 = *param_1;
      }
    }
    if ((undefined8 *)(lVar4 + -0x18) != &DAT_007fd300) {
                    /* try { // try from 0066ee58 to 0076ee5f has its CatchHandler @ 0066f030 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar3 = *(int *)(lVar4 + -8);
        *(int *)(lVar4 + -8) = iVar3 + -1;
                    /* try { // try from 0066eee0 to 0076ef07 has its CatchHandler @ 0066f018 */
      }
      else {
        piVar5 = (int *)(lVar4 + -8);
        do {
                    /* try { // try from 0066ee64 to 0076ee67 has its CatchHandler @ 0066f020 */
          iVar3 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar3 < 1) {
        operator_delete((undefined8 *)(lVar4 + -0x18));
      }
    }
    *param_1 = lVar6;
  }
  return param_1;
}


