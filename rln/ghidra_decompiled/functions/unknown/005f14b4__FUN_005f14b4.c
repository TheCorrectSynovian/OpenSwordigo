/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f14b4
 * Function: FUN_005f14b4
 * Signature: undefined FUN_005f14b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f14b4(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  int local_98 [2];
  undefined4 local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined4 local_78;
  int local_74;
  int local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar7 = *(long **)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar3 = FUN_005fdb84(plVar7,10,0,0,0);
                    /* try { // try from 005f1508 to 006f150f has its CatchHandler @ 005f2330 */
                    /* try { // try from 005f1510 to 006f1523 has its CatchHandler @ 005f2328 */
  local_70 = 0;
  local_78 = 0;
  local_74 = 0;
  param_2[2] = uVar3;
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
                    /* try { // try from 005f1524 to 006f1537 has its CatchHandler @ 005f2334 */
  *param_2 = 0xb;
  local_88 = 0xffffffffffffffff;
  local_98[0] = 0;
  local_90 = 0;
  local_80 = param_2;
                    /* try { // try from 005f1538 to 006f1547 has its CatchHandler @ 005f22f8 */
  FUN_005fe5c0(*(undefined8 *)(param_1 + 0x30),param_2);
  if (*(int *)(param_1 + 0x10) != 0x7b) {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = FUN_0060072c(param_1,0x7b);
                    /* try { // try from 005f1568 to 006f156b has its CatchHandler @ 005f2334 */
    uVar6 = FUN_005ef3d4(uVar9,"\'%s\' expected",uVar6);
    FUN_00600968(param_1,uVar6);
  }
                    /* try { // try from 005f1580 to 006f1593 has its CatchHandler @ 005f22f4 */
  FUN_00600a74(param_1);
  if (*(int *)(param_1 + 0x10) != 0x7d) {
    while( true ) {
      if ((*(int *)(param_1 + 0x10) == 0x5b) ||
         ((*(int *)(param_1 + 0x10) == 0x11d &&
          (FUN_00601c24(param_1), *(int *)(param_1 + 0x20) == 0x3d)))) {
                    /* try { // try from 005f1624 to 006f1633 has its CatchHandler @ 005f238c */
        FUN_005f1f24(param_1,local_98);
      }
      else {
        FUN_005f1154(param_1,local_98,0);
        if (0x7ffffffd < local_74) {
          plVar10 = *(long **)(param_1 + 0x30);
          if (*(int *)(*plVar10 + 0x60) == 0) {
            uVar6 = FUN_005ef3d4(plVar10[4],0x69a06d,0x7ffffffd,&DAT_0069a056);
          }
          else {
            uVar6 = FUN_005ef3d4(plVar10[4],&DAT_0069a08f,*(int *)(*plVar10 + 0x60),0x7ffffffd,
                                 &DAT_0069a056);
          }
          FUN_006007a0(plVar10[3],uVar6,0);
        }
        local_74 = 1;
                    /* try { // try from 005f16b0 to 006f16c3 has its CatchHandler @ 005f232c */
        local_70 = local_70 + 1;
      }
      if (((*(int *)(param_1 + 0x10) != 0x2c) && (*(int *)(param_1 + 0x10) != 0x3b)) ||
         (FUN_00600a74(param_1), *(int *)(param_1 + 0x10) == 0x7d)) break;
                    /* try { // try from 005f15c0 to 006f15cf has its CatchHandler @ 005f23c4 */
      if (local_98[0] != 0) {
        FUN_005fe5c0(plVar7,local_98);
        local_98[0] = 0;
        if (local_70 == 0x32) {
                    /* try { // try from 005f15e4 to 006f15f7 has its CatchHandler @ 005f22f0 */
          FUN_006002d4(plVar7,local_80[2],local_74,0x32);
          local_70 = 0;
        }
      }
    }
  }
  FUN_005f1098(param_1,0x7d,0x7b,uVar1);
  if (local_70 != 0) {
    if (local_98[0] - 0xdU < 2) {
                    /* try { // try from 005f1710 to 006f1717 has its CatchHandler @ 005f2244 */
                    /* try { // try from 005f1718 to 006f172b has its CatchHandler @ 005f223c */
      FUN_005fe340(plVar7,local_98,0xffffffff);
                    /* try { // try from 005f172c to 006f173f has its CatchHandler @ 005f2248 */
      FUN_006002d4(plVar7,local_80[2],local_74,0xffffffff);
      local_74 = local_74 + -1;
                    /* try { // try from 005f1740 to 006f174f has its CatchHandler @ 005f220c */
    }
    else {
      if (local_98[0] != 0) {
        FUN_005fe5c0(plVar7,local_98);
      }
      FUN_006002d4(plVar7,local_80[2],local_74,local_70);
    }
  }
                    /* try { // try from 005f1770 to 006f1773 has its CatchHandler @ 005f2248 */
  uVar8 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
  uVar3 = *(uint *)(*(long *)(*plVar7 + 0x18) + uVar8);
  iVar4 = FUN_005eee00(local_74);
                    /* try { // try from 005f1788 to 006f179b has its CatchHandler @ 005f2208 */
  *(uint *)(*(long *)(*plVar7 + 0x18) + uVar8) = uVar3 & 0x7fffff | iVar4 << 0x17;
  uVar5 = FUN_005eee00(local_78);
  *(uint *)(*(long *)(*plVar7 + 0x18) + uVar8) =
       iVar4 << 0x17 | uVar3 & 0x3fff | (uVar5 & 0x1ff) << 0xe;
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 005f17c8 to 006f17d7 has its CatchHandler @ 005f22b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


