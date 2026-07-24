/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb320
 * Function: FUN_005eb320
 * Signature: undefined FUN_005eb320(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eb320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_84 [68];
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  puStack_c0 = &local_100;
  ppuStack_c8 = &local_d0;
  uStack_b8 = 0xffffff80ffffffd0;
  local_100 = param_3;
  uStack_f8 = param_4;
  local_f0 = param_5;
  uStack_e8 = param_6;
  local_e0 = param_7;
  uStack_d8 = param_8;
  local_d0 = (undefined1 *)register0x00000008;
  uVar2 = FUN_005eefd8(param_1,param_2,&local_d0);
                    /* try { // try from 005eb3a0 to 006eb3b3 has its CatchHandler @ 005eb750 */
  plVar4 = *(long **)(*(long *)(param_1 + 0x28) + 8);
                    /* try { // try from 005eb3b4 to 006eb3c7 has its CatchHandler @ 005eb6ec */
  if (((int)plVar4[1] == 6) && (*(char *)(*plVar4 + 10) == '\0')) {
    lVar7 = *(long *)(param_1 + 0x30);
                    /* try { // try from 005eb3c8 to 006eb3e3 has its CatchHandler @ 005eb690 */
    *(long *)(*(long *)(param_1 + 0x28) + 0x18) = lVar7;
    lVar3 = *(long *)(*plVar4 + 0x20);
    uVar5 = lVar7 - *(long *)(lVar3 + 0x18);
    if ((int)(uVar5 >> 2) < 1) {
      uVar8 = 0xffffffff;
                    /* try { // try from 005eb408 to 006eb40f has its CatchHandler @ 005eb5e8 */
    }
    else if (*(long *)(lVar3 + 0x28) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)
               (*(long *)(lVar3 + 0x28) + ((long)(uVar5 * 0x40000000 + -0x100000000) >> 0x1e));
    }
    FUN_005ef46c(auStack_84,*(long *)(lVar3 + 0x40) + 0x18,0x3c);
                    /* try { // try from 005eb428 to 006eb42f has its CatchHandler @ 005eb5f8 */
    FUN_005ef3d4(param_1,"%s:%d: %s",auStack_84,uVar8,uVar2);
  }
  FUN_005eb6dc(param_1);
                    /* try { // try from 005eb44c to 006eb473 has its CatchHandler @ 005eb5e8 */
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


