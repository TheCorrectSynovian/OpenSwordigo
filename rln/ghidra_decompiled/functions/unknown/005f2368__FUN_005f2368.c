/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f2368
 * Function: FUN_005f2368
 * Signature: undefined FUN_005f2368(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f2368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005f1624 with catch @ 005f238c */
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  FUN_005fea48(uVar3);
  FUN_00600a74(param_1);
  if (*(int *)(param_1 + 0x10) != 0x11d) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = FUN_0060072c(param_1,0x11d);
                    /* catch() { ... } // from try @ 005f15c0 with catch @ 005f23c4 */
    uVar2 = FUN_005ef3d4(uVar4,"\'%s\' expected",uVar2);
    FUN_00600968(param_1,uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_00600a74(param_1);
  local_58 = FUN_005fe100(*(undefined8 *)(param_1 + 0x30),uVar2);
  local_50 = 0xffffffffffffffff;
  local_60[0] = 4;
  FUN_005ff394(uVar3,param_2,local_60);
                    /* catch() { ... } // from try @ 005f1aa4 with catch @ 005f2420 */
                    /* catch() { ... } // from try @ 005f0d4c with catch @ 005f2424 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


