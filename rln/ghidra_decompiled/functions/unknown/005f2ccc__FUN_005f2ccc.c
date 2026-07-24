/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f2ccc
 * Function: FUN_005f2ccc
 * Signature: undefined FUN_005f2ccc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f2ccc(long param_1,long *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *local_68;
  int local_60 [2];
  undefined8 local_58;
  long local_48;
  
                    /* try { // try from 005f2ce4 to 006f2cef has its CatchHandler @ 005f3320 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar6 = param_2 + 1;
                    /* try { // try from 005f2cf4 to 006f2d07 has its CatchHandler @ 005f3080 */
                    /* try { // try from 005f2d08 to 006f2d13 has its CatchHandler @ 005f3010 */
  if (3 < (int)*plVar6 - 6U) {
    FUN_00600968(param_1,"syntax error");
  }
  if (*(int *)(param_1 + 0x10) == 0x3d) {
LAB_005f2e48:
    FUN_00600a74(param_1);
    FUN_005f1154(param_1,&local_68,0);
    iVar7 = 1;
    iVar2 = *(int *)(param_1 + 0x10);
    while (iVar2 == 0x2c) {
      FUN_00600a74(param_1);
      FUN_005fe5c0(*(undefined8 *)(param_1 + 0x30),&local_68);
      FUN_005f1154(param_1,&local_68,0);
      iVar7 = iVar7 + 1;
      iVar2 = *(int *)(param_1 + 0x10);
    }
    if (iVar7 == param_3) {
      FUN_005fe424(*(undefined8 *)(param_1 + 0x30),&local_68);
      lVar10 = *(long *)(param_1 + 0x30);
      goto LAB_005f2f50;
    }
    FUN_005f2c18(param_1,param_3,iVar7,&local_68);
    if (param_3 < iVar7) {
      *(int *)(*(long *)(param_1 + 0x30) + 0x3c) =
           (param_3 - iVar7) + *(int *)(*(long *)(param_1 + 0x30) + 0x3c);
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x2c) {
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = FUN_0060072c(param_1,0x3d);
      uVar5 = FUN_005ef3d4(uVar9,"\'%s\' expected",uVar5);
      FUN_00600968(param_1,uVar5);
      goto LAB_005f2e48;
    }
    FUN_00600a74(param_1);
    local_68 = param_2;
    FUN_005f1cf4(param_1,local_60);
                    /* try { // try from 005f2d54 to 006f2d67 has its CatchHandler @ 005f3194 */
    if (local_60[0] == 6) {
      lVar10 = *(long *)(param_1 + 0x30);
      bVar4 = false;
      uVar1 = *(undefined4 *)(lVar10 + 0x3c);
      do {
                    /* try { // try from 005f2d68 to 006f2d73 has its CatchHandler @ 005f3154 */
        if ((int)param_2[1] == 9) {
                    /* try { // try from 005f2d74 to 006f2d9b has its CatchHandler @ 005f2a00 */
          if ((int)param_2[2] == (int)local_58) {
            *(undefined4 *)(param_2 + 2) = uVar1;
            bVar4 = true;
          }
          if (*(int *)((long)param_2 + 0x14) == (int)local_58) {
                    /* try { // try from 005f2d9c to 006f2da7 has its CatchHandler @ 005f3320 */
            bVar4 = true;
            *(undefined4 *)((long)param_2 + 0x14) = uVar1;
          }
        }
        param_2 = (long *)*param_2;
      } while (param_2 != (long *)0x0);
                    /* try { // try from 005f2dac to 006f2dbf has its CatchHandler @ 005f300c */
      if (bVar4) {
                    /* try { // try from 005f2dc0 to 006f2dcb has its CatchHandler @ 005f2fcc */
        FUN_005fdb84(lVar10,0,*(undefined4 *)(lVar10 + 0x3c),(int)local_58,0);
                    /* try { // try from 005f2dcc to 006f333f has its CatchHandler @ 005f2a00 */
        FUN_005fe088(lVar10,1);
      }
    }
    iVar7 = 200 - (uint)*(ushort *)(*(long *)(param_1 + 0x38) + 0x60);
    if (iVar7 < param_3) {
      plVar8 = *(long **)(param_1 + 0x30);
      if (*(int *)(*plVar8 + 0x60) == 0) {
        uVar5 = FUN_005ef3d4(plVar8[4],0x69a06d,iVar7,"variables in assignment");
      }
      else {
        uVar5 = FUN_005ef3d4(plVar8[4],&DAT_0069a08f,*(int *)(*plVar8 + 0x60),iVar7,
                             "variables in assignment");
      }
      FUN_006007a0(plVar8[3],uVar5,0);
    }
    FUN_005f2ccc(param_1,&local_68,param_3 + 1);
  }
  lVar10 = *(long *)(param_1 + 0x30);
  local_58 = 0xffffffffffffffff;
  local_68 = (long *)CONCAT44(local_68._4_4_,0xc);
  local_60[0] = *(int *)(lVar10 + 0x3c) + -1;
LAB_005f2f50:
  FUN_005fed28(lVar10,plVar6,&local_68);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


