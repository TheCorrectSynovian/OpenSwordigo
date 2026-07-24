/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00645594
 * Function: FUN_00645594
 * Signature: undefined FUN_00645594(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00645594(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = &PTR_FUN_007b7338;
                    /* try { // try from 006455bc to 007455c7 has its CatchHandler @ 0064568c */
  param_1[0xd] = &PTR_FUN_007b7388;
  lVar4 = param_1[0xc];
                    /* try { // try from 006455c8 to 007455cf has its CatchHandler @ 00645648 */
  param_1[2] = &PTR_FUN_007b7360;
                    /* try { // try from 006455d0 to 007456cf has its CatchHandler @ 00644c48 */
  param_1[3] = &PTR_FUN_007da7b0;
  if ((undefined *)(lVar4 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00645124 with catch @ 0064565c */
      iVar3 = *(int *)(lVar4 + -8);
                    /* catch() { ... } // from try @ 0064507c with catch @ 00645660 */
                    /* catch() { ... } // from try @ 00645044 with catch @ 00645664 */
      *(int *)(lVar4 + -8) = iVar3 + -1;
                    /* catch() { ... } // from try @ 00644f9c with catch @ 00645668 */
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
                    /* catch() { ... } // from try @ 006455c8 with catch @ 00645648 */
                    /* catch() { ... } // from try @ 006452e4 with catch @ 0064564c */
    if (iVar3 < 1) {
                    /* catch() { ... } // from try @ 0064523c with catch @ 00645650 */
                    /* catch() { ... } // from try @ 00645204 with catch @ 00645654 */
      operator_delete((undefined *)(lVar4 + -0x18));
                    /* catch() { ... } // from try @ 0064515c with catch @ 00645658 */
    }
  }
  param_1[3] = PTR_DAT_007e6a48 + 0x10;
  FUN_0063c0c8(param_1 + 10);
  param_1[0xd] = PTR_DAT_007e5a78 + 0x10;
  FUN_006221dc(param_1 + 0xd);
  return;
}


