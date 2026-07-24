/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ef820
 * Function: FUN_005ef820
 * Signature: undefined FUN_005ef820(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ef820(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  plVar1 = *(long **)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  uVar12 = (ulong)*(byte *)((long)plVar1 + 0x4a);
  lVar14 = *plVar1;
  if (uVar12 != 0) {
    uVar3 = (undefined4)plVar1[6];
    lVar8 = *(long *)(lVar14 + 0x30);
    uVar5 = *(byte *)((long)plVar1 + 0x4a) - 1;
    uVar13 = ((ulong)uVar5 & 0xff) + 1;
                    /* catch() { ... } // from try @ 005ef760 with catch @ 005ef85c */
    if (1 < uVar13) {
      uVar5 = ~uVar5 & 1;
      lVar10 = uVar13 - uVar5;
      uVar9 = uVar12 - lVar10;
      uVar13 = uVar12 + 0xfe;
      do {
        iVar11 = (int)uVar13;
                    /* try { // try from 005ef880 to 006ef8f7 has its CatchHandler @ 005ef900 */
        uVar4 = *(ushort *)((long)plVar1 + (uVar13 & 0xff) * 2 + 0xc4);
        lVar10 = lVar10 + -2;
        uVar13 = uVar13 - 2;
        *(undefined4 *)
         (lVar8 + (ulong)*(ushort *)((long)plVar1 + ((ulong)(iVar11 + 1) & 0xff) * 2 + 0xc4) * 0x10
         + 0xc) = uVar3;
                    /* catch() { ... } // from try @ 005ef7d8 with catch @ 005ef8ac */
        *(undefined4 *)(lVar8 + (ulong)uVar4 * 0x10 + 0xc) = uVar3;
        uVar12 = uVar9;
        if (lVar10 == 0) goto joined_r0x005ef8b4;
      } while( true );
    }
    do {
      uVar6 = (int)uVar12 - 1;
      uVar5 = uVar6 & 0xff;
      *(undefined4 *)
       (lVar8 + (ulong)*(ushort *)((long)plVar1 + (ulong)(byte)uVar6 * 2 + 0xc4) * 0x10 + 0xc) =
           uVar3;
      uVar12 = uVar12 - 1;
joined_r0x005ef8b4:
    } while (uVar5 != 0);
    *(undefined1 *)((long)plVar1 + 0x4a) = 0;
  }
  FUN_005fdd3c(plVar1,0,0);
  if ((int)plVar1[6] < -1) {
    uVar7 = FUN_005eede0(lVar2);
  }
  else {
                    /* try { // try from 005ef8f8 to 006ef903 has its CatchHandler @ 005ef714 */
                    /* catch() { ... } // from try @ 005ef880 with catch @ 005ef900 */
    uVar7 = FUN_005eed74(lVar2,*(undefined8 *)(lVar14 + 0x18),(long)*(int *)(lVar14 + 0x50) << 2,
                         (long)(int)plVar1[6] << 2);
  }
  *(undefined8 *)(lVar14 + 0x18) = uVar7;
  iVar11 = (int)plVar1[6];
                    /* catch() { ... } // from try @ 005efb34 with catch @ 005ef938
                       catch() { ... } // from try @ 005efd14 with catch @ 005ef938 */
  *(int *)(lVar14 + 0x50) = iVar11;
  if (iVar11 < -1) {
    uVar7 = FUN_005eede0(lVar2);
  }
  else {
    uVar7 = FUN_005eed74(lVar2,*(undefined8 *)(lVar14 + 0x28),(long)*(int *)(lVar14 + 0x54) << 2,
                         (long)iVar11 << 2);
  }
  *(undefined8 *)(lVar14 + 0x28) = uVar7;
  *(int *)(lVar14 + 0x54) = (int)plVar1[6];
                    /* try { // try from 005ef988 to 006ef9af has its CatchHandler @ 005efb90 */
  if ((int)plVar1[8] < -1) {
    uVar7 = FUN_005eede0(lVar2);
  }
  else {
    uVar7 = FUN_005eed74(lVar2,*(undefined8 *)(lVar14 + 0x10),(long)*(int *)(lVar14 + 0x4c) << 4,
                         (long)(int)plVar1[8] << 4);
  }
  *(undefined8 *)(lVar14 + 0x10) = uVar7;
  *(int *)(lVar14 + 0x4c) = (int)plVar1[8];
  if (*(int *)((long)plVar1 + 0x44) < -1) {
    uVar7 = FUN_005eede0(lVar2);
  }
  else {
                    /* try { // try from 005ef9ec to 006efa13 has its CatchHandler @ 005efb80 */
    uVar7 = FUN_005eed74(lVar2,*(undefined8 *)(lVar14 + 0x20),(long)*(int *)(lVar14 + 0x58) << 3,
                         (long)*(int *)((long)plVar1 + 0x44) << 3);
  }
  *(undefined8 *)(lVar14 + 0x20) = uVar7;
  *(undefined4 *)(lVar14 + 0x58) = *(undefined4 *)((long)plVar1 + 0x44);
  if ((long)(short)plVar1[9] + 1U >> 0x3c == 0) {
                    /* try { // try from 005efa34 to 006efa5b has its CatchHandler @ 005efb70 */
    uVar7 = FUN_005eed74(lVar2,*(undefined8 *)(lVar14 + 0x30),(long)*(int *)(lVar14 + 0x5c) << 4,
                         (long)(short)plVar1[9] << 4);
  }
  else {
    uVar7 = FUN_005eede0(lVar2);
  }
  *(undefined8 *)(lVar14 + 0x30) = uVar7;
  *(int *)(lVar14 + 0x5c) = (int)(short)plVar1[9];
  uVar7 = FUN_005eed74(lVar2,*(undefined8 *)(lVar14 + 0x38),(long)*(int *)(lVar14 + 0x48) << 3,
                       (ulong)*(byte *)(lVar14 + 0x70) << 3);
  *(undefined8 *)(lVar14 + 0x38) = uVar7;
                    /* try { // try from 005efa7c to 006efaa3 has its CatchHandler @ 005efb60 */
  *(uint *)(lVar14 + 0x48) = (uint)*(byte *)(lVar14 + 0x70);
  *(long *)(param_1 + 0x30) = plVar1[2];
  if (*(int *)(param_1 + 0x10) - 0x11dU < 2) {
    FUN_00600970(param_1,*(long *)(param_1 + 0x18) + 0x18,
                 *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
  }
  *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + -0x20;
                    /* try { // try from 005efac4 to 006efaeb has its CatchHandler @ 005efb50 */
  return;
}


