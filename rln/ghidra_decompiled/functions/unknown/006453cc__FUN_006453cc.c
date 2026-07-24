/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006453cc
 * Function: FUN_006453cc
 * Signature: undefined FUN_006453cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006453cc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_FUN_007b7228;
  param_1[0xc] = &PTR_FUN_007b7250;
  lVar4 = param_1[0xb];
  param_1[2] = &PTR_FUN_007da7b0;
  if ((undefined *)(lVar4 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00645460 to 00745487 has its CatchHandler @ 0064568c */
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
                    /* try { // try from 00645420 to 0074542b has its CatchHandler @ 00645698 */
  param_1[2] = PTR_DAT_007e6a48 + 0x10;
  FUN_0063c0c8(param_1 + 9);
  param_1[0xc] = PTR_DAT_007e5a78 + 0x10;
  FUN_006221dc(param_1 + 0xc);
  operator_delete(param_1);
  return;
}


