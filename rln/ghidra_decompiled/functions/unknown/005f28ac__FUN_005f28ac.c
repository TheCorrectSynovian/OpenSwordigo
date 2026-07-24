/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f28ac
 * Function: FUN_005f28ac
 * Signature: undefined FUN_005f28ac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f28ac(long param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ushort *puVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  long local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  long local_58;
  
                    /* catch() { ... } // from try @ 005f26c0 with catch @ 005f28b0 */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 005f28d4 to 006f28df has its CatchHandler @ 005f29c0 */
  plVar18 = *(long **)(param_1 + 0x30);
  uVar8 = (undefined4)plVar18[6];
  bVar2 = *(char *)((long)plVar18 + 0x4a) + 3;
  *(byte *)((long)plVar18 + 0x4a) = bVar2;
                    /* try { // try from 005f2904 to 006f29b7 has its CatchHandler @ 005f29f4 */
  lVar10 = *(long *)(*plVar18 + 0x30);
  *(undefined4 *)(lVar10 + (ulong)*(ushort *)((long)plVar18 + (ulong)bVar2 * 2 + 0xbe) * 0x10 + 8) =
       uVar8;
  *(undefined4 *)(lVar10 + (ulong)*(ushort *)((long)plVar18 + (ulong)bVar2 * 2 + 0xc0) * 0x10 + 8) =
       uVar8;
  *(undefined4 *)(lVar10 + (ulong)*(ushort *)((long)plVar18 + (ulong)bVar2 * 2 + 0xc2) * 0x10 + 8) =
       uVar8;
  if (*(int *)(param_1 + 0x10) != 0x103) {
    uVar19 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = FUN_0060072c(param_1,0x103);
    uVar9 = FUN_005ef3d4(uVar19,"\'%s\' expected",uVar9);
    FUN_00600968(param_1,uVar9);
  }
  FUN_00600a74(param_1);
  if (param_5 == 0) {
    iVar7 = FUN_005fdba0(plVar18);
  }
  else {
    iVar7 = FUN_005fdc7c(plVar18,0x20,param_2,0x1fffe);
  }
  local_60 = 0xffffffff;
  local_5a = 0;
  local_5c = *(undefined1 *)((long)plVar18 + 0x4a);
  local_5b = 0;
  local_68 = plVar18[5];
                    /* try { // try from 005f29b8 to 006f29e3 has its CatchHandler @ 005f2524 */
  plVar18[5] = (long)&local_68;
                    /* catch() { ... } // from try @ 005f28d4 with catch @ 005f29c0 */
  plVar11 = *(long **)(param_1 + 0x30);
  uVar1 = (uint)*(byte *)((long)plVar11 + 0x4a) + param_4;
  *(char *)((long)plVar11 + 0x4a) = (char)uVar1;
  if (param_4 != 0) {
    uVar8 = (undefined4)plVar11[6];
    lVar17 = (long)param_4;
                    /* try { // try from 005f29e4 to 006f29eb has its CatchHandler @ 005f29f0 */
    lVar10 = *(long *)(*plVar11 + 0x30);
    uVar16 = (ulong)(param_4 - 1U) + 1;
                    /* catch() { ... } // from try @ 005f29e4 with catch @ 005f29f0 */
    uVar13 = (ulong)(uVar1 & 0xff);
                    /* catch() { ... } // from try @ 005f2904 with catch @ 005f29f4 */
    if (1 < uVar16) {
                    /* try { // try from 005f2a00 to 006f2b43 has its CatchHandler @ 005f2a00
                       catch() { ... } // from try @ 005f2a00 with catch @ 005f2a00
                       catch() { ... } // from try @ 005f2d74 with catch @ 005f2a00
                       catch() { ... } // from try @ 005f2dcc with catch @ 005f2a00
                       catch() { ... } // from try @ 005f3368 with catch @ 005f2a00 */
      uVar1 = ~(param_4 - 1U) & 1;
      lVar15 = uVar16 - uVar1;
      lVar6 = lVar17 * -2;
      lVar17 = lVar17 - lVar15;
      puVar12 = (ushort *)((long)plVar11 + uVar13 * 2 + 0xc6 + lVar6);
      do {
        uVar4 = *puVar12;
        lVar15 = lVar15 + -2;
        *(undefined4 *)(lVar10 + (ulong)puVar12[-1] * 0x10 + 8) = uVar8;
        *(undefined4 *)(lVar10 + (ulong)uVar4 * 0x10 + 8) = uVar8;
        puVar12 = puVar12 + 2;
      } while (lVar15 != 0);
      if (uVar1 == 0) goto LAB_005f2a68;
    }
    iVar14 = -(int)lVar17;
    puVar12 = (ushort *)((long)plVar11 + uVar13 * 2 + 0xc4 + lVar17 * -2);
    do {
      iVar14 = iVar14 + 1;
      *(undefined4 *)(lVar10 + (ulong)*puVar12 * 0x10 + 8) = uVar8;
      puVar12 = puVar12 + 1;
    } while (iVar14 != 0);
  }
LAB_005f2a68:
  FUN_005fe088(plVar18,param_4);
  FUN_005f0e8c(param_1);
  plVar20 = (long *)plVar18[5];
  plVar18[5] = *plVar20;
  plVar11 = *(long **)(plVar18[3] + 0x30);
  bVar2 = *(byte *)((long)plVar20 + 0xc);
  bVar3 = *(byte *)((long)plVar11 + 0x4a);
  uVar16 = (ulong)bVar3;
  if (bVar3 <= bVar2) goto LAB_005f2b40;
  uVar8 = (undefined4)plVar11[6];
  uVar1 = (bVar3 - 1) - (uint)bVar2;
  lVar10 = *(long *)(*plVar11 + 0x30);
  uVar13 = ((ulong)uVar1 & 0xff) + 1;
  if (uVar13 < 2) {
LAB_005f2b18:
    do {
      uVar1 = (int)uVar16 - 1;
      *(undefined4 *)
       (lVar10 + (ulong)*(ushort *)((long)plVar11 + (ulong)(byte)uVar1 * 2 + 0xc4) * 0x10 + 0xc) =
           uVar8;
      uVar16 = uVar16 - 1;
    } while ((uint)bVar2 < (uVar1 & 0xff));
  }
  else {
    uVar1 = ~uVar1 & 1;
    lVar17 = uVar13 - uVar1;
    uVar13 = uVar16 - lVar17;
    uVar16 = uVar16 + 0xfe;
    do {
      iVar14 = (int)uVar16;
      uVar4 = *(ushort *)((long)plVar11 + (uVar16 & 0xff) * 2 + 0xc4);
      lVar17 = lVar17 + -2;
      uVar16 = uVar16 - 2;
      *(undefined4 *)
       (lVar10 + (ulong)*(ushort *)((long)plVar11 + ((ulong)(iVar14 + 1) & 0xff) * 2 + 0xc4) * 0x10
       + 0xc) = uVar8;
      *(undefined4 *)(lVar10 + (ulong)uVar4 * 0x10 + 0xc) = uVar8;
    } while (lVar17 != 0);
    uVar16 = uVar13;
    if (uVar1 != 0) goto LAB_005f2b18;
  }
  *(byte *)((long)plVar11 + 0x4a) = bVar2;
LAB_005f2b40:
                    /* try { // try from 005f2b44 to 006f2b57 has its CatchHandler @ 005f331c */
  if (*(char *)((long)plVar20 + 0xd) != '\0') {
                    /* try { // try from 005f2b58 to 006f2b63 has its CatchHandler @ 005f32ac */
    FUN_005fdb84(plVar18,0x23,bVar2,0,0);
  }
  *(uint *)((long)plVar18 + 0x3c) = (uint)*(byte *)((long)plVar18 + 0x4a);
  FUN_005fde2c(plVar18,(int)plVar20[1]);
  FUN_005fde2c(plVar18,iVar7);
  if (param_5 == 0) {
    FUN_005fdb84(plVar18,0x21,param_2,0,param_4);
                    /* try { // try from 005f2bc0 to 006f2bcb has its CatchHandler @ 005f3320 */
    FUN_006001d0(plVar18,param_3);
    uVar8 = FUN_005fdba0(plVar18);
                    /* try { // try from 005f2bd4 to 006f2bdf has its CatchHandler @ 005f32a8 */
  }
  else {
    uVar8 = FUN_005fdc7c(plVar18,0x1f,param_2,0x1fffe);
    FUN_006001d0(plVar18,param_3);
  }
                    /* try { // try from 005f2be0 to 006f2beb has its CatchHandler @ 005f323c */
  FUN_005fdd68(plVar18,uVar8,iVar7 + 1);
                    /* try { // try from 005f2bec to 006f2bff has its CatchHandler @ 005f31d8 */
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005f2c00 to 006f2c0b has its CatchHandler @ 005f3198 */
  return;
}


