/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f1cf4
 * Function: FUN_005f1cf4
 * Signature: undefined FUN_005f1cf4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f1cf4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  long local_58;
  
                    /* try { // try from 005f1d14 to 006f1dc7 has its CatchHandler @ 005f2518 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x10) == 0x11d) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    FUN_00600a74(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    iVar2 = FUN_005f2614(uVar6,uVar4,param_2,1);
    if (iVar2 == 8) {
      uVar3 = FUN_005fe100(uVar6,uVar4);
      *(undefined4 *)(param_2 + 8) = uVar3;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0x28) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    FUN_00600a74(param_1);
    FUN_005f1154(param_1,param_2,0);
    FUN_005f1098(param_1,0x29,0x28,uVar3);
    FUN_005fe488(*(undefined8 *)(param_1 + 0x30),param_2);
  }
  else {
                    /* catch() { ... } // from try @ 005f1ce4 with catch @ 005f1dcc */
    FUN_00600968(param_1,"unexpected symbol");
  }
  do {
                    /* try { // try from 005f1df0 to 006f1df7 has its CatchHandler @ 005f1dfc */
    while (iVar2 = *(int *)(param_1 + 0x10), 0x5a < iVar2) {
      if (iVar2 == 0x5b) {
        FUN_005fea48(uVar5,param_2);
        FUN_005f2128(param_1,local_70);
                    /* catch() { ... } // from try @ 005f0ec0 with catch @ 005f1ee0 */
        FUN_005ff394(uVar5,param_2,local_70);
      }
      else {
        if ((iVar2 != 0x7b) && (iVar2 != 0x11e)) goto LAB_005f1ef0;
LAB_005f1ea4:
        FUN_005fe5c0(uVar5,param_2);
LAB_005f1de4:
        FUN_005f244c(param_1,param_2);
      }
    }
                    /* catch() { ... } // from try @ 005f1df0 with catch @ 005f1dfc */
                    /* catch() { ... } // from try @ 005f0b34 with catch @ 005f1e00 */
    if (iVar2 == 0x28) goto LAB_005f1ea4;
    if (iVar2 != 0x2e) {
      if (iVar2 == 0x3a) {
        FUN_00600a74(param_1);
                    /* try { // try from 005f1e20 to 006f1e47 has its CatchHandler @ 005f2518 */
        if (*(int *)(param_1 + 0x10) != 0x11d) {
          uVar6 = *(undefined8 *)(param_1 + 0x38);
          uVar4 = FUN_0060072c(param_1,0x11d);
          uVar4 = FUN_005ef3d4(uVar6,"\'%s\' expected",uVar4);
                    /* try { // try from 005f1e48 to 006f20b3 has its CatchHandler @ 005f08ec */
                    /* catch() { ... } // from try @ 005f0ee0 with catch @ 005f1e4c */
          FUN_00600968(param_1,uVar4);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        FUN_00600a74(param_1);
        local_68 = FUN_005fe100(*(undefined8 *)(param_1 + 0x30),uVar4);
        local_60 = 0xffffffffffffffff;
        local_70[0] = 4;
                    /* catch() { ... } // from try @ 005f0ecc with catch @ 005f1e84 */
        FUN_005fef18(uVar5,param_2,local_70);
        goto LAB_005f1de4;
      }
LAB_005f1ef0:
      if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    FUN_005f2368(param_1,param_2);
  } while( true );
}


