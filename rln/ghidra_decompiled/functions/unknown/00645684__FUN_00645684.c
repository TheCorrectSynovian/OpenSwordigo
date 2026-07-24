/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00645684
 * Function: FUN_00645684
 * Signature: undefined FUN_00645684(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00645684(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
                    /* catch() { ... } // from try @ 00644eb0 with catch @ 0064568c
                       catch() { ... } // from try @ 00644f90 with catch @ 0064568c
                       catch() { ... } // from try @ 00645070 with catch @ 0064568c
                       catch() { ... } // from try @ 00645150 with catch @ 0064568c
                       catch() { ... } // from try @ 00645230 with catch @ 0064568c
                       catch() { ... } // from try @ 00645460 with catch @ 0064568c
                       catch() { ... } // from try @ 006455bc with catch @ 0064568c */
                    /* catch() { ... } // from try @ 00645514 with catch @ 00645690 */
                    /* catch() { ... } // from try @ 006454d8 with catch @ 00645694 */
                    /* catch() { ... } // from try @ 00645420 with catch @ 00645698 */
                    /* catch() { ... } // from try @ 00645368 with catch @ 0064569c */
  *param_1 = &PTR_FUN_007b74e8;
  param_1[0xd] = &PTR_FUN_007b7538;
                    /* catch() { ... } // from try @ 00645348 with catch @ 006456b4 */
  lVar4 = param_1[0xc];
                    /* catch() { ... } // from try @ 00645564 with catch @ 006456b8 */
  param_1[2] = &PTR_FUN_007b7510;
  param_1[3] = &PTR_FUN_007da9f0;
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
  param_1[3] = PTR_DAT_007e6338 + 0x10;
  FUN_0063c0c8(param_1 + 10);
  param_1[0xd] = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc(param_1 + 0xd);
  return;
}


