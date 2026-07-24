/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f0e8c
 * Function: FUN_005f0e8c
 * Signature: undefined FUN_005f0e8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f0e8c(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 005f0eac to 006f0ebf has its CatchHandler @ 005f1f38 */
  lVar13 = *(long *)(param_1 + 0x30);
                    /* try { // try from 005f0ec0 to 006f0ecb has its CatchHandler @ 005f1ee0 */
  local_50 = 0xffffffff;
  local_4a = 0;
  local_4c = *(undefined1 *)(lVar13 + 0x4a);
                    /* try { // try from 005f0ecc to 006f0edf has its CatchHandler @ 005f1e84 */
  local_4b = 0;
  local_58 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 **)(lVar13 + 0x28) = &local_58;
                    /* try { // try from 005f0ee0 to 006f0eeb has its CatchHandler @ 005f1e4c */
  uVar4 = *(short *)(*(long *)(param_1 + 0x38) + 0x60) + 1;
                    /* try { // try from 005f0eec to 006f0fff has its CatchHandler @ 005f08ec */
  *(ushort *)(*(long *)(param_1 + 0x38) + 0x60) = uVar4;
  if (200 < uVar4) {
    FUN_006007a0(param_1,"chunk has too many syntax levels",0);
  }
  do {
    uVar5 = *(int *)(param_1 + 0x10) - 0x104;
    if ((uVar5 < 0x1c) && ((1 << (ulong)(uVar5 & 0x1f) & 0x8010007U) != 0)) break;
    iVar7 = FUN_005efacc(param_1);
    if (*(int *)(param_1 + 0x10) == 0x3b) {
      FUN_00600a74(param_1);
    }
    *(uint *)(*(long *)(param_1 + 0x30) + 0x3c) = (uint)*(byte *)(*(long *)(param_1 + 0x30) + 0x4a);
  } while (iVar7 == 0);
  *(short *)(*(long *)(param_1 + 0x38) + 0x60) = *(short *)(*(long *)(param_1 + 0x38) + 0x60) + -1;
  puVar14 = *(undefined8 **)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = *puVar14;
  plVar8 = *(long **)(*(long *)(lVar13 + 0x18) + 0x30);
  bVar2 = *(byte *)((long)puVar14 + 0xc);
  bVar3 = *(byte *)((long)plVar8 + 0x4a);
  uVar12 = (ulong)bVar3;
  if (bVar3 <= bVar2) goto LAB_005f103c;
  uVar1 = (undefined4)plVar8[6];
  uVar5 = (bVar3 - 1) - (uint)bVar2;
  lVar9 = *(long *)(*plVar8 + 0x30);
  uVar10 = ((ulong)uVar5 & 0xff) + 1;
  if (uVar10 < 2) {
LAB_005f1014:
    do {
      uVar5 = (int)uVar12 - 1;
                    /* try { // try from 005f101c to 006f102b has its CatchHandler @ 005f1cc0 */
      *(undefined4 *)
       (lVar9 + (ulong)*(ushort *)((long)plVar8 + (ulong)(byte)uVar5 * 2 + 0xc4) * 0x10 + 0xc) =
           uVar1;
      uVar12 = uVar12 - 1;
    } while ((uint)bVar2 < (uVar5 & 0xff));
  }
  else {
    uVar5 = ~uVar5 & 1;
    lVar11 = uVar10 - uVar5;
    uVar10 = uVar12 - lVar11;
    uVar12 = uVar12 + 0xfe;
    do {
      iVar7 = (int)uVar12;
      uVar4 = *(ushort *)((long)plVar8 + (uVar12 & 0xff) * 2 + 0xc4);
      lVar11 = lVar11 + -2;
      uVar12 = uVar12 - 2;
                    /* try { // try from 005f1000 to 006f1007 has its CatchHandler @ 005f1c80 */
      *(undefined4 *)
       (lVar9 + (ulong)*(ushort *)((long)plVar8 + ((ulong)(iVar7 + 1) & 0xff) * 2 + 0xc4) * 0x10 +
       0xc) = uVar1;
      *(undefined4 *)(lVar9 + (ulong)uVar4 * 0x10 + 0xc) = uVar1;
    } while (lVar11 != 0);
    uVar12 = uVar10;
    if (uVar5 != 0) goto LAB_005f1014;
  }
  *(byte *)((long)plVar8 + 0x4a) = bVar2;
LAB_005f103c:
  if (*(char *)((long)puVar14 + 0xd) != '\0') {
                    /* try { // try from 005f104c to 006f1057 has its CatchHandler @ 005f1c3c */
    FUN_005fdb84(lVar13,0x23,bVar2,0,0);
  }
  *(uint *)(lVar13 + 0x3c) = (uint)*(byte *)(lVar13 + 0x4a);
  FUN_005fde2c(lVar13,*(undefined4 *)(puVar14 + 1));
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005f107c to 006f107f has its CatchHandler @ 005f1c70 */
  return;
}


