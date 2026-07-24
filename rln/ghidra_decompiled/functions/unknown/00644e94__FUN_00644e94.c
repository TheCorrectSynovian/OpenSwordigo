/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00644e94
 * Function: FUN_00644e94
 * Signature: undefined FUN_00644e94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00644e94(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
                    /* try { // try from 00644eb0 to 00744ebb has its CatchHandler @ 0064568c */
  *param_1 = &PTR_FUN_007b7448;
                    /* try { // try from 00644ebc to 00744ec3 has its CatchHandler @ 00645670 */
  param_1[0xb] = &PTR_FUN_007b7470;
  lVar4 = param_1[10];
  param_1[1] = &PTR_FUN_007da9f0;
  if ((undefined *)(lVar4 + -0x18) != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar3 = *(int *)(lVar4 + -8);
      *(int *)(lVar4 + -8) = iVar3 + -1;
    }
    else {
      piVar5 = (int *)(lVar4 + -8);
      do {
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
      operator_delete((undefined *)(lVar4 + -0x18));
    }
  }
  param_1[1] = PTR_DAT_007e6338 + 0x10;
  FUN_0063c0c8(param_1 + 8);
  param_1[0xb] = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc(param_1 + 0xb);
  return;
}


