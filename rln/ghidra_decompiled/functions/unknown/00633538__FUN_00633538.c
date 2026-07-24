/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00633538
 * Function: FUN_00633538
 * Signature: undefined FUN_00633538(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00633538(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,long param_8,char *param_9)

{
  undefined1 auVar1 [16];
  char cVar2;
  char cVar4;
  uint uVar5;
  byte bVar3;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  long *local_90;
  undefined8 local_88;
  undefined1 local_80 [12];
  undefined4 uStack_74;
  uint local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_80._8_4_ = (undefined4)param_3;
  uStack_74 = (undefined4)((ulong)param_3 >> 0x20);
  local_90 = param_4;
  local_88 = param_5;
  local_80._0_8_ = param_2;
  lVar8 = FUN_0062ee14(param_6 + 0xd0);
  uVar14 = 0;
  plVar9 = (long *)FUN_0062d354(param_6 + 0xd0);
  sVar10 = strlen(param_9);
  auVar16._8_4_ = local_80._8_4_;
  auVar16._0_8_ = local_80._0_8_;
                    /* try { // try from 006335c0 to 007335e3 has its CatchHandler @ 00633308 */
  local_68 = 0;
LAB_006335dc:
  local_80._8_4_ = auVar16._8_4_;
  plVar13 = auVar16._0_8_;
  if (plVar13 == (long *)0x0) {
LAB_006336c4:
    if (local_90 == (long *)0x0) {
LAB_00633708:
                    /* try { // try from 00633708 to 007337fb has its CatchHandler @ 0063369c */
      if ((local_68 != 0) || (uVar14 != sVar10)) {
        *param_7 = *param_7 | 4;
      }
      auVar1._8_4_ = local_80._8_4_;
      auVar1._0_8_ = local_80._0_8_;
      auVar1._12_4_ = uStack_74;
      return auVar1;
    }
    iVar6 = 1;
joined_r0x006336dc:
    iVar7 = 0;
    if ((int)local_88 == -1) {
                    /* try { // try from 006336e0 to 00733707 has its CatchHandler @ 0063378c */
      if ((byte *)local_90[2] < (byte *)local_90[3]) {
        uVar5 = (uint)*(byte *)local_90[2];
      }
      else {
        uVar5 = (**(code **)(*local_90 + 0x48))();
        if (uVar5 == 0xffffffff) {
          local_90 = (long *)0x0;
          iVar7 = 1;
          goto LAB_00633608;
        }
      }
      local_88 = CONCAT44(local_88._4_4_,uVar5);
      if (iVar6 == 0) goto LAB_00633708;
    }
    else {
LAB_00633608:
                    /* catch() { ... } // from try @ 006335f4 with catch @ 00633608 */
      if (iVar6 == iVar7) goto LAB_00633708;
    }
  }
  else {
                    /* catch() { ... } // from try @ 006334c0 with catch @ 006335e0 */
                    /* catch() { ... } // from try @ 006335f8 with catch @ 006335e4 */
    uVar5 = local_80._8_4_;
    if (local_80._8_4_ == 0xffffffff) {
                    /* catch() { ... } // from try @ 006336e0 with catch @ 0063378c */
      if ((byte *)plVar13[2] < (byte *)plVar13[3]) {
        uVar5 = (uint)*(byte *)plVar13[2];
      }
      else {
        uVar5 = (**(code **)(*plVar13 + 0x48))(plVar13);
        if (uVar5 == 0xffffffff) {
          local_80._0_8_ = (long *)0x0;
          goto LAB_006336c4;
        }
      }
    }
    local_80._8_4_ = uVar5;
    iVar6 = 0;
                    /* try { // try from 006335f4 to 007335f7 has its CatchHandler @ 00633608 */
    if (local_90 != (long *)0x0) {
                    /* try { // try from 006335f8 to 0073361b has its CatchHandler @ 006335e4 */
      goto joined_r0x006336dc;
    }
  }
  if ((sVar10 <= uVar14) || (local_68 != 0)) goto LAB_00633708;
  bVar3 = param_9[uVar14];
  cVar2 = *(char *)((long)plVar9 + (long)(int)(uint)bVar3 + 0x139);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*plVar9 + 0x40))(plVar9,bVar3,0);
    if (cVar2 != '\0') {
      *(char *)((long)plVar9 + (long)(int)(uint)bVar3 + 0x139) = cVar2;
      goto LAB_00633634;
    }
LAB_00633750:
    bVar3 = param_9[uVar14];
    if ((long *)local_80._0_8_ == (long *)0x0) {
LAB_00633890:
      auVar15._4_8_ = 0;
      auVar15._0_4_ = local_80._8_4_;
      auVar16 = auVar15 << 0x40;
      plVar13 = (long *)0x0;
      if (bVar3 == 0xff) {
        uVar14 = uVar14 + 1;
      }
      else {
LAB_00633774:
        auVar16._8_4_ = local_80._8_4_;
        auVar16._0_8_ = plVar13;
        uVar14 = uVar14 + 1;
        local_68 = local_68 | 4;
      }
    }
    else {
      if (local_80._8_4_ == 0xffffffff) {
        if (*(byte **)(local_80._0_8_ + 0x10) < *(byte **)(local_80._0_8_ + 0x18)) {
          local_80._8_4_ = ZEXT14(**(byte **)(local_80._0_8_ + 0x10));
          uVar5 = local_80._8_4_;
          goto joined_r0x0063381c;
        }
        uVar5 = (**(code **)(*(long *)local_80._0_8_ + 0x48))();
        auVar16._8_4_ = uVar5;
        auVar16._0_8_ = local_80._0_8_;
                    /* try { // try from 00633880 to 00733887 has its CatchHandler @ 00633928 */
                    /* try { // try from 00633888 to 007339a3 has its CatchHandler @ 00633850 */
        if (uVar5 == 0xffffffff) {
          local_80._0_8_ = (long *)0x0;
          goto LAB_00633890;
        }
        plVar13 = (long *)local_80._0_8_;
        local_80._8_4_ = uVar5;
        if ((uint)bVar3 != (uVar5 & 0xff)) goto LAB_00633774;
        uVar11 = uVar14;
        if ((long *)local_80._0_8_ == (long *)0x0) goto LAB_0063368c;
        uVar11 = *(ulong *)(local_80._0_8_ + 0x10);
        if (uVar11 < *(ulong *)(local_80._0_8_ + 0x18)) goto LAB_00633830;
      }
      else {
        uVar5 = local_80._8_4_ & 0xff;
joined_r0x0063381c:
        plVar13 = (long *)local_80._0_8_;
        if (bVar3 != uVar5) goto LAB_00633774;
        uVar11 = *(ulong *)(local_80._0_8_ + 0x10);
        if (uVar11 < *(ulong *)(local_80._0_8_ + 0x18)) {
LAB_00633830:
          *(ulong *)(local_80._0_8_ + 0x10) = uVar11 + 1;
          goto LAB_0063383c;
        }
      }
      (**(code **)(*(long *)local_80._0_8_ + 0x50))();
LAB_0063383c:
      uVar14 = uVar14 + 1;
      auVar16._8_4_ = 0xffffffff;
      auVar16._0_8_ = local_80._0_8_;
    }
    goto LAB_006335dc;
  }
LAB_00633634:
  if (cVar2 != '%') goto LAB_00633750;
  uVar11 = uVar14 + 1;
  bVar3 = param_9[uVar11];
  cVar2 = *(char *)((long)plVar9 + (long)(int)(uint)bVar3 + 0x139);
  if (cVar2 == '\0') {
                    /* catch() { ... } // from try @ 00633888 with catch @ 00633850 */
    cVar2 = (**(code **)(*plVar9 + 0x40))(plVar9);
    if (cVar2 != '\0') {
      *(char *)((long)plVar9 + (long)(int)(uint)bVar3 + 0x139) = cVar2;
      goto LAB_00633650;
    }
    goto LAB_00633680;
  }
LAB_00633650:
  local_64 = 0;
  if ((cVar2 == 'O') || (cVar2 == 'E')) {
    uVar11 = uVar14 + 2;
    bVar3 = param_9[uVar11];
    cVar2 = *(char *)((long)plVar9 + (long)(int)(uint)bVar3 + 0x139);
    if (cVar2 != '\0') goto LAB_00633668;
    cVar2 = (**(code **)(*plVar9 + 0x40))(plVar9);
    if (cVar2 != '\0') {
      *(char *)((long)plVar9 + (long)(int)(uint)bVar3 + 0x139) = cVar2;
      goto LAB_00633668;
    }
switchD_006336a4_caseD_45:
LAB_00633680:
    auVar16._8_4_ = local_80._8_4_;
    auVar16._0_8_ = local_80._0_8_;
    local_68 = local_68 | 4;
LAB_0063368c:
    local_80._0_8_ = auVar16._0_8_;
    uVar14 = uVar11 + 1;
    goto LAB_006335dc;
  }
LAB_00633668:
                    /* catch() { ... } // from try @ 00633708 with catch @ 0063369c */
  switch(cVar2) {
  case 'A':
    lVar12 = *(long *)(lVar8 + 0x10);
    local_60 = *(undefined8 *)(lVar12 + 0x58);
    local_58 = *(undefined8 *)(lVar12 + 0x60);
    uVar14 = uVar11 + 1;
    local_50 = *(undefined8 *)(lVar12 + 0x68);
    local_48 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x70);
    local_40 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x78);
    local_38 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x80);
    local_30 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x88);
    auVar16 = FUN_00632890(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_8 + 0x18,&local_60,7,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'B':
    lVar12 = *(long *)(lVar8 + 0x10);
    uVar14 = uVar11 + 1;
    local_60 = *(undefined8 *)(lVar12 + 200);
    local_58 = *(undefined8 *)(lVar12 + 0xd0);
    local_50 = *(undefined8 *)(lVar12 + 0xd8);
    local_48 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xe0);
    local_40 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xe8);
    local_38 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xf0);
    local_30 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xf8);
    local_28 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x100);
    local_20 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x108);
    local_18 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x110);
    local_10 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x118);
    local_8 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x120);
    auVar16 = FUN_00632890(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_8 + 0x10,&local_60,0xc,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'C':
  case 'Y':
  case 'y':
                    /* try { // try from 006342fc to 007342ff has its CatchHandler @ 006343dc */
    auVar16 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,&local_64,0,9999,4,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    if (local_68 == 0) {
      if (local_64 < 0) {
        iVar6 = local_64 + 100;
      }
      else {
        iVar6 = local_64 + -0x76c;
      }
      uVar14 = uVar11 + 1;
      *(int *)(param_8 + 0x14) = iVar6;
      goto LAB_006335dc;
    }
    break;
  case 'D':
    if ((char)plVar9[7] == '\x01') {
      local_60 = DAT_0069e370;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_58._0_1_ = DAT_0069e378;
    }
    else {
      if ((char)plVar9[7] == '\0') {
        FUN_0061fea0(plVar9);
      }
                    /* catch() { ... } // from try @ 00634148 with catch @ 00634280 */
      (**(code **)(*plVar9 + 0x38))(plVar9,&DAT_0069e370,&DAT_0069e379,&local_60);
    }
                    /* try { // try from 00634294 to 00734297 has its CatchHandler @ 00634298 */
                    /* catch() { ... } // from try @ 00634294 with catch @ 00634298 */
                    /* try { // try from 0063429c to 0073429f has its CatchHandler @ 006342a8 */
                    /* try { // try from 006342a0 to 007342ab has its CatchHandler @ 00634110 */
                    /* catch() { ... } // from try @ 0063429c with catch @ 006342a8 */
                    /* catch() { ... } // from try @ 006343d8 with catch @ 006342ac
                       catch() { ... } // from try @ 0063440c with catch @ 006342ac */
    uVar14 = uVar11 + 1;
    auVar16 = FUN_00633538(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_6,&local_68,param_8,&local_60);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  default:
    goto switchD_006336a4_caseD_45;
  case 'H':
                    /* try { // try from 006341fc to 007341ff has its CatchHandler @ 00634200 */
                    /* catch() { ... } // from try @ 0063419c with catch @ 00634200
                       catch() { ... } // from try @ 006341fc with catch @ 00634200
                       try { // try from 00634200 to 00734293 has its CatchHandler @ 00634110 */
                    /* catch() { ... } // from try @ 006341c4 with catch @ 00634208 */
    uVar14 = uVar11 + 1;
    auVar16 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_8 + 8,0,0x17,2,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'I':
                    /* try { // try from 0063419c to 007341a7 has its CatchHandler @ 00634200 */
                    /* try { // try from 006341c4 to 007341c7 has its CatchHandler @ 00634208 */
                    /* try { // try from 006341c8 to 007341fb has its CatchHandler @ 00634110 */
    uVar14 = uVar11 + 1;
    auVar16 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_8 + 8,1,0xc,2,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'M':
                    /* try { // try from 00634148 to 00734153 has its CatchHandler @ 00634280 */
    uVar14 = uVar11 + 1;
    auVar16 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_8 + 4,0,0x3b,2,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'R':
    if ((char)plVar9[7] == '\x01') {
                    /* WARNING: Ignoring partial resolution of indirect */
      local_60._0_4_ = DAT_0069e380;
    }
    else {
      if ((char)plVar9[7] == '\0') {
        FUN_0061fea0(plVar9);
      }
      (**(code **)(*plVar9 + 0x38))(plVar9,&DAT_0069e380,&DAT_0069e386,&local_60);
    }
                    /* try { // try from 00634110 to 00734147 has its CatchHandler @ 00634110
                       catch() { ... } // from try @ 00634110 with catch @ 00634110
                       catch() { ... } // from try @ 006341c8 with catch @ 00634110
                       catch() { ... } // from try @ 00634200 with catch @ 00634110
                       catch() { ... } // from try @ 006342a0 with catch @ 00634110 */
    uVar14 = uVar11 + 1;
    auVar16 = FUN_00633538(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_6,&local_68,param_8,&local_60);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'S':
    uVar14 = uVar11 + 1;
    auVar16 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_8,0,0x3d,2,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'T':
    if ((char)plVar9[7] == '\x01') {
      local_60 = DAT_0069e388;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_58._0_1_ = DAT_0069e390;
    }
    else {
      if ((char)plVar9[7] == '\0') {
                    /* catch() { ... } // from try @ 00634408 with catch @ 00634414 */
        FUN_0061fea0(plVar9);
      }
      (**(code **)(*plVar9 + 0x38))(plVar9,&DAT_0069e388,&DAT_0069e391,&local_60);
    }
    uVar14 = uVar11 + 1;
    auVar16 = FUN_00633538(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_6,&local_68,param_8,&local_60);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'X':
    uVar14 = uVar11 + 1;
                    /* catch() { ... } // from try @ 00633d3c with catch @ 00633d74 */
                    /* try { // try from 00633d80 to 00733d83 has its CatchHandler @ 00633d84 */
                    /* catch() { ... } // from try @ 00633d80 with catch @ 00633d84 */
                    /* try { // try from 00633d88 to 00733d8b has its CatchHandler @ 00633d94 */
                    /* try { // try from 00633d8c to 00733d97 has its CatchHandler @ 00633d1c */
    auVar16 = FUN_00633538(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_6,&local_68,param_8,
                           *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x20));
    local_80._0_8_ = auVar16._0_8_;
                    /* catch() { ... } // from try @ 00633d88 with catch @ 00633d94 */
    goto LAB_006335dc;
  case 'Z':
    bVar3 = FUN_00632808(local_80);
    if ((*(byte *)(plVar9[6] + (ulong)bVar3) & 1) == 0) goto LAB_00633680;
    local_80 = FUN_00632890(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                            local_88,&local_60,PTR_PTR_007e6d90,0xe,param_6,&local_68);
    iVar6 = FUN_00632808(local_80);
    iVar7 = FUN_00632808(&local_90);
    auVar16 = local_80;
    if ((((iVar6 == -1) != (iVar7 == -1)) && (local_68 == 0)) && ((int)local_60 == 0)) {
      cVar2 = FUN_00632808(local_80);
      if ((char)plVar9[7] == '\0') {
        cVar4 = FUN_0062b4bc(plVar9,0x2d);
      }
      else {
        cVar4 = *(char *)((long)plVar9 + 0x66);
      }
      auVar16 = local_80;
      if (cVar2 != cVar4) {
        cVar2 = FUN_00632808(local_80);
        if ((char)plVar9[7] == '\0') {
          cVar4 = FUN_0062b4bc(plVar9,0x2b);
          auVar16 = local_80;
                    /* try { // try from 00634510 to 00734673 has its CatchHandler @ 00634510
                       catch() { ... } // from try @ 00634510 with catch @ 00634510
                       catch() { ... } // from try @ 00634814 with catch @ 00634510
                       catch() { ... } // from try @ 006348e8 with catch @ 00634510
                       catch() { ... } // from try @ 006349c0 with catch @ 00634510 */
        }
        else {
          cVar4 = *(char *)((long)plVar9 + 100);
          auVar16 = local_80;
        }
        if (cVar2 != cVar4) break;
      }
      local_80._8_4_ = auVar16._8_4_;
      local_80._0_8_ = auVar16._0_8_;
      auVar15 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,&local_60,0,0x17,2,param_6,&local_68);
      local_80 = auVar16;
                    /* try { // try from 00633d1c to 00733d3b has its CatchHandler @ 00633d1c
                       catch() { ... } // from try @ 00633d1c with catch @ 00633d1c
                       catch() { ... } // from try @ 00633d44 with catch @ 00633d1c
                       catch() { ... } // from try @ 00633d8c with catch @ 00633d1c */
      local_80 = auVar15;
      auVar16 = FUN_0062d5d4(param_1,auVar15._0_8_,CONCAT44(uStack_74,auVar15._8_4_),local_90,
                             local_88,&local_60,0,0x3b,2,param_6,&local_68);
                    /* try { // try from 00633d3c to 00733d43 has its CatchHandler @ 00633d74 */
                    /* try { // try from 00633d44 to 00733d7f has its CatchHandler @ 00633d1c */
    }
    break;
  case 'a':
    lVar12 = *(long *)(lVar8 + 0x10);
    local_60 = *(undefined8 *)(lVar12 + 0x90);
    local_58 = *(undefined8 *)(lVar12 + 0x98);
    uVar14 = uVar11 + 1;
    local_50 = *(undefined8 *)(lVar12 + 0xa0);
    local_48 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xa8);
    local_40 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xb0);
    local_38 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xb8);
    local_30 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xc0);
    auVar16 = FUN_00632890(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_8 + 0x18,&local_60,7,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'b':
  case 'h':
    lVar12 = *(long *)(lVar8 + 0x10);
    uVar14 = uVar11 + 1;
    local_60 = *(undefined8 *)(lVar12 + 0x128);
    local_58 = *(undefined8 *)(lVar12 + 0x130);
    local_50 = *(undefined8 *)(lVar12 + 0x138);
    local_48 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x140);
    local_40 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x148);
    local_38 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x150);
    local_30 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x158);
    local_28 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x160);
    local_20 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x168);
    local_18 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x170);
    local_10 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x178);
    local_8 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x180);
    auVar16 = FUN_00632890(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_8 + 0x10,&local_60,0xc,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'c':
    uVar14 = uVar11 + 1;
    auVar16 = FUN_00633538(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_6,&local_68,param_8,
                           *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x30));
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'd':
    uVar14 = uVar11 + 1;
    auVar16 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_8 + 0xc,1,0x1f,2,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  case 'e':
    bVar3 = FUN_00632808(local_80);
                    /* catch() { ... } // from try @ 00633880 with catch @ 00633928 */
    if ((*(byte *)(plVar9[6] + (ulong)bVar3) >> 3 & 1) == 0) {
      uVar14 = uVar11 + 1;
      auVar16 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 0xc,10,0x1f,2,param_6,&local_68);
      local_80._0_8_ = auVar16._0_8_;
                    /* try { // try from 006343d4 to 007343d7 has its CatchHandler @ 006343d8 */
                    /* catch() { ... } // from try @ 006343d4 with catch @ 006343d8
                       try { // try from 006343d8 to 007343e7 has its CatchHandler @ 006342ac */
                    /* catch() { ... } // from try @ 006342fc with catch @ 006343dc */
    }
    else {
      if ((long *)local_80._0_8_ != (long *)0x0) {
        if (*(ulong *)(local_80._0_8_ + 0x10) < *(ulong *)(local_80._0_8_ + 0x18)) {
          *(ulong *)(local_80._0_8_ + 0x10) = *(ulong *)(local_80._0_8_ + 0x10) + 1;
        }
        else {
          FUN_0062b4a0();
        }
        local_80._8_4_ = 0xffffffff;
      }
      uVar14 = uVar11 + 1;
      auVar16 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 0xc,1,9,1,param_6,&local_68);
      local_80._0_8_ = auVar16._0_8_;
    }
    goto LAB_006335dc;
  case 'm':
    auVar16 = FUN_0062d5d4(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,&local_64,1,0xc,2,param_6,&local_68);
    local_80._0_8_ = auVar16._0_8_;
    if (local_68 != 0) goto LAB_0063368c;
    uVar14 = uVar11 + 1;
    *(int *)(param_8 + 0x10) = local_64 + -1;
    goto LAB_006335dc;
  case 'n':
    uVar14 = FUN_00632808(local_80);
    cVar2 = *(char *)((long)plVar9 + (uVar14 & 0xff) + 0x139);
    if (cVar2 == '\0') {
                    /* try { // try from 006343e8 to 007343ef has its CatchHandler @ 00634404 */
      cVar2 = (**(code **)(*plVar9 + 0x40))(plVar9,uVar14 & 0xffffffff,0);
                    /* try { // try from 006343fc to 007343ff has its CatchHandler @ 00634400 */
                    /* catch() { ... } // from try @ 006343fc with catch @ 00634400 */
      if (cVar2 == '\0') goto LAB_00633680;
                    /* catch() { ... } // from try @ 006343e8 with catch @ 00634404 */
      *(char *)((long)plVar9 + (uVar14 & 0xff) + 0x139) = cVar2;
                    /* try { // try from 00634408 to 0073440b has its CatchHandler @ 00634414 */
                    /* try { // try from 0063440c to 00734417 has its CatchHandler @ 006342ac */
    }
    if (cVar2 != '\n') goto LAB_00633680;
LAB_00633df4:
    auVar16._8_4_ = local_80._8_4_;
    auVar16._0_8_ = local_80._0_8_;
    if ((long *)local_80._0_8_ == (long *)0x0) goto LAB_0063368c;
    uVar14 = uVar11;
    if (*(ulong *)(local_80._0_8_ + 0x10) < *(ulong *)(local_80._0_8_ + 0x18)) {
      *(ulong *)(local_80._0_8_ + 0x10) = *(ulong *)(local_80._0_8_ + 0x10) + 1;
    }
    else {
      FUN_0062b4a0(local_80._0_8_);
    }
    goto LAB_0063383c;
  case 't':
    uVar14 = FUN_00632808(local_80);
    cVar2 = *(char *)((long)plVar9 + (uVar14 & 0xff) + 0x139);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*plVar9 + 0x40))(plVar9,uVar14 & 0xffffffff,0);
      if (cVar2 == '\0') goto LAB_00633680;
      *(char *)((long)plVar9 + (uVar14 & 0xff) + 0x139) = cVar2;
    }
    if (cVar2 == '\t') goto LAB_00633df4;
    goto LAB_00633680;
  case 'x':
    uVar14 = uVar11 + 1;
    auVar16 = FUN_00633538(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                           local_88,param_6,&local_68,param_8,
                           *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10));
    local_80._0_8_ = auVar16._0_8_;
    goto LAB_006335dc;
  }
  local_80._0_8_ = auVar16._0_8_;
  uVar14 = uVar11 + 1;
  goto LAB_006335dc;
}


