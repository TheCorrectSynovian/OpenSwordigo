/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00646758
 * Function: FUN_00646758
 * Signature: undefined FUN_00646758(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00646758(long *param_1,long param_2)

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
  
                    /* catch() { ... } // from try @ 006460c0 with catch @ 00646768 */
  local_8 = PTR_DAT_007e5de8 + 0x18;
  *param_1 = (long)local_8;
  uVar6 = *(ulong *)(param_2 + 0x38);
  if (uVar6 == 0) {
    FUN_0066a6a8(param_1,param_2 + 0x58);
    return param_1;
  }
  uVar8 = *(ulong *)(param_2 + 0x28);
                    /* try { // try from 0064678c to 00746793 has its CatchHandler @ 00646798 */
  uVar3 = *(ulong *)(param_2 + 0x30);
  if (uVar8 < uVar6) {
                    /* catch() { ... } // from try @ 0064678c with catch @ 00646798 */
                    /* catch() { ... } // from try @ 00646124 with catch @ 0064679c */
    if (uVar6 != uVar3) {
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665330("basic_string::_S_construct null not valid");
      }
      local_8 = (undefined *)FUN_00644ab8(uVar3,uVar6,auStack_18);
    }
    FUN_0066a6a8(param_1,&local_8);
    puVar4 = local_8 + -0x18;
    if (puVar4 == PTR_DAT_007e5de8) {
      return param_1;
    }
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
      piVar7 = (int *)(local_8 + -8);
      do {
        iVar5 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00646864;
    }
  }
  else {
    if (uVar8 != uVar3) {
      if ((uVar3 == 0) && (uVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00665330("basic_string::_S_construct null not valid");
      }
                    /* try { // try from 00646810 to 00746833 has its CatchHandler @ 0064604c */
      local_8 = (undefined *)FUN_00644ab8(uVar3,uVar8,auStack_18);
    }
    FUN_0066a6a8(param_1,&local_8);
                    /* catch() { ... } // from try @ 0064680c with catch @ 00646830 */
    puVar4 = local_8 + -0x18;
    if (puVar4 == PTR_DAT_007e5de8) {
      return param_1;
    }
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
      piVar7 = (int *)(local_8 + -8);
      do {
        iVar5 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00646864;
    }
  }
  iVar5 = *(int *)(local_8 + -8);
  *(int *)(local_8 + -8) = iVar5 + -1;
LAB_00646864:
  if (iVar5 < 1) {
    operator_delete(puVar4);
  }
                    /* try { // try from 0064680c to 0074680f has its CatchHandler @ 00646830 */
  return param_1;
}


