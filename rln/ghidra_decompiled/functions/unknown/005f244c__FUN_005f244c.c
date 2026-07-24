/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f244c
 * Function: FUN_005f244c
 * Signature: undefined FUN_005f244c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f244c(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005f2470 to 006f24fb has its CatchHandler @ 005f08ec */
                    /* catch() { ... } // from try @ 005f14a8 with catch @ 005f2474 */
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar1 == 0x11e) {
    local_58 = FUN_005fe100(lVar6,*(undefined8 *)(param_1 + 0x18));
    local_50 = 0xffffffffffffffff;
    local_60[0] = 4;
    FUN_00600a74(param_1);
  }
  else if (iVar1 == 0x7b) {
    FUN_005f14b4(param_1,local_60);
  }
  else {
    if (iVar1 != 0x28) {
      FUN_00600968(param_1,&DAT_0069a156);
      goto LAB_005f25e8;
    }
    if (iVar2 != *(int *)(param_1 + 8)) {
      FUN_00600968(param_1,"ambiguous syntax (function call x new statement)");
    }
    FUN_00600a74(param_1);
    if (*(int *)(param_1 + 0x10) == 0x29) {
      local_60[0] = 0;
    }
    else {
      while( true ) {
        FUN_005f1154(param_1,local_60,0);
                    /* try { // try from 005f24fc to 006f250b has its CatchHandler @ 005f2518 */
        if (*(int *)(param_1 + 0x10) != 0x2c) break;
                    /* catch() { ... } // from try @ 005f1458 with catch @ 005f24d8 */
        FUN_00600a74(param_1);
        FUN_005fe5c0(*(undefined8 *)(param_1 + 0x30),local_60);
      }
                    /* try { // try from 005f250c to 006f2523 has its CatchHandler @ 005f08ec */
      FUN_005fe340(lVar6,local_60,0xffffffff);
    }
                    /* catch() { ... } // from try @ 005f1d14 with catch @ 005f2518
                       catch() { ... } // from try @ 005f1e20 with catch @ 005f2518
                       catch() { ... } // from try @ 005f20b4 with catch @ 005f2518
                       catch() { ... } // from try @ 005f20f0 with catch @ 005f2518
                       catch() { ... } // from try @ 005f2148 with catch @ 005f2518
                       catch() { ... } // from try @ 005f24fc with catch @ 005f2518 */
                    /* try { // try from 005f2524 to 006f2687 has its CatchHandler @ 005f2524
                       catch() { ... } // from try @ 005f2524 with catch @ 005f2524
                       catch() { ... } // from try @ 005f2690 with catch @ 005f2524
                       catch() { ... } // from try @ 005f2790 with catch @ 005f2524
                       catch() { ... } // from try @ 005f2814 with catch @ 005f2524
                       catch() { ... } // from try @ 005f29b8 with catch @ 005f2524 */
    FUN_005f1098(param_1,0x29,0x28,iVar2);
  }
  iVar1 = param_2[2];
  if (local_60[0] - 0xdU < 2) {
    iVar5 = 0;
  }
  else {
    if (local_60[0] != 0) {
      FUN_005fe5c0(lVar6,local_60);
    }
    iVar5 = *(int *)(lVar6 + 0x3c) - iVar1;
  }
  uVar4 = FUN_005fdb84(lVar6,0x1c,iVar1,iVar5,2);
  param_2[2] = uVar4;
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
  *param_2 = 0xd;
  FUN_006001d0(lVar6,iVar2);
  *(int *)(lVar6 + 0x3c) = iVar1 + 1;
LAB_005f25e8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


