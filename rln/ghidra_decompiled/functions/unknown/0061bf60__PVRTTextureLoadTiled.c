/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061bf60
 * Function: PVRTTextureLoadTiled
 * Signature: undefined __cdecl PVRTTextureLoadTiled(uchar * param_1, uint param_2, uint param_3, uchar * param_4, uint param_5, uint param_6, uint param_7, bool param_8)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTTextureLoadTiled(unsigned char*, unsigned int, unsigned int, unsigned char const*, unsigned
   int, unsigned int, unsigned int, bool) */

void PVRTTextureLoadTiled
               (uchar *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,uint param_6,
               uint param_7,bool param_8)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  uint uVar28;
  byte bVar29;
  byte bVar35;
  byte bVar36;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  byte bVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  undefined1 auVar34 [16];
  int iVar57;
  uint uVar58;
  int iVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  int iVar75;
  int iVar76;
  int iVar77;
  undefined1 uStack_168;
  undefined1 uStack_158;
  undefined1 uStack_148;
  undefined1 uStack_138;
  undefined1 uStack_128;
  undefined1 uStack_118;
  undefined1 uStack_108;
  undefined1 uStack_f8;
  byte local_e0;
  byte bStack_df;
  byte bStack_de;
  byte bStack_dd;
  byte bStack_dc;
  byte bStack_db;
  byte bStack_da;
  byte bStack_d9;
  byte bStack_d8;
  byte bStack_d7;
  byte bStack_d6;
  byte bStack_d5;
  byte bStack_d4;
  byte bStack_d3;
  byte bStack_d2;
  byte bStack_d1;
  byte local_d0;
  byte bStack_cf;
  byte bStack_ce;
  byte bStack_cd;
  byte bStack_cc;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  byte bStack_c8;
  byte bStack_c7;
  byte bStack_c6;
  byte bStack_c5;
  byte bStack_c4;
  byte bStack_c3;
  byte bStack_c2;
  byte bStack_c1;
  byte local_c0;
  byte bStack_bf;
  byte bStack_be;
  byte bStack_bd;
  byte bStack_bc;
  byte bStack_bb;
  byte bStack_ba;
  byte bStack_b9;
  byte bStack_b8;
  byte bStack_b7;
  byte bStack_b6;
  byte bStack_b5;
  byte bStack_b4;
  byte bStack_b3;
  byte bStack_b2;
  byte bStack_b1;
  byte local_b0;
  byte bStack_af;
  byte bStack_ae;
  byte bStack_ad;
  byte bStack_ac;
  byte bStack_ab;
  byte bStack_aa;
  byte bStack_a9;
  byte bStack_a8;
  byte bStack_a7;
  byte bStack_a6;
  byte bStack_a5;
  byte bStack_a4;
  byte bStack_a3;
  byte bStack_a2;
  byte bStack_a1;
  byte local_a0;
  byte bStack_9f;
  byte bStack_9e;
  byte bStack_9d;
  byte bStack_9c;
  byte bStack_9b;
  byte bStack_9a;
  byte bStack_99;
  byte bStack_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  byte local_90;
  byte bStack_8f;
  byte bStack_8e;
  byte bStack_8d;
  byte bStack_8c;
  byte bStack_8b;
  byte bStack_8a;
  byte bStack_89;
  byte bStack_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  byte bStack_84;
  byte bStack_83;
  byte bStack_82;
  byte bStack_81;
  byte local_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  uint local_6c;
  long local_68;
  
  uVar26 = _UNK_0069c2c8;
  uVar25 = _DAT_0069c2c0;
  uVar24 = _UNK_0069c2a8;
  uVar23 = _DAT_0069c2a0;
  uVar22 = _UNK_0069c288;
  uVar21 = _DAT_0069c280;
  uVar20 = _UNK_0069c268;
  uVar19 = _DAT_0069c260;
  uVar18 = _UNK_0069c248;
  uVar17 = _DAT_0069c240;
  uVar16 = _UNK_0069c228;
  uVar15 = _DAT_0069c220;
  uVar14 = _UNK_0069c208;
  uVar13 = _DAT_0069c200;
  uVar12 = _UNK_0069c1e8;
  uVar11 = _DAT_0069c1e0;
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 0061b528 with catch @ 0061bf88 */
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_3 * param_2 != 0) {
    uVar28 = 0;
    uVar27 = 0;
    iVar30 = -_DAT_0069c1f0;
    iVar38 = -_UNK_0069c1f4;
    iVar41 = -_UNK_0069c1f8;
    iVar49 = -_UNK_0069c1fc;
    iVar57 = (int)DAT_0069c210;
                    /* catch() { ... } // from try @ 0061b468 with catch @ 0061bfe0 */
    iVar62 = DAT_0069c210._4_4_;
    iVar42 = -DAT_0069c210._8_4_;
    iVar50 = -DAT_0069c210._12_4_;
                    /* try { // try from 0061c004 to 0071c05f has its CatchHandler @ 0061c5c4 */
    iVar31 = -_DAT_0069c230;
    iVar39 = -_UNK_0069c234;
    iVar43 = -_UNK_0069c238;
    iVar51 = -_UNK_0069c23c;
                    /* catch() { ... } // from try @ 0061b3fc with catch @ 0061c030 */
    iVar32 = -_DAT_0069c250;
    iVar40 = -_UNK_0069c254;
    iVar44 = -_UNK_0069c258;
    iVar52 = -_UNK_0069c25c;
    iVar4 = (int)_DAT_0069c270;
    uVar7 = (ulong)_DAT_0069c270 >> 0x20;
    iVar45 = -(int)_UNK_0069c278;
    iVar53 = -(int)((ulong)_UNK_0069c278 >> 0x20);
    iVar75 = (int)_DAT_0069c290;
                    /* try { // try from 0061c060 to 0071c19b has its CatchHandler @ 0061b220 */
    uVar8 = (ulong)_DAT_0069c290 >> 0x20;
    iVar46 = -(int)_UNK_0069c298;
    iVar54 = -(int)((ulong)_UNK_0069c298 >> 0x20);
    iVar76 = (int)_DAT_0069c2b0;
                    /* catch() { ... } // from try @ 0061b3a4 with catch @ 0061c070 */
                    /* catch() { ... } // from try @ 0061b310 with catch @ 0061c074 */
    uVar9 = (ulong)_DAT_0069c2b0 >> 0x20;
    iVar47 = -(int)_UNK_0069c2b8;
    iVar55 = -(int)((ulong)_UNK_0069c2b8 >> 0x20);
                    /* catch() { ... } // from try @ 0061b2d8 with catch @ 0061c08c */
    iVar77 = (int)_DAT_0069c2d0;
    uVar10 = (ulong)_DAT_0069c2d0 >> 0x20;
    iVar48 = -(int)_UNK_0069c2d8;
    iVar56 = -(int)((ulong)_UNK_0069c2d8 >> 0x20);
    do {
      if (param_8) {
        local_90 = (byte)uVar13;
        bStack_8f = (byte)((ulong)uVar13 >> 8);
        bStack_8e = (byte)((ulong)uVar13 >> 0x10);
        bStack_8d = (byte)((ulong)uVar13 >> 0x18);
        bStack_8c = (byte)((ulong)uVar13 >> 0x20);
        bStack_8b = (byte)((ulong)uVar13 >> 0x28);
        bStack_8a = (byte)((ulong)uVar13 >> 0x30);
        bStack_89 = (byte)((ulong)uVar13 >> 0x38);
        bStack_88 = (byte)uVar14;
        bStack_87 = (byte)((ulong)uVar14 >> 8);
        bStack_86 = (byte)((ulong)uVar14 >> 0x10);
        bStack_85 = (byte)((ulong)uVar14 >> 0x18);
        bStack_84 = (byte)((ulong)uVar14 >> 0x20);
        bStack_83 = (byte)((ulong)uVar14 >> 0x28);
        bStack_82 = (byte)((ulong)uVar14 >> 0x30);
        bStack_81 = (byte)((ulong)uVar14 >> 0x38);
        local_80 = (byte)uVar11;
        bStack_7f = (byte)((ulong)uVar11 >> 8);
        bStack_7e = (byte)((ulong)uVar11 >> 0x10);
        bStack_7d = (byte)((ulong)uVar11 >> 0x18);
        bStack_7c = (byte)((ulong)uVar11 >> 0x20);
        bStack_7b = (byte)((ulong)uVar11 >> 0x28);
        bStack_7a = (byte)((ulong)uVar11 >> 0x30);
        bStack_79 = (byte)((ulong)uVar11 >> 0x38);
        bStack_78 = (byte)uVar12;
        bStack_77 = (byte)((ulong)uVar12 >> 8);
        bStack_76 = (byte)((ulong)uVar12 >> 0x10);
        bStack_75 = (byte)((ulong)uVar12 >> 0x18);
        bStack_74 = (byte)((ulong)uVar12 >> 0x20);
        bStack_73 = (byte)((ulong)uVar12 >> 0x28);
        bStack_72 = (byte)((ulong)uVar12 >> 0x30);
        bStack_71 = (byte)((ulong)uVar12 >> 0x38);
        auVar60._4_4_ = iVar38;
        auVar60._0_4_ = iVar30;
        uStack_f8 = (undefined1)iVar41;
        auVar60[8] = uStack_f8;
        local_a0 = (byte)uVar15;
        bStack_9f = (byte)((ulong)uVar15 >> 8);
        bStack_9e = (byte)((ulong)uVar15 >> 0x10);
        bStack_9d = (byte)((ulong)uVar15 >> 0x18);
        bStack_9c = (byte)((ulong)uVar15 >> 0x20);
        bStack_9b = (byte)((ulong)uVar15 >> 0x28);
        bStack_9a = (byte)((ulong)uVar15 >> 0x30);
        bStack_99 = (byte)((ulong)uVar15 >> 0x38);
        bStack_98 = (byte)uVar16;
        bStack_97 = (byte)((ulong)uVar16 >> 8);
        bStack_96 = (byte)((ulong)uVar16 >> 0x10);
        bStack_95 = (byte)((ulong)uVar16 >> 0x18);
        bStack_94 = (byte)((ulong)uVar16 >> 0x20);
        bStack_93 = (byte)((ulong)uVar16 >> 0x28);
        bStack_92 = (byte)((ulong)uVar16 >> 0x30);
        bStack_91 = (byte)((ulong)uVar16 >> 0x38);
        bVar29 = (byte)uVar27;
        auVar59[0] = bVar29 & local_80;
        bVar35 = (byte)(uVar27 >> 8);
        auVar59[1] = bVar35 & bStack_7f;
        bVar36 = (byte)(uVar27 >> 0x10);
        auVar59[2] = bVar36 & bStack_7e;
        bVar37 = (byte)(uVar27 >> 0x18);
        auVar59[3] = bVar37 & bStack_7d;
        auVar59[4] = bVar29 & bStack_7c;
        auVar59[5] = bVar35 & bStack_7b;
        auVar59[6] = bVar36 & bStack_7a;
        auVar59[7] = bVar37 & bStack_79;
        auVar59[8] = bVar29 & bStack_78;
        auVar59[9] = bVar35 & bStack_77;
        auVar59[10] = bVar36 & bStack_76;
        auVar59[0xb] = bVar37 & bStack_75;
        auVar59[0xc] = bVar29 & bStack_74;
        auVar59[0xd] = bVar35 & bStack_73;
        auVar59[0xe] = bVar36 & bStack_72;
        auVar59[0xf] = bVar37 & bStack_71;
        auVar60[9] = (char)((uint)iVar41 >> 8);
        auVar60[10] = (char)((uint)iVar41 >> 0x10);
        auVar60[0xb] = (char)((uint)iVar41 >> 0x18);
        auVar60[0xc] = (char)iVar49;
        auVar60[0xd] = (char)((uint)iVar49 >> 8);
        auVar60[0xe] = (char)((uint)iVar49 >> 0x10);
        auVar60[0xf] = (char)((uint)iVar49 >> 0x18);
        auVar60 = NEON_ushl(auVar59,auVar60,4);
        auVar64._4_4_ = iVar39;
        auVar64._0_4_ = iVar31;
        uStack_118 = (undefined1)iVar43;
        auVar64[8] = uStack_118;
        auVar65[0] = bVar29 & local_a0;
        auVar65[1] = bVar35 & bStack_9f;
        auVar65[2] = bVar36 & bStack_9e;
        auVar65[3] = bVar37 & bStack_9d;
        auVar65[4] = bVar29 & bStack_9c;
        auVar65[5] = bVar35 & bStack_9b;
        auVar65[6] = bVar36 & bStack_9a;
        auVar65[7] = bVar37 & bStack_99;
        auVar65[8] = bVar29 & bStack_98;
        auVar65[9] = bVar35 & bStack_97;
        auVar65[10] = bVar36 & bStack_96;
        auVar65[0xb] = bVar37 & bStack_95;
        auVar65[0xc] = bVar29 & bStack_94;
        auVar65[0xd] = bVar35 & bStack_93;
        auVar65[0xe] = bVar36 & bStack_92;
        auVar65[0xf] = bVar37 & bStack_91;
        auVar63[0] = bVar29 & local_90;
        auVar63[1] = bVar35 & bStack_8f;
        auVar63[2] = bVar36 & bStack_8e;
        auVar63[3] = bVar37 & bStack_8d;
        auVar63[4] = bVar29 & bStack_8c;
        auVar63[5] = bVar35 & bStack_8b;
        auVar63[6] = bVar36 & bStack_8a;
        auVar63[7] = bVar37 & bStack_89;
        auVar63[8] = bVar29 & bStack_88;
        auVar63[9] = bVar35 & bStack_87;
        auVar63[10] = bVar36 & bStack_86;
        auVar63[0xb] = bVar37 & bStack_85;
        auVar63[0xc] = bVar29 & bStack_84;
        auVar63[0xd] = bVar35 & bStack_83;
        auVar63[0xe] = bVar36 & bStack_82;
        auVar63[0xf] = bVar37 & bStack_81;
        auVar64[9] = (char)((uint)iVar43 >> 8);
        auVar64[10] = (char)((uint)iVar43 >> 0x10);
        auVar64[0xb] = (char)((uint)iVar43 >> 0x18);
        auVar64[0xc] = (char)iVar51;
        auVar64[0xd] = (char)((uint)iVar51 >> 8);
        auVar64[0xe] = (char)((uint)iVar51 >> 0x10);
        auVar64[0xf] = (char)((uint)iVar51 >> 0x18);
        auVar66 = NEON_ushl(auVar65,auVar64,4);
        auVar68._4_4_ = -iVar62;
        auVar68._0_4_ = -iVar57;
        uStack_108 = (undefined1)iVar42;
        auVar68[8] = uStack_108;
        local_b0 = (byte)uVar17;
        bStack_af = (byte)((ulong)uVar17 >> 8);
        bStack_ae = (byte)((ulong)uVar17 >> 0x10);
        bStack_ad = (byte)((ulong)uVar17 >> 0x18);
        bStack_ac = (byte)((ulong)uVar17 >> 0x20);
        bStack_ab = (byte)((ulong)uVar17 >> 0x28);
        bStack_aa = (byte)((ulong)uVar17 >> 0x30);
        bStack_a9 = (byte)((ulong)uVar17 >> 0x38);
        bStack_a8 = (byte)uVar18;
        bStack_a7 = (byte)((ulong)uVar18 >> 8);
        bStack_a6 = (byte)((ulong)uVar18 >> 0x10);
        bStack_a5 = (byte)((ulong)uVar18 >> 0x18);
        bStack_a4 = (byte)((ulong)uVar18 >> 0x20);
        bStack_a3 = (byte)((ulong)uVar18 >> 0x28);
        bStack_a2 = (byte)((ulong)uVar18 >> 0x30);
        bStack_a1 = (byte)((ulong)uVar18 >> 0x38);
        auVar68[9] = (char)((uint)iVar42 >> 8);
        auVar68[10] = (char)((uint)iVar42 >> 0x10);
        auVar68[0xb] = (char)((uint)iVar42 >> 0x18);
        auVar68[0xc] = (char)iVar50;
        auVar68[0xd] = (char)((uint)iVar50 >> 8);
        auVar68[0xe] = (char)((uint)iVar50 >> 0x10);
        auVar68[0xf] = (char)((uint)iVar50 >> 0x18);
        auVar64 = NEON_ushl(auVar63,auVar68,4);
        auVar70._4_4_ = iVar40;
        auVar70._0_4_ = iVar32;
        uStack_128 = (undefined1)iVar44;
        auVar70[8] = uStack_128;
        auVar67[0] = bVar29 & local_b0;
        auVar67[1] = bVar35 & bStack_af;
        auVar67[2] = bVar36 & bStack_ae;
        auVar67[3] = bVar37 & bStack_ad;
        auVar67[4] = bVar29 & bStack_ac;
        auVar67[5] = bVar35 & bStack_ab;
        auVar67[6] = bVar36 & bStack_aa;
        auVar67[7] = bVar37 & bStack_a9;
        auVar67[8] = bVar29 & bStack_a8;
        auVar67[9] = bVar35 & bStack_a7;
        auVar67[10] = bVar36 & bStack_a6;
        auVar67[0xb] = bVar37 & bStack_a5;
        auVar67[0xc] = bVar29 & bStack_a4;
        auVar67[0xd] = bVar35 & bStack_a3;
        auVar67[0xe] = bVar36 & bStack_a2;
        auVar67[0xf] = bVar37 & bStack_a1;
        auVar70[9] = (char)((uint)iVar44 >> 8);
        auVar70[10] = (char)((uint)iVar44 >> 0x10);
        auVar70[0xb] = (char)((uint)iVar44 >> 0x18);
        auVar70[0xc] = (char)iVar52;
        auVar70[0xd] = (char)((uint)iVar52 >> 8);
        auVar70[0xe] = (char)((uint)iVar52 >> 0x10);
        auVar70[0xf] = (char)((uint)iVar52 >> 0x18);
        auVar68 = NEON_ushl(auVar67,auVar70,4);
        local_c0 = (byte)uVar19;
        bStack_bf = (byte)((ulong)uVar19 >> 8);
        bStack_be = (byte)((ulong)uVar19 >> 0x10);
        bStack_bd = (byte)((ulong)uVar19 >> 0x18);
        bStack_bc = (byte)((ulong)uVar19 >> 0x20);
        bStack_bb = (byte)((ulong)uVar19 >> 0x28);
        bStack_ba = (byte)((ulong)uVar19 >> 0x30);
        bStack_b9 = (byte)((ulong)uVar19 >> 0x38);
        bStack_b8 = (byte)uVar20;
        bStack_b7 = (byte)((ulong)uVar20 >> 8);
        bStack_b6 = (byte)((ulong)uVar20 >> 0x10);
        bStack_b5 = (byte)((ulong)uVar20 >> 0x18);
        bStack_b4 = (byte)((ulong)uVar20 >> 0x20);
        bStack_b3 = (byte)((ulong)uVar20 >> 0x28);
        bStack_b2 = (byte)((ulong)uVar20 >> 0x30);
        bStack_b1 = (byte)((ulong)uVar20 >> 0x38);
                    /* catch() { ... } // from try @ 0061b2c4 with catch @ 0061c0fc */
        auVar72._4_4_ = -(int)uVar7;
        auVar72._0_4_ = -iVar4;
        uStack_138 = (undefined1)iVar45;
        auVar72[8] = uStack_138;
                    /* catch() { ... } // from try @ 0061b4f0 with catch @ 0061c100 */
        auVar69[0] = bVar29 & local_c0;
        auVar69[1] = bVar35 & bStack_bf;
        auVar69[2] = bVar36 & bStack_be;
        auVar69[3] = bVar37 & bStack_bd;
        auVar69[4] = bVar29 & bStack_bc;
        auVar69[5] = bVar35 & bStack_bb;
        auVar69[6] = bVar36 & bStack_ba;
        auVar69[7] = bVar37 & bStack_b9;
        auVar69[8] = bVar29 & bStack_b8;
        auVar69[9] = bVar35 & bStack_b7;
        auVar69[10] = bVar36 & bStack_b6;
        auVar69[0xb] = bVar37 & bStack_b5;
        auVar69[0xc] = bVar29 & bStack_b4;
        auVar69[0xd] = bVar35 & bStack_b3;
        auVar69[0xe] = bVar36 & bStack_b2;
        auVar69[0xf] = bVar37 & bStack_b1;
        auVar72[9] = (char)((uint)iVar45 >> 8);
        auVar72[10] = (char)((uint)iVar45 >> 0x10);
        auVar72[0xb] = (char)((uint)iVar45 >> 0x18);
        auVar72[0xc] = (char)iVar53;
        auVar72[0xd] = (char)((uint)iVar53 >> 8);
        auVar72[0xe] = (char)((uint)iVar53 >> 0x10);
        auVar72[0xf] = (char)((uint)iVar53 >> 0x18);
        auVar70 = NEON_ushl(auVar69,auVar72,4);
        local_d0 = (byte)uVar21;
        bStack_cf = (byte)((ulong)uVar21 >> 8);
        bStack_ce = (byte)((ulong)uVar21 >> 0x10);
        bStack_cd = (byte)((ulong)uVar21 >> 0x18);
        bStack_cc = (byte)((ulong)uVar21 >> 0x20);
        bStack_cb = (byte)((ulong)uVar21 >> 0x28);
        bStack_ca = (byte)((ulong)uVar21 >> 0x30);
        bStack_c9 = (byte)((ulong)uVar21 >> 0x38);
        bStack_c8 = (byte)uVar22;
        bStack_c7 = (byte)((ulong)uVar22 >> 8);
        bStack_c6 = (byte)((ulong)uVar22 >> 0x10);
        bStack_c5 = (byte)((ulong)uVar22 >> 0x18);
        bStack_c4 = (byte)((ulong)uVar22 >> 0x20);
        bStack_c3 = (byte)((ulong)uVar22 >> 0x28);
        bStack_c2 = (byte)((ulong)uVar22 >> 0x30);
        bStack_c1 = (byte)((ulong)uVar22 >> 0x38);
        auVar74._4_4_ = -(int)uVar8;
        auVar74._0_4_ = -iVar75;
        uStack_148 = (undefined1)iVar46;
        auVar74[8] = uStack_148;
        auVar71[0] = bVar29 & local_d0;
        auVar71[1] = bVar35 & bStack_cf;
        auVar71[2] = bVar36 & bStack_ce;
        auVar71[3] = bVar37 & bStack_cd;
        auVar71[4] = bVar29 & bStack_cc;
        auVar71[5] = bVar35 & bStack_cb;
        auVar71[6] = bVar36 & bStack_ca;
        auVar71[7] = bVar37 & bStack_c9;
        auVar71[8] = bVar29 & bStack_c8;
        auVar71[9] = bVar35 & bStack_c7;
        auVar71[10] = bVar36 & bStack_c6;
        auVar71[0xb] = bVar37 & bStack_c5;
        auVar71[0xc] = bVar29 & bStack_c4;
        auVar71[0xd] = bVar35 & bStack_c3;
        auVar71[0xe] = bVar36 & bStack_c2;
        auVar71[0xf] = bVar37 & bStack_c1;
        auVar74[9] = (char)((uint)iVar46 >> 8);
        auVar74[10] = (char)((uint)iVar46 >> 0x10);
        auVar74[0xb] = (char)((uint)iVar46 >> 0x18);
        auVar74[0xc] = (char)iVar54;
        auVar74[0xd] = (char)((uint)iVar54 >> 8);
        auVar74[0xe] = (char)((uint)iVar54 >> 0x10);
        auVar74[0xf] = (char)((uint)iVar54 >> 0x18);
        auVar72 = NEON_ushl(auVar71,auVar74,4);
        local_e0 = (byte)uVar23;
        bStack_df = (byte)((ulong)uVar23 >> 8);
        bStack_de = (byte)((ulong)uVar23 >> 0x10);
        bStack_dd = (byte)((ulong)uVar23 >> 0x18);
        bStack_dc = (byte)((ulong)uVar23 >> 0x20);
        bStack_db = (byte)((ulong)uVar23 >> 0x28);
        bStack_da = (byte)((ulong)uVar23 >> 0x30);
        bStack_d9 = (byte)((ulong)uVar23 >> 0x38);
        bStack_d8 = (byte)uVar24;
        bStack_d7 = (byte)((ulong)uVar24 >> 8);
        bStack_d6 = (byte)((ulong)uVar24 >> 0x10);
        bStack_d5 = (byte)((ulong)uVar24 >> 0x18);
        bStack_d4 = (byte)((ulong)uVar24 >> 0x20);
        bStack_d3 = (byte)((ulong)uVar24 >> 0x28);
        bStack_d2 = (byte)((ulong)uVar24 >> 0x30);
        bStack_d1 = (byte)((ulong)uVar24 >> 0x38);
        auVar73[0] = bVar29 & local_e0;
        auVar73[1] = bVar35 & bStack_df;
        auVar73[2] = bVar36 & bStack_de;
        auVar73[3] = bVar37 & bStack_dd;
        auVar73[4] = bVar29 & bStack_dc;
        auVar73[5] = bVar35 & bStack_db;
        auVar73[6] = bVar36 & bStack_da;
        auVar73[7] = bVar37 & bStack_d9;
        auVar73[8] = bVar29 & bStack_d8;
        auVar73[9] = bVar35 & bStack_d7;
        auVar73[10] = bVar36 & bStack_d6;
        auVar73[0xb] = bVar37 & bStack_d5;
        auVar73[0xc] = bVar29 & bStack_d4;
        auVar73[0xd] = bVar35 & bStack_d3;
        auVar73[0xe] = bVar36 & bStack_d2;
        auVar73[0xf] = bVar37 & bStack_d1;
        auVar34[0] = bVar29 & (byte)uVar25;
        auVar34[1] = bVar35 & (byte)((ulong)uVar25 >> 8);
        auVar34[2] = bVar36 & (byte)((ulong)uVar25 >> 0x10);
        auVar34[3] = bVar37 & (byte)((ulong)uVar25 >> 0x18);
        auVar34[4] = bVar29 & (byte)((ulong)uVar25 >> 0x20);
        auVar34[5] = bVar35 & (byte)((ulong)uVar25 >> 0x28);
        auVar34[6] = bVar36 & (byte)((ulong)uVar25 >> 0x30);
        auVar34[7] = bVar37 & (byte)((ulong)uVar25 >> 0x38);
        auVar34[8] = bVar29 & (byte)uVar26;
        auVar34[9] = bVar35 & (byte)((ulong)uVar26 >> 8);
        auVar34[10] = bVar36 & (byte)((ulong)uVar26 >> 0x10);
        auVar34[0xb] = bVar37 & (byte)((ulong)uVar26 >> 0x18);
        auVar34[0xc] = bVar29 & (byte)((ulong)uVar26 >> 0x20);
        auVar34[0xd] = bVar35 & (byte)((ulong)uVar26 >> 0x28);
        auVar34[0xe] = bVar36 & (byte)((ulong)uVar26 >> 0x30);
        auVar34[0xf] = bVar37 & (byte)((ulong)uVar26 >> 0x38);
        auVar5._4_4_ = -(int)uVar9;
        auVar5._0_4_ = -iVar76;
        uStack_158 = (undefined1)iVar47;
        auVar5[8] = uStack_158;
        auVar5[9] = (char)((uint)iVar47 >> 8);
        auVar5[10] = (char)((uint)iVar47 >> 0x10);
        auVar5[0xb] = (char)((uint)iVar47 >> 0x18);
        auVar5[0xc] = (char)iVar55;
        auVar5[0xd] = (char)((uint)iVar55 >> 8);
        auVar5[0xe] = (char)((uint)iVar55 >> 0x10);
        auVar5[0xf] = (char)((uint)iVar55 >> 0x18);
        auVar74 = NEON_ushl(auVar73,auVar5,4);
        auVar6._4_4_ = -(int)uVar10;
        auVar6._0_4_ = -iVar77;
        uStack_168 = (undefined1)iVar48;
        auVar6[8] = uStack_168;
        auVar61[0] = auVar74[0] | auVar70[0] | auVar66[0] | auVar60[0];
        auVar61[1] = auVar74[1] | auVar70[1] | auVar66[1] | auVar60[1];
        auVar61[2] = auVar74[2] | auVar70[2] | auVar66[2] | auVar60[2];
        auVar61[3] = auVar74[3] | auVar70[3] | auVar66[3] | auVar60[3];
        auVar61[4] = auVar74[4] | auVar70[4] | auVar66[4] | auVar60[4];
        auVar61[5] = auVar74[5] | auVar70[5] | auVar66[5] | auVar60[5];
        auVar61[6] = auVar74[6] | auVar70[6] | auVar66[6] | auVar60[6];
        auVar61[7] = auVar74[7] | auVar70[7] | auVar66[7] | auVar60[7];
        auVar61[8] = auVar74[8] | auVar70[8] | auVar66[8] | auVar60[8];
        auVar61[9] = auVar74[9] | auVar70[9] | auVar66[9] | auVar60[9];
        auVar61[10] = auVar74[10] | auVar70[10] | auVar66[10] | auVar60[10];
        auVar61[0xb] = auVar74[0xb] | auVar70[0xb] | auVar66[0xb] | auVar60[0xb];
        auVar61[0xc] = auVar74[0xc] | auVar70[0xc] | auVar66[0xc] | auVar60[0xc];
        auVar61[0xd] = auVar74[0xd] | auVar70[0xd] | auVar66[0xd] | auVar60[0xd];
        auVar61[0xe] = auVar74[0xe] | auVar70[0xe] | auVar66[0xe] | auVar60[0xe];
        auVar61[0xf] = auVar74[0xf] | auVar70[0xf] | auVar66[0xf] | auVar60[0xf];
        auVar6[9] = (char)((uint)iVar48 >> 8);
        auVar6[10] = (char)((uint)iVar48 >> 0x10);
        auVar6[0xb] = (char)((uint)iVar48 >> 0x18);
        auVar6[0xc] = (char)iVar56;
        auVar6[0xd] = (char)((uint)iVar56 >> 8);
        auVar6[0xe] = (char)((uint)iVar56 >> 0x10);
        auVar6[0xf] = (char)((uint)iVar56 >> 0x18);
        auVar60 = NEON_ushl(auVar34,auVar6,4);
        auVar66[0] = auVar60[0] | auVar72[0] | auVar68[0] | auVar64[0];
        auVar66[1] = auVar60[1] | auVar72[1] | auVar68[1] | auVar64[1];
        auVar66[2] = auVar60[2] | auVar72[2] | auVar68[2] | auVar64[2];
        auVar66[3] = auVar60[3] | auVar72[3] | auVar68[3] | auVar64[3];
        auVar66[4] = auVar60[4] | auVar72[4] | auVar68[4] | auVar64[4];
        auVar66[5] = auVar60[5] | auVar72[5] | auVar68[5] | auVar64[5];
        auVar66[6] = auVar60[6] | auVar72[6] | auVar68[6] | auVar64[6];
        auVar66[7] = auVar60[7] | auVar72[7] | auVar68[7] | auVar64[7];
        auVar66[8] = auVar60[8] | auVar72[8] | auVar68[8] | auVar64[8];
        auVar66[9] = auVar60[9] | auVar72[9] | auVar68[9] | auVar64[9];
        auVar66[10] = auVar60[10] | auVar72[10] | auVar68[10] | auVar64[10];
        auVar66[0xb] = auVar60[0xb] | auVar72[0xb] | auVar68[0xb] | auVar64[0xb];
        auVar66[0xc] = auVar60[0xc] | auVar72[0xc] | auVar68[0xc] | auVar64[0xc];
        auVar66[0xd] = auVar60[0xd] | auVar72[0xd] | auVar68[0xd] | auVar64[0xd];
        auVar66[0xe] = auVar60[0xe] | auVar72[0xe] | auVar68[0xe] | auVar64[0xe];
        auVar66[0xf] = auVar60[0xf] | auVar72[0xf] | auVar68[0xf] | auVar64[0xf];
        auVar60 = NEON_ext(auVar66,auVar66,8,1);
        auVar64 = NEON_ext(auVar61,auVar66,8,1);
                    /* catch() { ... } // from try @ 0061b304 with catch @ 0061c15c
                       catch() { ... } // from try @ 0061b31c with catch @ 0061c15c */
        uVar33 = CONCAT13(auVar66[3] | auVar60[3] | auVar66[7] | auVar60[7],
                          CONCAT12(auVar66[2] | auVar60[2] | auVar66[6] | auVar60[6],
                                   CONCAT11(auVar66[1] | auVar60[1] | auVar66[5] | auVar60[5],
                                            auVar66[0] | auVar60[0] | auVar66[4] | auVar60[4])));
        uVar58 = CONCAT13(auVar61[3] | auVar64[3] | auVar61[7] | auVar64[7],
                          CONCAT12(auVar61[2] | auVar64[2] | auVar61[6] | auVar64[6],
                                   CONCAT11(auVar61[1] | auVar64[1] | auVar61[5] | auVar64[5],
                                            auVar61[0] | auVar64[0] | auVar61[4] | auVar64[4])));
                    /* catch() { ... } // from try @ 0061b5bc with catch @ 0061c16c
                       catch() { ... } // from try @ 0061b640 with catch @ 0061c16c */
        uVar1 = 0;
        if (param_6 != 0) {
          uVar1 = uVar33 / param_6;
        }
                    /* catch() { ... } // from try @ 0061bb40 with catch @ 0061c170 */
                    /* catch() { ... } // from try @ 0061ba64 with catch @ 0061c174 */
        uVar2 = 0;
        if (param_5 != 0) {
          uVar2 = uVar58 / param_5;
        }
                    /* catch() { ... } // from try @ 0061bb14 with catch @ 0061c178 */
        PVRTTextureTwiddle(&local_6c,uVar58 - uVar2 * param_5,uVar33 - uVar1 * param_6);
      }
      else {
        uVar1 = 0;
        if (param_2 != 0) {
          uVar1 = (uint)uVar27 / param_2;
        }
        uVar33 = (uint)uVar27 - uVar1 * param_2;
        uVar58 = 0;
        if (param_6 != 0) {
          uVar58 = uVar1 / param_6;
        }
        uVar2 = 0;
        if (param_5 != 0) {
          uVar2 = uVar33 / param_5;
        }
                    /* try { // try from 0061c19c to 0071c493 has its CatchHandler @ 0061c5c4 */
        local_6c = (uVar33 - uVar2 * param_5) + (uVar1 - uVar58 * param_6) * param_5;
      }
      memcpy(param_1 + uVar28,param_4 + local_6c * param_7,(ulong)param_7);
      uVar27 = uVar27 + 1;
      uVar28 = uVar28 + param_7;
                    /* catch() { ... } // from try @ 0061ba3c with catch @ 0061c1c8 */
    } while (param_3 * param_2 != uVar27);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


