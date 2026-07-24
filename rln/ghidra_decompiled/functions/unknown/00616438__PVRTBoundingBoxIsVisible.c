/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00616438
 * Function: PVRTBoundingBoxIsVisible
 * Signature: undefined __cdecl PVRTBoundingBoxIsVisible(PVRTBOUNDINGBOX_TAG * param_1, PVRTMATRIXf * param_2, bool * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTBoundingBoxIsVisible(PVRTBOUNDINGBOX_TAG const*, PVRTMATRIXf const*, bool*) */

undefined8 PVRTBoundingBoxIsVisible(PVRTBOUNDINGBOX_TAG *param_1,PVRTMATRIXf *param_2,bool *param_3)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float fVar6;
  uint7 uVar7;
  uint7 uVar8;
  uint7 uVar9;
  uint6 uVar10;
  uint7 uVar11;
  uint7 uVar12;
  bool bVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  short sVar24;
  short sVar26;
  float fVar27;
  ulong uVar25;
  short sVar28;
  float fVar29;
  short sVar30;
  float fVar31;
  float fVar32;
  byte bVar33;
  byte bVar34;
  float fVar35;
  float fVar36;
  byte bVar38;
  float fVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  byte bVar42;
  char cVar43;
  byte bVar44;
  char cVar45;
  byte bVar46;
  float fVar47;
  byte bVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  short sVar52;
  float fVar53;
  short sVar55;
  ulong uVar54;
  short sVar56;
  short sVar57;
  short sVar58;
  float fVar59;
  short sVar61;
  ulong uVar60;
  short sVar62;
  short sVar63;
  float fVar64;
  int iVar65;
  float fVar66;
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar71;
  float fVar72;
  undefined1 auVar70 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar81;
  float fVar82;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar83;
  float fVar84;
  float fVar86;
  float fVar87;
  undefined1 auVar85 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar94 [16];
  
  fVar66 = *(float *)(param_2 + 0x28);
  fVar32 = *(float *)(param_2 + 0x2c);
  fVar93 = *(float *)(param_2 + 0x18);
  fVar35 = *(float *)(param_2 + 0x1c);
  fVar64 = *(float *)(param_2 + 8);
  fVar3 = *(float *)(param_2 + 0xc);
  fVar53 = *(float *)(param_2 + 0x20);
  fVar41 = *(float *)(param_2 + 0x24);
  fVar59 = *(float *)(param_2 + 0x10);
  fVar4 = *(float *)(param_2 + 0x14);
  fVar22 = *(float *)param_2;
  fVar21 = *(float *)(param_2 + 0x30);
  fVar23 = *(float *)(param_2 + 0x34);
  fVar1 = *(float *)(param_2 + 0x38);
  fVar31 = *(float *)(param_2 + 0x3c);
  fVar6 = *(float *)(param_2 + 4);
  auVar70._0_4_ = *(undefined4 *)param_1;
  auVar80._0_4_ = *(undefined4 *)(param_1 + 4);
  auVar94._0_4_ = *(undefined4 *)(param_1 + 8);
  auVar70._4_4_ = *(undefined4 *)(param_1 + 0xc);
  auVar80._4_4_ = *(undefined4 *)(param_1 + 0x10);
  auVar94._4_4_ = *(undefined4 *)(param_1 + 0x14);
  auVar70._8_4_ = *(undefined4 *)(param_1 + 0x18);
  auVar80._8_4_ = *(undefined4 *)(param_1 + 0x1c);
  auVar94._8_4_ = *(undefined4 *)(param_1 + 0x20);
  auVar70._12_4_ = *(undefined4 *)(param_1 + 0x24);
  auVar80._12_4_ = *(undefined4 *)(param_1 + 0x28);
  auVar94._12_4_ = *(undefined4 *)(param_1 + 0x2c);
  auVar79 = NEON_rev64(auVar70,4);
  auVar85 = NEON_rev64(auVar80,4);
  auVar67 = NEON_rev64(auVar94,4);
  auVar80 = NEON_ext(auVar79,auVar79,8,1);
  auVar79 = NEON_ext(auVar85,auVar85,8,1);
  auVar70 = NEON_ext(auVar67,auVar67,8,1);
  auVar67._4_4_ = *(undefined4 *)(param_1 + 0x3c);
  auVar67._0_4_ = *(undefined4 *)(param_1 + 0x30);
  auVar67._8_4_ = *(undefined4 *)(param_1 + 0x48);
  auVar67._12_4_ = *(undefined4 *)(param_1 + 0x54);
  auVar67 = NEON_rev64(auVar67,4);
  auVar85._4_4_ = *(undefined4 *)(param_1 + 0x44);
  auVar85._0_4_ = *(undefined4 *)(param_1 + 0x38);
  auVar85._8_4_ = *(undefined4 *)(param_1 + 0x50);
  auVar85._12_4_ = *(undefined4 *)(param_1 + 0x5c);
  auVar94 = NEON_rev64(auVar85,4);
  fVar78 = auVar80._0_4_;
  fVar81 = auVar80._4_4_;
  fVar82 = auVar80._8_4_;
  fVar83 = auVar80._12_4_;
  fVar74 = auVar79._0_4_;
  fVar75 = auVar79._4_4_;
  fVar76 = auVar79._8_4_;
  fVar77 = auVar79._12_4_;
  auVar79._4_4_ = *(undefined4 *)(param_1 + 0x40);
  auVar79._0_4_ = *(undefined4 *)(param_1 + 0x34);
  auVar79._8_4_ = *(undefined4 *)(param_1 + 0x4c);
  auVar79._12_4_ = *(undefined4 *)(param_1 + 0x58);
  auVar79 = NEON_rev64(auVar79,4);
  fVar69 = auVar70._0_4_;
  fVar71 = auVar70._4_4_;
  fVar72 = auVar70._8_4_;
  fVar73 = auVar70._12_4_;
  auVar67 = NEON_ext(auVar67,auVar67,8,1);
  auVar85 = NEON_ext(auVar79,auVar79,8,1);
  auVar79 = NEON_ext(auVar94,auVar94,8,1);
  fVar20 = auVar67._0_4_;
  fVar47 = auVar67._4_4_;
  fVar49 = auVar67._8_4_;
  fVar68 = auVar67._12_4_;
  fVar89 = auVar85._0_4_;
  fVar90 = auVar85._4_4_;
  fVar91 = auVar85._8_4_;
  fVar92 = auVar85._12_4_;
  fVar84 = auVar79._0_4_;
  fVar86 = auVar79._4_4_;
  fVar87 = auVar79._8_4_;
  fVar88 = auVar79._12_4_;
                    /* catch() { ... } // from try @ 00616314 with catch @ 006164f0 */
  iVar15 = (int)_DAT_0069b950;
  iVar16 = (int)((ulong)_DAT_0069b950 >> 0x20);
  iVar17 = (int)_UNK_0069b958;
  iVar18 = (int)((ulong)_UNK_0069b958 >> 0x20);
  iVar65 = (-(uint)(fVar1 + fVar78 * fVar64 + fVar74 * fVar93 + fVar69 * fVar66 < 0.0) -
           (uint)(fVar1 + fVar20 * fVar64 + fVar89 * fVar93 + fVar84 * fVar66 < 0.0)) + iVar15 +
           (-(uint)(fVar1 + fVar81 * fVar64 + fVar75 * fVar93 + fVar71 * fVar66 < 0.0) -
           (uint)(fVar1 + fVar47 * fVar64 + fVar90 * fVar93 + fVar86 * fVar66 < 0.0)) + iVar16 +
           (-(uint)(fVar1 + fVar82 * fVar64 + fVar76 * fVar93 + fVar72 * fVar66 < 0.0) -
           (uint)(fVar1 + fVar49 * fVar64 + fVar91 * fVar93 + fVar87 * fVar66 < 0.0)) + iVar17 +
           (-(uint)(fVar1 + fVar83 * fVar64 + fVar77 * fVar93 + fVar73 * fVar66 < 0.0) -
           (uint)(fVar1 + fVar68 * fVar64 + fVar92 * fVar93 + fVar88 * fVar66 < 0.0)) + iVar18;
  if (iVar65 != 0) {
                    /* catch() { ... } // from try @ 0061630c with catch @ 0061654c */
    fVar64 = fVar31 + fVar20 * fVar3 + fVar89 * fVar35 + fVar84 * fVar32;
    fVar66 = fVar31 + fVar47 * fVar3 + fVar90 * fVar35 + fVar86 * fVar32;
    fVar50 = fVar31 + fVar49 * fVar3 + fVar91 * fVar35 + fVar87 * fVar32;
    fVar51 = fVar31 + fVar68 * fVar3 + fVar92 * fVar35 + fVar88 * fVar32;
    fVar93 = fVar31 + fVar78 * fVar3 + fVar74 * fVar35 + fVar69 * fVar32;
    fVar27 = fVar31 + fVar81 * fVar3 + fVar75 * fVar35 + fVar71 * fVar32;
    fVar29 = fVar31 + fVar82 * fVar3 + fVar76 * fVar35 + fVar72 * fVar32;
    fVar31 = fVar31 + fVar83 * fVar3 + fVar77 * fVar35 + fVar73 * fVar32;
    fVar36 = fVar21 + fVar22 * fVar20 + fVar89 * fVar59 + fVar84 * fVar53;
    fVar37 = fVar21 + fVar22 * fVar47 + fVar90 * fVar59 + fVar86 * fVar53;
    fVar39 = fVar21 + fVar22 * fVar49 + fVar91 * fVar59 + fVar87 * fVar53;
    fVar40 = fVar21 + fVar22 * fVar68 + fVar92 * fVar59 + fVar88 * fVar53;
    fVar1 = fVar23 + fVar20 * fVar6 + fVar89 * fVar4 + fVar84 * fVar41;
    fVar3 = fVar23 + fVar47 * fVar6 + fVar90 * fVar4 + fVar86 * fVar41;
    fVar47 = fVar23 + fVar49 * fVar6 + fVar91 * fVar4 + fVar87 * fVar41;
    fVar49 = fVar23 + fVar68 * fVar6 + fVar92 * fVar4 + fVar88 * fVar41;
    fVar32 = fVar21 + fVar22 * fVar78 + fVar74 * fVar59 + fVar69 * fVar53;
    fVar35 = fVar21 + fVar22 * fVar81 + fVar75 * fVar59 + fVar71 * fVar53;
    fVar20 = fVar21 + fVar22 * fVar82 + fVar76 * fVar59 + fVar72 * fVar53;
    fVar21 = fVar21 + fVar22 * fVar83 + fVar77 * fVar59 + fVar73 * fVar53;
    fVar22 = fVar23 + fVar78 * fVar6 + fVar74 * fVar4 + fVar69 * fVar41;
    fVar53 = fVar23 + fVar81 * fVar6 + fVar75 * fVar4 + fVar71 * fVar41;
    fVar59 = fVar23 + fVar82 * fVar6 + fVar76 * fVar4 + fVar72 * fVar41;
    fVar23 = fVar23 + fVar83 * fVar6 + fVar77 * fVar4 + fVar73 * fVar41;
    sVar52 = -(ushort)(fVar93 < fVar22);
    sVar55 = -(ushort)(fVar27 < fVar53);
    sVar56 = -(ushort)(fVar29 < fVar59);
    sVar57 = -(ushort)(fVar31 < fVar23);
    sVar24 = -(ushort)(fVar93 < fVar32);
    sVar26 = -(ushort)(fVar27 < fVar35);
    sVar28 = -(ushort)(fVar29 < fVar20);
    sVar30 = -(ushort)(fVar31 < fVar21);
    sVar58 = -(ushort)(fVar64 < fVar1);
    sVar61 = -(ushort)(fVar66 < fVar3);
    sVar62 = -(ushort)(fVar50 < fVar47);
    sVar63 = -(ushort)(fVar51 < fVar49);
    sVar5 = -(ushort)(fVar64 < fVar36);
    bVar19 = -(fVar66 < fVar37);
    bVar33 = -(fVar50 < fVar39);
    bVar34 = -(fVar51 < fVar40);
                    /* catch() { ... } // from try @ 006162fc with catch @ 006165b4 */
                    /* try { // try from 006165d8 to 007165db has its CatchHandler @ 006165e0 */
    bVar44 = ~-(fVar3 < -fVar66);
    bVar46 = ~-(fVar47 < -fVar50);
    bVar48 = ~-(fVar49 < -fVar51);
                    /* try { // try from 006165dc to 00716757 has its CatchHandler @ 00616238 */
                    /* catch() { ... } // from try @ 006165d8 with catch @ 006165e0 */
                    /* catch() { ... } // from try @ 006162a8 with catch @ 006165e4 */
    uVar8 = CONCAT16(~-(fVar23 < -fVar31),
                     (uint6)CONCAT14(~-(fVar59 < -fVar29),
                                     (uint)CONCAT12(~-(fVar53 < -fVar27),
                                                    (ushort)(byte)~-(fVar22 < -fVar93))));
    uVar2 = (ushort)(byte)~-(fVar1 < -fVar64);
    uVar7 = CONCAT16(~-(fVar40 < -fVar51),
                     (uint6)CONCAT14(~-(fVar39 < -fVar50),
                                     (uint)CONCAT12(~-(fVar37 < -fVar66),
                                                    (ushort)(byte)~-(fVar36 < -fVar64))));
    uVar9 = CONCAT16(~-(fVar21 < -fVar31),
                     (uint6)CONCAT14(~-(fVar20 < -fVar29),
                                     (uint)CONCAT12(~-(fVar35 < -fVar27),
                                                    (ushort)(byte)~-(fVar32 < -fVar93))));
    uVar60 = CONCAT26(sVar63,CONCAT24(sVar62,CONCAT22(sVar61,sVar58))) &
             (ulong)CONCAT16(bVar48,(uint6)CONCAT14(bVar46,(uint)CONCAT12(bVar44,uVar2)));
    uVar54 = CONCAT26(sVar57,CONCAT24(sVar56,CONCAT22(sVar55,sVar52))) & (ulong)uVar8;
    uVar11 = CONCAT16(bVar48,(uint6)CONCAT14(bVar46,(uint)CONCAT12(bVar44,uVar2))) &
             CONCAT16(~(byte)sVar63,
                      (uint6)CONCAT14(~(byte)sVar62,
                                      (uint)CONCAT12(~(byte)sVar61,(ushort)(byte)~(byte)sVar58)));
    uVar8 = uVar8 & CONCAT16(~(byte)sVar57,
                             (uint6)CONCAT14(~(byte)sVar56,
                                             (uint)CONCAT12(~(byte)sVar55,
                                                            (ushort)(byte)~(byte)sVar52)));
                    /* catch() { ... } // from try @ 00616294 with catch @ 00616624 */
    uVar12 = CONCAT16(bVar34,(uint6)CONCAT14(bVar33,(uint)CONCAT12(bVar19,sVar5))) & uVar7;
    uVar7 = uVar7 & CONCAT16(~bVar34,(uint6)CONCAT14(~bVar33,(uint)CONCAT12(~bVar19,(ushort)(byte)~(
                                                  byte)sVar5)));
    uVar25 = CONCAT26(sVar30,CONCAT24(sVar28,CONCAT22(sVar26,sVar24))) & (ulong)uVar9;
    uVar9 = uVar9 & CONCAT16(~(byte)sVar30,
                             (uint6)CONCAT14(~(byte)sVar28,
                                             (uint)CONCAT12(~(byte)sVar26,
                                                            (ushort)(byte)~(byte)sVar24)));
    bVar42 = (byte)(uVar11 >> 0x20) ^ (byte)(uVar60 >> 0x20);
    bVar33 = (byte)(uVar7 >> 0x20) ^ (byte)(uVar12 >> 0x20);
    bVar38 = (byte)(uVar12 >> 0x30);
    bVar34 = (byte)(uVar7 >> 0x30) ^ bVar38;
    bVar46 = (byte)(uVar8 >> 0x20) ^ (byte)(uVar54 >> 0x20);
    bVar48 = (byte)(uVar8 >> 0x30) ^ (byte)(uVar54 >> 0x30);
    bVar19 = (byte)(uVar9 >> 0x20) ^ (byte)(uVar25 >> 0x20);
    bVar44 = (byte)(uVar9 >> 0x30) ^ (byte)(uVar25 >> 0x30);
    uVar10 = (uint6)CONCAT14(bVar42,(uint)CONCAT12((byte)(uVar11 >> 0x10) ^ (byte)(uVar60 >> 0x10),
                                                   (ushort)(byte)((byte)uVar11 ^ (byte)uVar60))) ^
             0x10001;
    uVar7 = CONCAT16(bVar34,(uint6)CONCAT14(bVar33,(uint)CONCAT12((byte)(uVar7 >> 0x10) ^
                                                                  (byte)(uVar12 >> 0x10),
                                                                  (ushort)(byte)((byte)uVar7 ^
                                                                                (byte)uVar12)))) ^
            0x10001;
    uVar8 = CONCAT16(bVar48,(uint6)CONCAT14(bVar46,(uint)CONCAT12((byte)(uVar8 >> 0x10) ^
                                                                  (byte)(uVar54 >> 0x10),
                                                                  (ushort)(byte)((byte)uVar8 ^
                                                                                (byte)uVar54)))) ^
            0x10001;
    uVar9 = CONCAT16(bVar44,(uint6)CONCAT14(bVar19,(uint)CONCAT12((byte)(uVar9 >> 0x10) ^
                                                                  (byte)(uVar25 >> 0x10),
                                                                  (ushort)(byte)((byte)uVar9 ^
                                                                                (byte)uVar25)))) ^
            0x10001;
                    /* catch() { ... } // from try @ 00616288 with catch @ 00616688 */
    cVar43 = (char)(((int)uVar12 << 0x1f) >> 0x1f);
    cVar45 = (char)((int)((uint)(ushort)(uVar12 >> 0x10) << 0x1f) >> 0x1f);
                    /* catch() { ... } // from try @ 00616274 with catch @ 006166e8 */
    if ((CONCAT13(cVar43,CONCAT12(cVar43,CONCAT11(cVar43,cVar43))) + (((int)uVar25 << 0x1f) >> 0x1f)
         + iVar15 +
         CONCAT13(cVar45,CONCAT12(cVar45,CONCAT11(cVar45,cVar45))) +
         ((int)((uint)(ushort)(uVar25 >> 0x10) << 0x1f) >> 0x1f) + iVar16 +
        ((int)((uint)(ushort)(uVar12 >> 0x20) << 0x1f) >> 0x1f) +
        ((int)((uint)(ushort)(uVar25 >> 0x20) << 0x1f) >> 0x1f) + iVar17 +
        ((int)((uint)bVar38 << 0x1f) >> 0x1f) +
        ((int)((uint)(ushort)(uVar25 >> 0x30) << 0x1f) >> 0x1f) + iVar18) *
        (((int)((uint)(ushort)uVar7 << 0x1f) >> 0x1f) + ((int)((uint)(ushort)uVar9 << 0x1f) >> 0x1f)
         + iVar15 +
         ((int)((uint)(ushort)(uVar7 >> 0x10) << 0x1f) >> 0x1f) +
         ((int)((uint)(ushort)(uVar9 >> 0x10) << 0x1f) >> 0x1f) + iVar16 +
        ((int)((uint)(ushort)(bVar33 ^ 1) << 0x1f) >> 0x1f) +
        ((int)((uint)(ushort)(bVar19 ^ 1) << 0x1f) >> 0x1f) + iVar17 +
        ((int)((uint)(ushort)(bVar34 ^ 1) << 0x1f) >> 0x1f) +
        ((int)((uint)(ushort)(bVar44 ^ 1) << 0x1f) >> 0x1f) + iVar18) *
        (((int)((uint)(ushort)uVar10 << 0x1f) >> 0x1f) +
         ((int)((uint)(ushort)uVar8 << 0x1f) >> 0x1f) + iVar15 +
         ((int)((uint)(ushort)(uVar10 >> 0x10) << 0x1f) >> 0x1f) +
         ((int)((uint)(ushort)(uVar8 >> 0x10) << 0x1f) >> 0x1f) + iVar16 +
        ((int)((uint)(ushort)(bVar42 ^ 1) << 0x1f) >> 0x1f) +
        ((int)((uint)(ushort)(bVar46 ^ 1) << 0x1f) >> 0x1f) + iVar17 +
        ((int)((uint)(ushort)((byte)((byte)(uVar11 >> 0x30) ^ (byte)(uVar60 >> 0x30)) ^ 1) << 0x1f)
        >> 0x1f) + ((int)((uint)(ushort)(bVar48 ^ 1) << 0x1f) >> 0x1f) + iVar18) *
        (((int)((uint)(ushort)uVar60 << 0x1f) >> 0x1f) +
         ((int)((uint)(ushort)uVar54 << 0x1f) >> 0x1f) + iVar15 +
         ((int)((uint)(ushort)(uVar60 >> 0x10) << 0x1f) >> 0x1f) +
         ((int)((uint)(ushort)(uVar54 >> 0x10) << 0x1f) >> 0x1f) + iVar16 +
        ((int)((uint)(ushort)(uVar60 >> 0x20) << 0x1f) >> 0x1f) +
        ((int)((uint)(ushort)(uVar54 >> 0x20) << 0x1f) >> 0x1f) + iVar17 +
        ((int)((uint)(ushort)(uVar60 >> 0x30) << 0x1f) >> 0x1f) +
        ((int)((uint)(ushort)(uVar54 >> 0x30) << 0x1f) >> 0x1f) + iVar18) != 0) {
      bVar13 = iVar65 != 8;
      uVar14 = 1;
      goto LAB_00616710;
    }
  }
  bVar13 = false;
  uVar14 = 0;
LAB_00616710:
  *param_3 = bVar13;
  return uVar14;
}


