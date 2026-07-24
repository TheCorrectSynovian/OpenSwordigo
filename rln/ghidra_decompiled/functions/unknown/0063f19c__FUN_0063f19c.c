/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f19c
 * Function: FUN_0063f19c
 * Signature: undefined FUN_0063f19c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f19c(long param_1)

{
  byte *pbVar1;
  uint3 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  plVar5 = *(long **)(param_1 + 0x10);
                    /* try { // try from 0063f1ac to 0073f1bf has its CatchHandler @ 0063f474 */
  if (plVar5 == (long *)0x0) {
    plVar5 = operator_new(0x150);
    *(undefined4 *)(plVar5 + 1) = 0;
    puVar3 = PTR_DAT_007e7f30;
                    /* catch() { ... } // from try @ 0063f1f8 with catch @ 0063f3c4 */
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = (long)(puVar3 + 0x10);
    *(undefined1 *)(plVar5 + 4) = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
                    /* try { // try from 0063f3e8 to 0073f45f has its CatchHandler @ 0063f464 */
    plVar5[8] = 0;
    *(undefined4 *)(plVar5 + 9) = 0;
    *(undefined4 *)((long)plVar5 + 0x4c) = 0;
    *(undefined1 *)(plVar5 + 0x29) = 0;
    *(long **)(param_1 + 0x10) = plVar5;
  }
  plVar5[3] = 0;
  plVar5[2] = (long)"";
  *(undefined4 *)(plVar5 + 9) = 0x2e;
  *(undefined4 *)((long)plVar5 + 0x4c) = 0x2c;
  *(undefined1 *)(plVar5 + 4) = 0;
  puVar7 = (ulong *)(plVar5 + 10);
  puVar8 = (ulong *)(plVar5 + 0x1c);
  puVar9 = *(ulong **)PTR_PTR_007e5110;
                    /* try { // try from 0063f1f8 to 0073f21f has its CatchHandler @ 0063f3c4 */
  if ((puVar7 < (ulong *)((long)puVar9 + 0x24U)) && (puVar9 < puVar8)) {
    lVar4 = 0;
    do {
      pbVar1 = (byte *)((long)puVar9 + lVar4);
      lVar4 = lVar4 + 1;
      *(uint *)puVar7 = (uint)*pbVar1;
      puVar7 = (ulong *)((long)puVar7 + 4);
    } while (lVar4 != 0x24);
  }
  else {
    uVar14 = puVar9[1];
    uVar13 = *puVar9;
    uVar10 = (undefined1)(uVar13 >> 8);
    uVar11 = (undefined1)(uVar13 >> 0x28);
    uVar2 = CONCAT12((char)(uVar14 >> 8),(short)uVar14) & 0xff00ff;
    uVar12 = (undefined1)(uVar14 >> 0x28);
    plVar5[0xb] = (ulong)CONCAT14((char)(uVar13 >> 0x18),(uint)(byte)(uVar13 >> 0x10));
    *puVar7 = (ulong)((uint6)CONCAT14(uVar10,(uint)CONCAT12(uVar10,(ushort)(byte)uVar13)) &
                     0xffff0000ffff);
    plVar5[0xd] = (ulong)CONCAT14((char)(uVar13 >> 0x38),(uint)(byte)(uVar13 >> 0x30));
    plVar5[0xc] = (ulong)((uint6)CONCAT14(uVar11,(uint)CONCAT12(uVar11,(ushort)(byte)(uVar13 >> 0x20
                                                                                     ))) &
                         0xffff0000ffff);
                    /* try { // try from 0063f240 to 0073f267 has its CatchHandler @ 0063f474 */
    plVar5[0xf] = (ulong)CONCAT14((char)(uVar14 >> 0x18),(uint)(byte)(uVar14 >> 0x10));
    plVar5[0xe] = (ulong)((uint6)CONCAT14((char)(uVar2 >> 0x10),(uint)uVar2) & 0xffff0000ffff);
    plVar5[0x11] = (ulong)CONCAT14((char)(uVar14 >> 0x38),(uint)(byte)(uVar14 >> 0x30));
    plVar5[0x10] = (ulong)((uint6)CONCAT14(uVar12,(uint)CONCAT12(uVar12,(ushort)(byte)(uVar14 >>
                                                                                      0x20))) &
                          0xffff0000ffff);
    uVar14 = puVar9[3];
    uVar13 = puVar9[2];
    uVar10 = (undefined1)(uVar13 >> 8);
    uVar11 = (undefined1)(uVar13 >> 0x28);
    uVar2 = CONCAT12((char)(uVar14 >> 8),(short)uVar14) & 0xff00ff;
    uVar12 = (undefined1)(uVar14 >> 0x28);
    plVar5[0x13] = (ulong)CONCAT14((char)(uVar13 >> 0x18),(uint)(byte)(uVar13 >> 0x10));
    plVar5[0x12] = (ulong)((uint6)CONCAT14(uVar10,(uint)CONCAT12(uVar10,(ushort)(byte)uVar13)) &
                          0xffff0000ffff);
    plVar5[0x15] = (ulong)CONCAT14((char)(uVar13 >> 0x38),(uint)(byte)(uVar13 >> 0x30));
    plVar5[0x14] = (ulong)((uint6)CONCAT14(uVar11,(uint)CONCAT12(uVar11,(ushort)(byte)(uVar13 >>
                                                                                      0x20))) &
                          0xffff0000ffff);
    plVar5[0x17] = (ulong)CONCAT14((char)(uVar14 >> 0x18),(uint)(byte)(uVar14 >> 0x10));
    plVar5[0x16] = (ulong)((uint6)CONCAT14((char)(uVar2 >> 0x10),(uint)uVar2) & 0xffff0000ffff);
    plVar5[0x19] = (ulong)CONCAT14((char)(uVar14 >> 0x38),(uint)(byte)(uVar14 >> 0x30));
    plVar5[0x18] = (ulong)((uint6)CONCAT14(uVar12,(uint)CONCAT12(uVar12,(ushort)(byte)(uVar14 >>
                                                                                      0x20))) &
                          0xffff0000ffff);
    *(uint *)(plVar5 + 0x1a) = (uint)(byte)puVar9[4];
    *(uint *)((long)plVar5 + 0xd4) = (uint)*(byte *)((long)puVar9 + 0x21);
    *(uint *)(plVar5 + 0x1b) = (uint)*(byte *)((long)puVar9 + 0x22);
    *(uint *)((long)plVar5 + 0xdc) = (uint)*(byte *)((long)puVar9 + 0x23);
  }
  plVar6 = *(long **)PTR_PTR_007e4f98;
                    /* try { // try from 0063f2a8 to 0073f2b3 has its CatchHandler @ 0063f414 */
                    /* try { // try from 0063f2b4 to 0073f3e7 has its CatchHandler @ 0063f15c */
  if ((puVar8 < (ulong *)((long)plVar6 + 0x1aU)) && (plVar6 < plVar5 + 0x29)) {
    lVar4 = 0;
    do {
      pbVar1 = (byte *)((long)plVar6 + lVar4);
      lVar4 = lVar4 + 1;
      *(uint *)puVar8 = (uint)*pbVar1;
      puVar8 = (ulong *)((long)puVar8 + 4);
    } while (lVar4 != 0x1a);
  }
  else {
    lVar15 = plVar6[1];
    lVar4 = *plVar6;
    uVar10 = (undefined1)((ulong)lVar4 >> 8);
    uVar11 = (undefined1)((ulong)lVar4 >> 0x28);
    uVar2 = CONCAT12((char)((ulong)lVar15 >> 8),(short)lVar15) & 0xff00ff;
    uVar12 = (undefined1)((ulong)lVar15 >> 0x28);
    plVar5[0x1d] = (ulong)CONCAT14((char)((ulong)lVar4 >> 0x18),(uint)(byte)((ulong)lVar4 >> 0x10));
    *puVar8 = (ulong)((uint6)CONCAT14(uVar10,(uint)CONCAT12(uVar10,(ushort)(byte)lVar4)) &
                     0xffff0000ffff);
    plVar5[0x1f] = (ulong)CONCAT14((char)((ulong)lVar4 >> 0x38),(uint)(byte)((ulong)lVar4 >> 0x30));
    plVar5[0x1e] = (ulong)((uint6)CONCAT14(uVar11,(uint)CONCAT12(uVar11,(ushort)(byte)((ulong)lVar4
                                                                                      >> 0x20))) &
                          0xffff0000ffff);
    plVar5[0x21] = (ulong)CONCAT14((char)((ulong)lVar15 >> 0x18),(uint)(byte)((ulong)lVar15 >> 0x10)
                                  );
    plVar5[0x20] = (ulong)((uint6)CONCAT14((char)(uVar2 >> 0x10),(uint)uVar2) & 0xffff0000ffff);
    plVar5[0x23] = (ulong)CONCAT14((char)((ulong)lVar15 >> 0x38),(uint)(byte)((ulong)lVar15 >> 0x30)
                                  );
    plVar5[0x22] = (ulong)((uint6)CONCAT14(uVar12,(uint)CONCAT12(uVar12,(ushort)(byte)((ulong)lVar15
                                                                                      >> 0x20))) &
                          0xffff0000ffff);
    *(uint *)(plVar5 + 0x24) = (uint)*(byte *)(plVar6 + 2);
    *(uint *)((long)plVar5 + 0x124) = (uint)*(byte *)((long)plVar6 + 0x11);
    *(uint *)(plVar5 + 0x25) = (uint)*(byte *)((long)plVar6 + 0x12);
    *(uint *)((long)plVar5 + 300) = (uint)*(byte *)((long)plVar6 + 0x13);
    *(uint *)(plVar5 + 0x26) = (uint)*(byte *)((long)plVar6 + 0x14);
    *(uint *)((long)plVar5 + 0x134) = (uint)*(byte *)((long)plVar6 + 0x15);
    *(uint *)(plVar5 + 0x27) = (uint)*(byte *)((long)plVar6 + 0x16);
    *(uint *)((long)plVar5 + 0x13c) = (uint)*(byte *)((long)plVar6 + 0x17);
    *(uint *)(plVar5 + 0x28) = (uint)*(byte *)(plVar6 + 3);
    *(uint *)((long)plVar5 + 0x144) = (uint)*(byte *)((long)plVar6 + 0x19);
  }
  plVar5[5] = (long)&DAT_0069e680;
  plVar5[6] = 4;
  plVar5[7] = (long)L"false";
  plVar5[8] = 5;
  return;
}


