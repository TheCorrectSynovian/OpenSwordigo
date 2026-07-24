/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f1f24
 * Function: FUN_005f1f24
 * Signature: undefined FUN_005f1f24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f1f24(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [24];
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 005f0eac with catch @ 005f1f38 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar7 = *(long **)(param_1 + 0x30);
  uVar1 = *(undefined4 *)((long)plVar7 + 0x3c);
  if (*(int *)(param_1 + 0x10) == 0x11d) {
    if (0x7ffffffd < *(int *)(param_2 + 0x20)) {
      if (*(int *)(*plVar7 + 0x60) == 0) {
                    /* catch() { ... } // from try @ 005f0c80 with catch @ 005f1fd4 */
                    /* catch() { ... } // from try @ 005f0c44 with catch @ 005f1fd8 */
        uVar6 = FUN_005ef3d4(plVar7[4],0x69a06d,0x7ffffffd,&DAT_0069a056);
      }
      else {
                    /* catch() { ... } // from try @ 005f0ca0 with catch @ 005f1f9c */
        uVar6 = FUN_005ef3d4(plVar7[4],&DAT_0069a08f,*(int *)(*plVar7 + 0x60),0x7ffffffd,
                             &DAT_0069a056);
      }
      FUN_006007a0(plVar7[3],uVar6,0);
      if (*(int *)(param_1 + 0x10) != 0x11d) {
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        uVar6 = FUN_0060072c(param_1,0x11d);
                    /* catch() { ... } // from try @ 005f0c24 with catch @ 005f2010 */
                    /* catch() { ... } // from try @ 005f0be0 with catch @ 005f2014 */
        uVar6 = FUN_005ef3d4(uVar8,"\'%s\' expected",uVar6);
        FUN_00600968(param_1,uVar6);
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    FUN_00600a74(param_1);
    local_68 = FUN_005fe100(*(undefined8 *)(param_1 + 0x30),uVar6);
    local_60 = 0xffffffffffffffff;
    local_70[0] = 4;
  }
  else {
    FUN_005f2128(param_1,local_70);
  }
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  if (*(int *)(param_1 + 0x10) != 0x3d) {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = FUN_0060072c(param_1,0x3d);
                    /* catch() { ... } // from try @ 005f0bb8 with catch @ 005f2084 */
                    /* catch() { ... } // from try @ 005f0ab8 with catch @ 005f2090 */
    uVar6 = FUN_005ef3d4(uVar8,"\'%s\' expected",uVar6);
    FUN_00600968(param_1,uVar6);
  }
  FUN_00600a74(param_1);
  uVar4 = FUN_005feb5c(plVar7,local_70);
                    /* try { // try from 005f20b4 to 006f20bf has its CatchHandler @ 005f2518 */
                    /* try { // try from 005f20c0 to 006f20ef has its CatchHandler @ 005f08ec */
  FUN_005f1154(param_1,auStack_88,0);
                    /* catch() { ... } // from try @ 005f0a28 with catch @ 005f20cc */
  uVar2 = *(undefined4 *)(*(long *)(param_2 + 0x18) + 8);
  uVar5 = FUN_005feb5c(plVar7,auStack_88);
                    /* try { // try from 005f20f0 to 006f20fb has its CatchHandler @ 005f2518 */
  FUN_005fdb84(plVar7,9,uVar2,uVar4,uVar5);
  *(undefined4 *)((long)plVar7 + 0x3c) = uVar1;
                    /* try { // try from 005f20fc to 006f2147 has its CatchHandler @ 005f08ec */
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 005f0928 with catch @ 005f2108 */
                    /* catch() { ... } // from try @ 005f1a3c with catch @ 005f211c */
                    /* catch() { ... } // from try @ 005f19d8 with catch @ 005f2120 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005f1990 with catch @ 005f2124 */
  __stack_chk_fail();
}


