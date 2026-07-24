/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00619794
 * Function: PVRTDecompressPVRTC
 * Signature: undefined __cdecl PVRTDecompressPVRTC(void * param_1, int param_2, int param_3, int param_4, uchar * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTDecompressPVRTC(void const*, int, int, int, unsigned char*) */

void PVRTDecompressPVRTC(void *param_1,int param_2,int param_3,int param_4,uchar *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uchar uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  bool bVar27;
  int iVar28;
  uint *puVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  int iVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  uint *puVar42;
  uint uVar43;
  uint uVar44;
  undefined8 *puVar45;
  uint uVar46;
  uint uVar47;
  long lVar48;
  uint uVar49;
  ulong uVar50;
  uint uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  uint *puVar55;
  undefined8 *puVar56;
  uint uVar57;
  ulong uVar58;
  ulong uVar59;
  int iVar60;
  undefined8 uVar61;
  int iVar62;
  ulong uVar63;
  ulong uVar64;
  int iVar65;
  ulong uVar66;
  ulong uVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  uint local_5b4;
  int local_590;
  int local_58c;
  int local_588;
  int local_584;
  int local_580;
  int local_57c;
  int local_578;
  int local_574;
  ulong local_570;
  undefined8 local_568;
  ulong local_560;
  uint local_558 [2];
  undefined1 local_550 [16];
  undefined1 auStack_540 [16];
  undefined1 auStack_530 [16];
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [16];
  undefined1 auStack_500 [16];
  void *local_4f0;
  void *pvStack_4e8;
  void *pvStack_4e0;
  void *pvStack_4d8;
  void *local_4c8 [4];
  ulong local_4a8 [2];
  undefined8 uStack_498;
  ulong auStack_490 [60];
  int iStack_2ac;
  ulong local_2a8 [2];
  uint auStack_298 [126];
  
  lVar13 = tpidr_el0;
  lVar40 = *(long *)(lVar13 + 0x28);
                    /* try { // try from 006197d8 to 007197ff has its CatchHandler @ 0061a100 */
  uVar35 = 8;
  uVar5 = 4;
  if (param_2 != 0) {
    uVar5 = uVar35;
  }
  uVar59 = (ulong)uVar5;
  uVar10 = 0;
  if (uVar5 != 0) {
    uVar10 = param_3 / (int)uVar5;
  }
  if ((int)uVar10 < 3) {
    uVar10 = 2;
  }
  iVar60 = param_4 + 3;
  if (-1 < param_4) {
    iVar60 = param_4;
  }
  uVar6 = 2;
  if (7 < param_4) {
    uVar6 = iVar60 >> 2;
  }
  pvStack_4e8 = (void *)0x0;
  local_4f0 = (void *)0x0;
  pvStack_4d8 = (void *)0x0;
  pvStack_4e0 = (void *)0x0;
  if (0 < param_4) {
                    /* try { // try from 00619838 to 0071984b has its CatchHandler @ 0061a164 */
                    /* try { // try from 0061984c to 00719897 has its CatchHandler @ 00619100 */
    iVar60 = (int)DAT_0069c0a0;
                    /* try { // try from 00619898 to 0071989b has its CatchHandler @ 0061a0d4 */
                    /* try { // try from 0061989c to 007198eb has its CatchHandler @ 00619100 */
    uVar17 = (ulong)DAT_0069c0a0 >> 0x20;
    iVar65 = (int)DAT_0069c0b8;
    uVar18 = (ulong)DAT_0069c0b8 >> 0x20;
    iVar68 = (int)DAT_0069c0c0;
    uVar19 = (ulong)DAT_0069c0c0 >> 0x20;
    uVar43 = 7;
    uVar7 = uVar6;
    if (uVar10 <= uVar6) {
      uVar7 = uVar10;
    }
    iVar69 = (int)DAT_0069c0c8;
    uVar20 = (ulong)DAT_0069c0c8 >> 0x20;
                    /* try { // try from 006198ec to 00719903 has its CatchHandler @ 0061a1bc */
    if (param_2 == 0) {
      uVar43 = 3;
      uVar35 = 4;
    }
    iVar70 = (int)DAT_0069c0d0;
    uVar21 = (ulong)DAT_0069c0d0 >> 0x20;
    iVar62 = (int)DAT_0069c0b0;
                    /* try { // try from 00619944 to 0071996b has its CatchHandler @ 00619ea0 */
    uVar22 = (ulong)DAT_0069c0b0 >> 0x20;
    iVar71 = (int)DAT_0069c0d8;
    uVar23 = (ulong)DAT_0069c0d8 >> 0x20;
    iVar72 = (int)DAT_0069c0e0;
    uVar24 = (ulong)DAT_0069c0e0 >> 0x20;
    iVar73 = (int)DAT_0069c0a8;
    uVar25 = (ulong)DAT_0069c0a8 >> 0x20;
    iVar74 = (int)DAT_0069c098;
    uVar26 = (ulong)DAT_0069c098 >> 0x20;
    local_5b4 = 0;
    do {
      if (0 < param_3) {
                    /* try { // try from 0061998c to 007199b3 has its CatchHandler @ 0061a1bc */
        uVar58 = 0;
        uVar32 = (local_5b4 & 3 | (local_5b4 >> 1 & 1) << 2) ^ 4;
        uVar41 = (ulong)uVar32;
        uVar3 = local_5b4 - 2 & param_4 - 1U;
                    /* try { // try from 006199c0 to 007199c7 has its CatchHandler @ 0061a0fc */
        uVar4 = uVar3 + 3;
        if (-1 < (int)(local_5b4 - 2 & param_4 - 1U)) {
          uVar4 = uVar3;
        }
        uVar4 = (int)uVar4 >> 2;
        uVar3 = uVar4 + 1 & uVar6 - 1;
        uVar36 = (ulong)(uVar32 + 1);
        do {
          uVar57 = (uint)uVar58;
          uVar32 = 0;
          if (uVar5 != 0) {
            uVar32 = (int)(uVar57 - (uVar5 >> 1) & param_3 - 1U) / (int)uVar5;
          }
          uVar47 = uVar32;
                    /* try { // try from 00619a08 to 00719a2f has its CatchHandler @ 00619e50 */
          if (uVar10 <= uVar6) {
            uVar47 = uVar4;
          }
          uVar31 = uVar32 + 1 & uVar10 - 1;
          if (uVar7 < 2) {
            uVar44 = 0;
            uVar46 = 0;
          }
          else {
            uVar46 = 0;
            uVar44 = 0;
            uVar49 = 1;
            uVar51 = 1;
            do {
              uVar8 = 0;
              if ((uVar51 & uVar4) != 0) {
                uVar8 = uVar49;
              }
              uVar11 = uVar51 & uVar32;
              uVar51 = uVar51 << 1;
              uVar12 = 0;
              if (uVar11 != 0) {
                uVar12 = uVar49 << 1;
              }
              uVar49 = uVar49 << 2;
              uVar44 = uVar8 | uVar44 | uVar12;
                    /* try { // try from 00619a50 to 00719a77 has its CatchHandler @ 0061a0fc */
              uVar46 = uVar46 + 1;
            } while (uVar51 < uVar7);
          }
          uVar51 = uVar31;
          if (uVar10 <= uVar6) {
            uVar51 = uVar4;
          }
          local_4c8[0] = (void *)((long)param_1 +
                                 (ulong)((uVar47 >> (ulong)(uVar46 & 0x1f)) <<
                                         (ulong)((uVar46 & 0xf) << 1) | uVar44) * 8);
          if (uVar7 < 2) {
            uVar46 = 0;
            uVar47 = 0;
          }
          else {
            uVar47 = 0;
            uVar46 = 0;
            uVar49 = 1;
            uVar44 = 1;
            do {
              uVar8 = 0;
              if ((uVar44 & uVar4) != 0) {
                uVar8 = uVar49;
              }
              uVar11 = uVar44 & uVar31;
              uVar44 = uVar44 << 1;
                    /* try { // try from 00619ab0 to 00719ac3 has its CatchHandler @ 0061a160 */
              uVar12 = 0;
              if (uVar11 != 0) {
                uVar12 = uVar49 << 1;
              }
              uVar49 = uVar49 << 2;
              uVar46 = uVar8 | uVar46 | uVar12;
                    /* try { // try from 00619ac4 to 00719b43 has its CatchHandler @ 00619100 */
              uVar47 = uVar47 + 1;
            } while (uVar44 < uVar7);
          }
          uVar44 = uVar32;
          if (uVar10 <= uVar6) {
            uVar44 = uVar3;
          }
          local_4c8[1] = (void *)((long)param_1 +
                                 (ulong)((uVar51 >> (ulong)(uVar47 & 0x1f)) <<
                                         (ulong)((uVar47 & 0xf) << 1) | uVar46) * 8);
          if (uVar7 < 2) {
                    /* try { // try from 00619b44 to 00719b47 has its CatchHandler @ 0061a0d0 */
            uVar46 = 0;
                    /* try { // try from 00619b48 to 00719b77 has its CatchHandler @ 00619100 */
            uVar47 = 0;
          }
          else {
            uVar47 = 0;
            uVar46 = 0;
            uVar49 = 1;
            uVar51 = 1;
            do {
              uVar8 = 0;
              if ((uVar51 & uVar3) != 0) {
                uVar8 = uVar49;
              }
              uVar11 = uVar51 & uVar32;
              uVar51 = uVar51 << 1;
              uVar12 = 0;
              if (uVar11 != 0) {
                uVar12 = uVar49 << 1;
              }
              uVar49 = uVar49 << 2;
              uVar46 = uVar8 | uVar46 | uVar12;
              uVar47 = uVar47 + 1;
            } while (uVar51 < uVar7);
          }
          uVar32 = uVar31;
          if (uVar10 <= uVar6) {
            uVar32 = uVar3;
          }
          local_4c8[2] = (void *)((long)param_1 +
                                 (ulong)((uVar44 >> (ulong)(uVar47 & 0x1f)) <<
                                         (ulong)((uVar47 & 0xf) << 1) | uVar46) * 8);
          if (uVar7 < 2) {
            uVar46 = 0;
            uVar47 = 0;
          }
          else {
                    /* try { // try from 00619b78 to 00719b87 has its CatchHandler @ 0061a0f8 */
            uVar47 = 0;
            uVar46 = 0;
            uVar51 = 1;
            uVar44 = 1;
            do {
              uVar49 = 0;
              if ((uVar44 & uVar3) != 0) {
                uVar49 = uVar51;
              }
              uVar12 = uVar44 & uVar31;
              uVar44 = uVar44 << 1;
              uVar8 = 0;
              if (uVar12 != 0) {
                uVar8 = uVar51 << 1;
              }
              uVar51 = uVar51 << 2;
              uVar46 = uVar49 | uVar46 | uVar8;
              uVar47 = uVar47 + 1;
            } while (uVar44 < uVar7);
          }
                    /* try { // try from 00619bc8 to 00719bef has its CatchHandler @ 00619e00 */
          local_4c8[3] = (void *)((long)param_1 +
                                 (ulong)((uVar32 >> (ulong)(uVar47 & 0x1f)) <<
                                         (ulong)((uVar47 & 0xf) << 1) | uVar46) * 8);
          iVar28 = memcmp(&local_4f0,local_4c8,0x20);
          if (iVar28 != 0) {
            lVar37 = 0;
            uVar39 = 0;
            puVar42 = auStack_298;
            puVar45 = &uStack_498;
            do {
              lVar48 = 0;
              uVar50 = 0;
                    /* try { // try from 00619c10 to 00719c37 has its CatchHandler @ 0061a0f8 */
              uVar52 = uVar39 | 1;
              uVar53 = uVar39 | 2;
              uVar54 = uVar39 | 3;
              puVar55 = puVar42;
              puVar56 = puVar45;
              do {
                puVar29 = local_4c8[lVar37 * 2 + lVar48];
                puVar1 = &local_570 + lVar37 * 8 + lVar48 * 4;
                puVar2 = puVar1 + 1;
                    /* try { // try from 00619c3c to 00719c47 has its CatchHandler @ 0061a0f4 */
                uVar32 = puVar29[1];
                uVar61 = CONCAT44(uVar32,uVar32);
                if ((uVar32 >> 0xf & 1) == 0) {
                  uVar63 = NEON_ushl(uVar61,CONCAT44(-(int)uVar17,-iVar60),4);
                  uVar63 = uVar63 & 0x1e0000001e;
                  uVar31 = (uVar32 & 0xe) << 1 | (uVar32 & 0x7fffffff) >> 2 & 3;
                  *puVar1 = (ulong)CONCAT14((byte)(uint)(uVar63 >> 0x24) | (byte)(uVar63 >> 0x20),
                                            (uint)(byte)((byte)(uVar63 >> 4) | (byte)uVar63));
                  uVar47 = uVar32 >> 0xb & 0xe;
                  *(uint *)puVar2 = uVar31;
                }
                else {
                  uVar63 = NEON_ushl(uVar61,CONCAT44(-(int)uVar26,-iVar74),4);
                  uVar31 = uVar32 & 0x1e | uVar32 >> 4 & 1;
                    /* try { // try from 00619c88 to 00719caf has its CatchHandler @ 00619db0 */
                  *puVar1 = uVar63 & 0x1f0000001f;
                  *(uint *)puVar2 = uVar31;
                  uVar47 = 0xf;
                }
                *(uint *)((long)&local_568 + lVar48 * 0x20 + lVar37 * 0x40 + 4) = uVar47;
                if ((int)uVar32 < 0) {
                    /* try { // try from 00619cd0 to 00719cf7 has its CatchHandler @ 0061a0f4 */
                  uVar63 = NEON_ushl(uVar61,CONCAT44(-(int)uVar25,-iVar73),4);
                  uVar46 = uVar32 >> 0x10 & 0x1f;
                  uVar63 = uVar63 & 0x1f0000001f;
                  uVar47 = 0xf;
                }
                else {
                  uVar63 = NEON_ushl(uVar61,CONCAT44(-(int)uVar22,-iVar62),4);
                  uVar63 = uVar63 & 0x1e0000001e;
                  uVar46 = (uVar32 >> 0x10 & 0xf) << 1;
                  *(uint *)puVar2 = uVar31 | (int)uVar31 >> 4;
                  uVar63 = (ulong)CONCAT14((byte)(uint)(uVar63 >> 0x24) | (byte)(uVar63 >> 0x20),
                                           (uint)(byte)((byte)(uVar63 >> 4) | (byte)uVar63));
                  uVar47 = uVar32 >> 0x1b & 0xe;
                }
                (&local_560)[lVar37 * 8 + lVar48 * 4] = uVar63;
                local_558[lVar37 * 0x10 + lVar48 * 8] = uVar46;
                *(uint *)(local_550 + lVar48 * 0x20 + lVar37 * 0x40 + -4) = uVar47;
                uVar31 = *puVar29;
                uVar47 = uVar32 & 1;
                if ((param_2 == 0) || (uVar47 == 0)) {
                    /* catch() { ... } // from try @ 00619bc8 with catch @ 00619e00 */
                  if (param_2 == 0) {
                    uVar61 = CONCAT44(uVar31,uVar31);
                    uVar33 = uVar50 * 4;
                    lVar30 = uVar39 * 0x40 + -0x2a8;
                    uVar66 = NEON_ushl(uVar61,CONCAT44(-(int)uVar18,-iVar65),4);
                    uVar63 = uVar50 | 3;
                    uVar34 = CONCAT44(uVar32,uVar32) & 0x100000001;
                    uVar64 = CONCAT44(uVar32,uVar32) & 0x100000001;
                    /* catch() { ... } // from try @ 00619944 with catch @ 00619ea0 */
                    *(uint *)((long)local_2a8 + uVar33 + lVar30 + 0x2a8) = uVar31 & 3;
                    *(ulong *)((long)local_2a8 + (uVar33 | 4) + lVar30 + 0x2a8) =
                         uVar66 & 0x300000003;
                    *(uint *)((long)local_2a8 + uVar63 * 4 + lVar30 + 0x2a8) = uVar31 >> 6 & 3;
                    puVar2 = (ulong *)((long)local_4a8 + uVar33 + uVar39 * 0x40);
                    puVar2[1] = uVar64;
                    *puVar2 = uVar34;
                    puVar2 = (ulong *)((long)local_4a8 + uVar33 + uVar52 * 0x40);
                    puVar2[1] = uVar64;
                    *puVar2 = uVar34;
                    puVar2 = (ulong *)((long)local_4a8 + uVar33 + uVar53 * 0x40);
                    puVar2[1] = uVar64;
                    *puVar2 = uVar34;
                    lVar30 = uVar54 * 0x40 + -0x4a8;
                    *(uint *)((long)local_4a8 + uVar33 + lVar30 + 0x4a8) = uVar47;
                    *(uint *)((long)local_4a8 + (uVar33 | 4) + lVar30 + 0x4a8) = uVar47;
                    uVar34 = uVar33 | 8;
                    uVar64 = NEON_ushl(uVar61,CONCAT44(-(int)uVar19,-iVar68),4);
                    uVar66 = NEON_ushl(uVar61,CONCAT44(-(int)uVar20,-iVar69),4);
                    /* catch() { ... } // from try @ 00619790 with catch @ 00619ef0 */
                    *(uint *)((long)local_4a8 + uVar34 + lVar30 + 0x4a8) = uVar47;
                    lVar30 = uVar52 * 0x40 + -0x2a8;
                    *(ulong *)((long)local_2a8 + uVar33 + lVar30 + 0x2a8) = uVar64 & 0x300000003;
                    *(ulong *)((long)local_2a8 + uVar34 + lVar30 + 0x2a8) = uVar66 & 0x300000003;
                    uVar66 = NEON_ushl(uVar61,CONCAT44(-(int)uVar21,-iVar70),4);
                    uVar67 = NEON_ushl(uVar61,CONCAT44(-(int)uVar23,-iVar71),4);
                    uVar64 = NEON_ushl(uVar61,CONCAT44(-(int)uVar24,-iVar72),4);
                    lVar30 = uVar53 * 0x40 + -0x2a8;
                    lVar14 = uVar54 * 0x40 + -0x2a8;
                    uVar32 = uVar31 >> 0x1c & 3;
                    *(ulong *)((long)local_2a8 + uVar33 + lVar30 + 0x2a8) = uVar66 & 0x300000003;
                    *(ulong *)((long)local_2a8 + uVar34 + lVar30 + 0x2a8) = uVar67 & 0x300000003;
                    *(ulong *)((long)local_2a8 + uVar33 + lVar14 + 0x2a8) = uVar64 & 0x300000003;
                    puVar29 = (uint *)((long)local_2a8 + uVar34 + lVar14 + 0x2a8);
                    goto LAB_00619f3c;
                  }
                  lVar30 = 0;
                  uVar63 = CONCAT44(uVar32,uVar32) & 0x100000001;
                  uVar33 = CONCAT44(uVar32,uVar32) & 0x100000001;
                  do {
                    puVar29 = (uint *)((long)puVar55 + lVar30);
                    puVar2 = (ulong *)((long)puVar56 + lVar30);
                    puVar29[-4] = -(uVar31 & 1) & 3;
                    puVar29[-3] = -(uVar31 >> 1 & 1) & 3;
                    uVar32 = uVar31 >> 4;
                    puVar2[-1] = uVar33;
                    puVar2[-2] = uVar63;
                    puVar2[1] = uVar33;
                    *puVar2 = uVar63;
                    uVar47 = uVar31 >> 5;
                    uVar46 = uVar31 >> 6;
                    puVar29[-2] = -(uVar31 >> 2 & 1) & 3;
                    puVar29[-1] = -(uVar31 >> 3 & 1) & 3;
                    uVar44 = uVar31 >> 7;
                    /* catch() { ... } // from try @ 00619a08 with catch @ 00619e50 */
                    lVar30 = lVar30 + 0x40;
                    uVar31 = uVar31 >> 8;
                    *puVar29 = -(uVar32 & 1) & 3;
                    puVar29[1] = -(uVar47 & 1) & 3;
                    puVar29[2] = -(uVar46 & 1) & 3;
                    puVar29[3] = -(uVar44 & 1) & 3;
                  } while (lVar30 != 0x100);
                }
                else {
                  uVar33 = uVar50 * 4;
                  lVar30 = uVar39 * 0x40 + -0x2a8;
                  *(uint *)((long)local_2a8 + uVar33 + lVar30 + 0x2a8) = uVar31 & 3;
                  *(uint *)((long)local_2a8 + (uVar33 | 8) + lVar30 + 0x2a8) = uVar31 >> 2 & 3;
                  lVar30 = uVar33 + 0x10;
                    /* try { // try from 00619d28 to 00719d3b has its CatchHandler @ 0061a110 */
                  auStack_298[uVar39 * 0x10 + uVar50] = uVar31 >> 4 & 3;
                    /* try { // try from 00619d3c to 00719dd3 has its CatchHandler @ 00619100 */
                  auStack_298[uVar39 * 0x10 + uVar50 + 2] = uVar31 >> 6 & 3;
                  lVar14 = uVar52 * 0x40 + -0x2a8;
                  *(uint *)((long)local_2a8 + (uVar33 | 4) + lVar14 + 0x2a8) = uVar31 >> 8 & 3;
                  *(uint *)((long)local_2a8 + (uVar33 | 0xc) + lVar14 + 0x2a8) = uVar31 >> 10 & 3;
                  uVar63 = uVar50 + 7;
                  auStack_298[uVar52 * 0x10 + uVar50 + 1] = uVar31 >> 0xc & 3;
                  *(uint *)((long)local_2a8 + uVar63 * 4 + lVar14 + 0x2a8) = uVar31 >> 0xe & 3;
                  lVar14 = uVar53 * 0x40 + -0x2a8;
                  *(uint *)((long)local_2a8 + uVar33 + lVar14 + 0x2a8) = uVar31 >> 0x10 & 3;
                  *(uint *)((long)local_2a8 + (uVar33 | 8) + lVar14 + 0x2a8) = uVar31 >> 0x12 & 3;
                  auStack_298[uVar53 * 0x10 + uVar50] = uVar31 >> 0x14 & 3;
                  auStack_298[uVar53 * 0x10 + uVar50 + 2] = uVar31 >> 0x16 & 3;
                  lVar16 = uVar54 * 0x40 + -0x2a8;
                  *(uint *)((long)local_2a8 + (uVar33 | 4) + lVar16 + 0x2a8) = uVar31 >> 0x18 & 3;
                  uVar34 = CONCAT44(uVar32,uVar32) & 0x100000001;
                  uVar64 = CONCAT44(uVar32,uVar32) & 0x100000001;
                  lVar14 = uVar39 * 0x40 + -0x4a8;
                    /* catch() { ... } // from try @ 00619c88 with catch @ 00619db0 */
                  lVar15 = uVar52 * 0x40 + -0x4a8;
                  puVar2 = (ulong *)((long)local_4a8 + uVar33 + lVar14 + 0x4a8);
                  puVar2[1] = uVar64;
                  *puVar2 = uVar34;
                  puVar2 = (ulong *)((long)&uStack_498 + lVar30 + lVar14 + 0x498);
                  puVar2[1] = uVar64;
                  *puVar2 = uVar34;
                  puVar2 = (ulong *)((long)local_4a8 + uVar33 + lVar15 + 0x4a8);
                  puVar2[1] = uVar64;
                  *puVar2 = uVar34;
                  puVar2 = (ulong *)((long)&uStack_498 + lVar30 + lVar15 + 0x498);
                  puVar2[1] = uVar64;
                  *puVar2 = uVar34;
                  lVar14 = uVar53 * 0x40 + -0x4a8;
                  lVar15 = uVar54 * 0x40 + -0x4a8;
                  puVar2 = (ulong *)((long)local_4a8 + uVar33 + lVar14 + 0x4a8);
                    /* try { // try from 00619dd4 to 0071a0cb has its CatchHandler @ 0061a2b0 */
                  puVar2[1] = uVar64;
                  *puVar2 = uVar34;
                  puVar2 = (ulong *)((long)&uStack_498 + lVar30 + lVar14 + 0x498);
                  puVar2[1] = uVar64;
                  *puVar2 = uVar34;
                  puVar2 = (ulong *)((long)local_4a8 + uVar33 + lVar15 + 0x4a8);
                  puVar2[1] = uVar64;
                  *puVar2 = uVar34;
                  *(uint *)((long)local_2a8 + (uVar33 | 0xc) + lVar16 + 0x2a8) = uVar31 >> 0x1a & 3;
                  *(uint *)((long)&uStack_498 + lVar30 + lVar15 + 0x498) = uVar47;
                  *(uint *)((long)auStack_490 + uVar33 + lVar15 + 0x4a4) = uVar47;
                  auStack_298[uVar54 * 0x10 + uVar50 + 1] = uVar31 >> 0x1c & 3;
                  puVar29 = (uint *)((long)auStack_490 + uVar33 + lVar15 + 0x4a8);
                  uVar32 = 1;
LAB_00619f3c:
                  *puVar29 = uVar32;
                    /* catch() { ... } // from try @ 006196cc with catch @ 00619f40 */
                  *(uint *)((long)local_4a8 + uVar63 * 4 + uVar54 * 0x40) = uVar47;
                  *(uint *)((long)local_2a8 + uVar63 * 4 + uVar54 * 0x40) = uVar31 >> 0x1e;
                }
                lVar48 = lVar48 + 1;
                uVar50 = uVar50 + uVar59;
                puVar56 = (undefined8 *)((long)puVar56 + uVar59 * 4);
                puVar55 = puVar55 + uVar59;
              } while (lVar48 != 2);
              lVar37 = lVar37 + 1;
              uVar39 = uVar39 + 4;
              puVar45 = puVar45 + 0x20;
              puVar42 = puVar42 + 0x40;
            } while (lVar37 != 2);
            pvStack_4e8 = local_4c8[1];
            local_4f0 = local_4c8[0];
                    /* catch() { ... } // from try @ 006194f0 with catch @ 00619f90 */
            pvStack_4d8 = local_4c8[3];
            pvStack_4e0 = local_4c8[2];
          }
          FUN_0061aaa8(&local_570,local_550,auStack_530,auStack_510,param_2,uVar58 & 0xffffffff,
                       local_5b4,&local_580);
          FUN_0061aaa8(&local_560,auStack_540,auStack_520,auStack_500,param_2,uVar58 & 0xffffffff,
                       local_5b4,&local_590);
                    /* catch() { ... } // from try @ 0061942c with catch @ 00619fe0 */
          uVar32 = (uVar35 & uVar57 << 1 | uVar43 & uVar57) ^ uVar35;
          uVar39 = (ulong)uVar32;
          iVar28 = *(int *)((long)local_4a8 + uVar39 * 4 + uVar41 * 0x40);
          if (iVar28 == 0) {
            iVar28 = *(int *)(&DAT_0069c170 +
                             (long)*(int *)((long)local_2a8 + uVar39 * 4 + uVar41 * 0x40) * 4);
            bVar27 = false;
          }
          else if (param_2 == 0) {
            lVar37 = (long)*(int *)((long)local_2a8 + uVar39 * 4 + uVar41 * 0x40);
            iVar28 = *(int *)(&DAT_0069c180 + lVar37 * 4);
            bVar27 = lVar37 == 2;
                    /* catch() { ... } // from try @ 006191c4 with catch @ 0061a080 */
          }
          else if (((local_5b4 ^ uVar57) & 1) == 0) {
                    /* catch() { ... } // from try @ 00619284 with catch @ 0061a030 */
            iVar28 = *(int *)(&DAT_0069c170 +
                             (long)*(int *)((long)local_2a8 + uVar39 * 4 + uVar41 * 0x40) * 4);
            bVar27 = false;
          }
          else {
            if (iVar28 == 2) {
                    /* catch() { ... } // from try @ 006194a8 with catch @ 0061a104
                       catch() { ... } // from try @ 00619538 with catch @ 0061a104 */
                    /* catch() { ... } // from try @ 00619238 with catch @ 0061a108
                       catch() { ... } // from try @ 006192cc with catch @ 0061a108 */
                    /* catch() { ... } // from try @ 00619174 with catch @ 0061a10c
                       catch() { ... } // from try @ 0061920c with catch @ 0061a10c */
                    /* catch() { ... } // from try @ 00619d28 with catch @ 0061a110 */
              iVar38 = *(int *)(&DAT_0069c170 +
                               (long)(&iStack_2ac)[uVar41 * 0x10 + (long)(int)uVar32] * 4) +
                       *(int *)(&DAT_0069c170 +
                               (long)*(int *)((long)local_2a8 +
                                             (ulong)(uVar32 + 1) * 4 + uVar41 * 0x40) * 4);
            }
            else {
              if (iVar28 == 1) {
                bVar27 = false;
                    /* try { // try from 0061a0cc to 0071a133 has its CatchHandler @ 00619100 */
                    /* catch() { ... } // from try @ 00619b44 with catch @ 0061a0d0 */
                    /* catch() { ... } // from try @ 00619898 with catch @ 0061a0d4 */
                    /* catch() { ... } // from try @ 00619620 with catch @ 0061a0d8 */
                    /* catch() { ... } // from try @ 00619380 with catch @ 0061a0dc */
                    /* catch() { ... } // from try @ 00619140 with catch @ 0061a0e0 */
                iVar28 = *(int *)(&DAT_0069c170 +
                                 (long)*(int *)((long)local_2a8 + uVar39 * 4 + (uVar41 - 1) * 0x40)
                                 * 4) +
                         *(int *)(&DAT_0069c170 +
                                 (long)*(int *)((long)local_2a8 + uVar39 * 4 + uVar36 * 0x40) * 4) +
                         *(int *)(&DAT_0069c170 +
                                 (long)(&iStack_2ac)[uVar41 * 0x10 + (long)(int)uVar32] * 4) +
                         *(int *)(&DAT_0069c170 +
                                 (long)*(int *)((long)local_2a8 +
                                               (ulong)(uVar32 + 1) * 4 + uVar41 * 0x40) * 4);
                iVar38 = iVar28 + 2;
                    /* catch() { ... } // from try @ 00619c3c with catch @ 0061a0f4
                       catch() { ... } // from try @ 00619cd0 with catch @ 0061a0f4 */
                iVar28 = iVar28 + 5;
                    /* catch() { ... } // from try @ 00619b78 with catch @ 0061a0f8
                       catch() { ... } // from try @ 00619c10 with catch @ 0061a0f8 */
                if (-1 < iVar38) {
                  iVar28 = iVar38;
                }
                    /* catch() { ... } // from try @ 006199c0 with catch @ 0061a0fc
                       catch() { ... } // from try @ 00619a50 with catch @ 0061a0fc */
                iVar28 = iVar28 >> 2;
                    /* catch() { ... } // from try @ 00619748 with catch @ 0061a100
                       catch() { ... } // from try @ 006197d8 with catch @ 0061a100 */
                goto LAB_0061a178;
              }
                    /* try { // try from 0061a134 to 0071a2a7 has its CatchHandler @ 0061a2b0 */
                    /* catch() { ... } // from try @ 00619ab0 with catch @ 0061a160 */
              iVar38 = *(int *)(&DAT_0069c170 +
                               (long)*(int *)((long)local_2a8 + uVar39 * 4 + (uVar41 - 1) * 0x40) *
                               4) +
                       *(int *)(&DAT_0069c170 +
                               (long)*(int *)((long)local_2a8 + uVar39 * 4 + uVar36 * 0x40) * 4);
            }
            bVar27 = false;
                    /* catch() { ... } // from try @ 00619838 with catch @ 0061a164 */
                    /* catch() { ... } // from try @ 0061958c with catch @ 0061a168 */
            iVar28 = iVar38 + 2;
                    /* catch() { ... } // from try @ 00619320 with catch @ 0061a16c */
            if (-1 < iVar38 + 1) {
              iVar28 = iVar38 + 1;
            }
            iVar28 = iVar28 >> 1;
          }
LAB_0061a178:
          iVar38 = local_5b4 * param_3 + uVar57;
                    /* catch() { ... } // from try @ 006198ec with catch @ 0061a1bc
                       catch() { ... } // from try @ 0061998c with catch @ 0061a1bc */
          param_5[(uint)(iVar38 * 4)] =
               (uchar)((uint)((local_590 - local_580) * iVar28 + local_580 * 8) >> 3);
          param_5[iVar38 * 4 | 1] =
               (uchar)((uint)((local_58c - local_57c) * iVar28 + local_57c * 8) >> 3);
          uVar58 = uVar58 + 1;
          uVar9 = (uchar)((uint)((local_584 - local_574) * iVar28 + local_574 * 8) >> 3);
                    /* catch() { ... } // from try @ 00619674 with catch @ 0061a20c
                       catch() { ... } // from try @ 00619714 with catch @ 0061a20c */
          if (bVar27) {
            uVar9 = '\0';
          }
          param_5[iVar38 * 4 | 2] =
               (uchar)((uint)((local_588 - local_578) * iVar28 + local_578 * 8) >> 3);
          param_5[iVar38 * 4 | 3] = uVar9;
        } while (uVar58 != (uint)param_3);
      }
      local_5b4 = local_5b4 + 1;
    } while (local_5b4 != param_4);
  }
  if (*(long *)(lVar13 + 0x28) == lVar40) {
                    /* catch() { ... } // from try @ 006193d4 with catch @ 0061a25c
                       catch() { ... } // from try @ 00619474 with catch @ 0061a25c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


