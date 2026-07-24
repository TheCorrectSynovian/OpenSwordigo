/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064933c
 * Function: FUN_0064933c
 * Signature: undefined FUN_0064933c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0064933c(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined1 auStack_18 [16];
  undefined *local_8;
  
                    /* catch() { ... } // from try @ 00649334 with catch @ 00649348 */
                    /* try { // try from 0064934c to 0074934f has its CatchHandler @ 00649358 */
                    /* try { // try from 00649350 to 0074935b has its CatchHandler @ 006492cc */
                    /* catch() { ... } // from try @ 0064934c with catch @ 00649358 */
  local_8 = PTR_DAT_007e6438 + 0x18;
                    /* catch() { ... } // from try @ 0064937c with catch @ 00649360 */
  *param_1 = (long)local_8;
  uVar6 = *(ulong *)(param_2 + 0x30);
  if (uVar6 == 0) {
    FUN_0066edf4(param_1,param_2 + 0x50);
    return param_1;
  }
  uVar8 = *(ulong *)(param_2 + 0x20);
  uVar3 = *(ulong *)(param_2 + 0x28);
                    /* try { // try from 00649374 to 0074937b has its CatchHandler @ 00649398 */
  if (uVar8 < uVar6) {
                    /* try { // try from 0064937c to 007493ab has its CatchHandler @ 00649360 */
    if (uVar6 != uVar3) {
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665330("basic_string::_S_construct null not valid");
      }
                    /* catch() { ... } // from try @ 006493d8 with catch @ 006493b4
                       catch() { ... } // from try @ 006494a0 with catch @ 006493b4 */
      local_8 = (undefined *)FUN_00644b60(uVar3,uVar6,auStack_18);
    }
    FUN_0066edf4(param_1,&local_8);
                    /* try { // try from 006493d4 to 007493d7 has its CatchHandler @ 00649440 */
    puVar4 = local_8 + -0x18;
                    /* try { // try from 006493d8 to 00749477 has its CatchHandler @ 006493b4 */
    if (puVar4 == PTR_DAT_007e6438) {
      return param_1;
    }
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
                    /* try { // try from 006494a0 to 007494ab has its CatchHandler @ 006493b4 */
      piVar7 = (int *)(local_8 + -8);
      do {
        iVar5 = *piVar7;
                    /* catch() { ... } // from try @ 00649478 with catch @ 006494a8 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00649448;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00649374 with catch @ 00649398 */
    if (uVar8 != uVar3) {
      if ((uVar3 == 0) && (uVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00665330("basic_string::_S_construct null not valid");
      }
      local_8 = (undefined *)FUN_00644b60(uVar3,uVar8,auStack_18);
    }
    FUN_0066edf4(param_1,&local_8);
    puVar4 = local_8 + -0x18;
    if (puVar4 == PTR_DAT_007e6438) {
      return param_1;
    }
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
      piVar7 = (int *)(local_8 + -8);
      do {
        iVar5 = *piVar7;
                    /* catch() { ... } // from try @ 006493d4 with catch @ 00649440 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00649448;
    }
  }
  iVar5 = *(int *)(local_8 + -8);
  *(int *)(local_8 + -8) = iVar5 + -1;
LAB_00649448:
  if (iVar5 < 1) {
    operator_delete(puVar4);
  }
  return param_1;
}


