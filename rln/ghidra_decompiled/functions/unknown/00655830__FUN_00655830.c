/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00655830
 * Function: FUN_00655830
 * Signature: undefined FUN_00655830(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00655830(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,long param_8,wchar_t *param_9)

{
  wchar_t wVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  char cVar5;
  int iVar6;
  undefined4 uVar9;
  int iVar7;
  wchar_t wVar8;
  long lVar10;
  long *plVar11;
  size_t sVar12;
  long lVar13;
  long lVar14;
  size_t sVar15;
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
  
                    /* try { // try from 00655838 to 00755857 has its CatchHandler @ 006558d0 */
                    /* try { // try from 00655858 to 00755877 has its CatchHandler @ 006558cc */
  local_80._8_4_ = (undefined4)param_3;
  uStack_74 = (undefined4)((ulong)param_3 >> 0x20);
  local_90 = param_4;
  local_88 = param_5;
  local_80._0_8_ = param_2;
                    /* try { // try from 00655878 to 00755897 has its CatchHandler @ 006558c8 */
  lVar10 = FUN_006513a0(param_6 + 0xd0);
  sVar15 = 0;
  plVar11 = (long *)FUN_0064f6ac(param_6 + 0xd0);
                    /* try { // try from 00655898 to 00755983 has its CatchHandler @ 0065579c */
  sVar12 = wcslen(param_9);
  auVar16._8_4_ = local_80._8_4_;
  auVar16._0_8_ = local_80._0_8_;
  local_68 = 0;
                    /* catch() { ... } // from try @ 00655878 with catch @ 006558c8 */
                    /* catch() { ... } // from try @ 00655858 with catch @ 006558cc */
                    /* catch() { ... } // from try @ 00655838 with catch @ 006558d0 */
  if ((long *)local_80._0_8_ == (long *)0x0) goto LAB_00655978;
LAB_006558d8:
  local_80._8_4_ = auVar16._8_4_;
  if (local_80._8_4_ == -1) {
    if (*(int **)(local_80._0_8_ + 0x10) < *(int **)(local_80._0_8_ + 0x18)) {
      iVar6 = **(int **)(local_80._0_8_ + 0x10);
      local_80 = auVar16;
    }
    else {
      iVar6 = (**(code **)(*(long *)local_80._0_8_ + 0x48))(local_80._0_8_);
      local_80 = auVar16;
    }
    auVar16._8_4_ = iVar6;
    auVar16._0_8_ = local_80._0_8_;
    if (iVar6 == -1) {
      auVar3._4_8_ = 0;
      auVar3._0_4_ = local_80._8_4_;
      auVar16 = auVar3 << 0x40;
      goto LAB_00655978;
    }
  }
  iVar6 = 0;
  local_80 = auVar16;
  if (local_90 == (long *)0x0) goto LAB_00655908;
  iVar7 = 0;
  if ((int)local_88 == -1) goto LAB_00655994;
LAB_00655900:
  if (iVar6 == iVar7) {
LAB_006559c4:
    if ((local_68 != 0) || (sVar15 != sVar12)) {
      *param_7 = *param_7 | 4;
    }
    auVar2._12_4_ = uStack_74;
    auVar2._0_12_ = local_80;
    return auVar2;
  }
LAB_00655908:
  do {
    if ((sVar12 <= sVar15) || (local_68 != 0)) goto LAB_006559c4;
    cVar5 = (**(code **)(*plVar11 + 0x60))(plVar11,param_9[sVar15],0);
    if (cVar5 != '%') {
      wVar1 = param_9[sVar15];
      auVar16 = local_80;
      if ((long *)local_80._0_8_ == (long *)0x0) {
LAB_00655aa0:
        local_80._0_8_ = (long *)0x0;
        if (wVar1 == L'\xffffffff') {
          sVar15 = sVar15 + 1;
        }
        else {
LAB_00655964:
          local_68 = local_68 | 4;
                    /* catch() { ... } // from try @ 00655820 with catch @ 0065596c */
LAB_00655970:
          sVar15 = sVar15 + 1;
        }
      }
      else {
        if (local_80._8_4_ == L'\xffffffff') {
          if (*(wchar_t **)(local_80._0_8_ + 0x10) < *(wchar_t **)(local_80._0_8_ + 0x18)) {
            wVar8 = **(wchar_t **)(local_80._0_8_ + 0x10);
          }
          else {
            wVar8 = (**(code **)(*(long *)local_80._0_8_ + 0x48))();
          }
          auVar16._8_4_ = wVar8;
          auVar16._0_8_ = local_80._0_8_;
          if (wVar8 == L'\xffffffff') {
            auVar4._4_8_ = 0;
            auVar4._0_4_ = local_80._8_4_;
            auVar16 = auVar4 << 0x40;
            goto LAB_00655aa0;
          }
          if (wVar1 != wVar8) goto LAB_00655964;
          if ((long *)local_80._0_8_ != (long *)0x0) goto LAB_00655af0;
          goto LAB_00655970;
        }
        if (wVar1 != local_80._8_4_) goto LAB_00655964;
LAB_00655af0:
        local_80._0_8_ = auVar16._0_8_;
        if (*(ulong *)(local_80._0_8_ + 0x10) < *(ulong *)(local_80._0_8_ + 0x18)) {
          *(ulong *)(local_80._0_8_ + 0x10) = *(ulong *)(local_80._0_8_ + 0x10) + 4;
        }
        else {
          lVar14 = *(long *)local_80._0_8_;
          local_80 = auVar16;
          (**(code **)(lVar14 + 0x50))();
        }
        sVar15 = sVar15 + 1;
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = local_80._0_8_;
                    /* try { // try from 00655b10 to 00755b1b has its CatchHandler @ 00655f40 */
      }
      goto LAB_00655974;
    }
    lVar14 = sVar15 + 1;
    cVar5 = (**(code **)(*plVar11 + 0x60))(plVar11,param_9[sVar15 + 1],0);
    local_64 = 0;
    if ((cVar5 == 'O') || (cVar5 == 'E')) {
      lVar14 = sVar15 + 2;
      cVar5 = (**(code **)(*plVar11 + 0x60))(plVar11,param_9[sVar15 + 2],0);
    }
    switch(cVar5) {
    case 'A':
      lVar13 = *(long *)(lVar10 + 0x10);
      local_60 = *(undefined8 *)(lVar13 + 0x58);
      local_58 = *(undefined8 *)(lVar13 + 0x60);
      local_50 = *(undefined8 *)(lVar13 + 0x68);
      local_48 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x70);
      local_40 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x78);
      local_38 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x80);
      local_30 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x88);
      auVar16 = FUN_00654b9c(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 0x18,&local_60,7,param_6,&local_68);
      break;
    case 'B':
      lVar13 = *(long *)(lVar10 + 0x10);
      local_60 = *(undefined8 *)(lVar13 + 200);
      local_58 = *(undefined8 *)(lVar13 + 0xd0);
      local_50 = *(undefined8 *)(lVar13 + 0xd8);
      local_48 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0xe0);
      local_40 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0xe8);
      local_38 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0xf0);
      local_30 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0xf8);
      local_28 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x100);
      local_20 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x108);
      local_18 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x110);
      local_10 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x118);
      local_8 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x120);
      auVar16 = FUN_00654b9c(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 0x10,&local_60,0xc,param_6,&local_68);
      break;
    case 'C':
    case 'Y':
    case 'y':
      auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,&local_64,0,9999,4,param_6,&local_68);
      if (local_68 == 0) {
        if (local_64 < 0) {
          iVar6 = local_64 + 100;
        }
        else {
          iVar6 = local_64 + -0x76c;
        }
        *(int *)(param_8 + 0x14) = iVar6;
      }
      break;
    case 'D':
      (**(code **)(*plVar11 + 0x58))(plVar11,&DAT_0069e370,&DAT_0069e379,&local_60);
      auVar16 = FUN_00655830(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_6,&local_68,param_8,&local_60);
      break;
    default:
switchD_00655a98_caseD_45:
      auVar16 = local_80;
      goto LAB_00655a70;
    case 'H':
                    /* try { // try from 00655e5c to 00755e63 has its CatchHandler @ 00655f8c */
                    /* try { // try from 00655e64 to 00755f5f has its CatchHandler @ 006559b8 */
      auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 8,0,0x17,2,param_6,&local_68);
      break;
    case 'I':
      auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 8,1,0xc,2,param_6,&local_68);
      break;
    case 'M':
      auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 4,0,0x3b,2,param_6,&local_68);
                    /* catch() { ... } // from try @ 00655b10 with catch @ 00655f40 */
      break;
    case 'R':
                    /* try { // try from 00655f60 to 00755fd3 has its CatchHandler @ 00655fdc */
      (**(code **)(*plVar11 + 0x58))(plVar11,&DAT_0069e380,&DAT_0069e386,&local_60);
                    /* catch() { ... } // from try @ 00655e5c with catch @ 00655f8c */
      auVar16 = FUN_00655830(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_6,&local_68,param_8,&local_60);
      break;
    case 'S':
                    /* try { // try from 00655fd4 to 00755fdf has its CatchHandler @ 006559b8 */
                    /* catch() { ... } // from try @ 00655f60 with catch @ 00655fdc */
                    /* catch() { ... } // from try @ 00656060 with catch @ 00655fe0 */
      auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8,0,0x3d,2,param_6,&local_68);
      break;
    case 'T':
                    /* try { // try from 00656038 to 0075605f has its CatchHandler @ 00656070 */
      (**(code **)(*plVar11 + 0x58))(plVar11,&DAT_0069e388,&DAT_0069e391,&local_60);
                    /* try { // try from 00656060 to 00756083 has its CatchHandler @ 00655fe0 */
      auVar16 = FUN_00655830(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_6,&local_68,param_8,&local_60);
                    /* catch() { ... } // from try @ 00656038 with catch @ 00656070 */
      break;
    case 'X':
                    /* try { // try from 006560a4 to 0075612b has its CatchHandler @ 006560a4
                       catch() { ... } // from try @ 006560a4 with catch @ 006560a4
                       catch() { ... } // from try @ 00656204 with catch @ 006560a4 */
      auVar16 = FUN_00655830(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_6,&local_68,param_8,
                             *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x20));
      break;
    case 'Z':
      uVar9 = FUN_00654b08(local_80);
      cVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,1,uVar9);
      if (cVar5 == '\0') goto switchD_00655a98_caseD_45;
                    /* try { // try from 0065612c to 00756143 has its CatchHandler @ 006562f0 */
      auVar16 = FUN_00654b9c(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,&local_60,PTR_PTR_007e7fc0,0xe,param_6,&local_68);
      local_80 = auVar16;
                    /* try { // try from 00656144 to 00756163 has its CatchHandler @ 0065624c */
      iVar6 = FUN_00654b08(local_80);
      iVar7 = FUN_00654b08(&local_90);
                    /* try { // try from 00656164 to 00756183 has its CatchHandler @ 00656248 */
      auVar16 = local_80;
                    /* try { // try from 00656184 to 007561a3 has its CatchHandler @ 00656244 */
      if ((((iVar6 == -1) != (iVar7 == -1)) && (local_68 == 0)) && ((int)local_60 == 0)) {
        iVar6 = FUN_00654b08(local_80);
                    /* try { // try from 006561a4 to 007561c3 has its CatchHandler @ 00656240 */
        iVar7 = (**(code **)(*plVar11 + 0x50))(plVar11,0x2d);
        if (iVar6 != iVar7) {
          iVar6 = FUN_00654b08(local_80);
                    /* try { // try from 006561c4 to 007561e3 has its CatchHandler @ 0065623c */
          iVar7 = (**(code **)(*plVar11 + 0x50))(plVar11,0x2b);
          auVar16 = local_80;
          if (iVar6 != iVar7) break;
        }
                    /* try { // try from 006561e4 to 00756203 has its CatchHandler @ 00656238 */
                    /* try { // try from 00656204 to 00756307 has its CatchHandler @ 006560a4 */
        auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                               local_88,&local_60,0,0x17,2,param_6,&local_68);
                    /* catch() { ... } // from try @ 006561e4 with catch @ 00656238 */
                    /* catch() { ... } // from try @ 006561c4 with catch @ 0065623c */
                    /* catch() { ... } // from try @ 006561a4 with catch @ 00656240 */
                    /* catch() { ... } // from try @ 00656184 with catch @ 00656244 */
                    /* catch() { ... } // from try @ 00656164 with catch @ 00656248 */
                    /* catch() { ... } // from try @ 00656144 with catch @ 0065624c */
        local_80 = auVar16;
        auVar16 = FUN_0064f8cc(param_1,auVar16._0_8_,CONCAT44(uStack_74,auVar16._8_4_),local_90,
                               local_88,&local_60,0,0x3b,2,param_6,&local_68);
      }
      break;
    case 'a':
      lVar13 = *(long *)(lVar10 + 0x10);
      local_60 = *(undefined8 *)(lVar13 + 0x90);
      local_58 = *(undefined8 *)(lVar13 + 0x98);
      local_50 = *(undefined8 *)(lVar13 + 0xa0);
      local_48 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0xa8);
      local_40 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0xb0);
      local_38 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0xb8);
      local_30 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0xc0);
                    /* catch() { ... } // from try @ 0065612c with catch @ 006562f0 */
      auVar16 = FUN_00654b9c(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 0x18,&local_60,7,param_6,&local_68);
      break;
    case 'b':
    case 'h':
      lVar13 = *(long *)(lVar10 + 0x10);
      local_60 = *(undefined8 *)(lVar13 + 0x128);
                    /* try { // try from 0065633c to 007566d7 has its CatchHandler @ 0065633c
                       catch(type#1 @ 00000000) { ... } // from try @ 0065633c with catch @ 0065633c
                       catch(type#1 @ 00000000) { ... } // from try @ 006566e0 with catch @ 0065633c
                       catch(type#1 @ 00000000) { ... } // from try @ 00656800 with catch @ 0065633c
                        */
      local_58 = *(undefined8 *)(lVar13 + 0x130);
      local_50 = *(undefined8 *)(lVar13 + 0x138);
      local_48 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x140);
      local_40 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x148);
      local_38 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x150);
      local_30 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x158);
      local_28 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x160);
      local_20 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x168);
      local_18 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x170);
      local_10 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x178);
      local_8 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x180);
      auVar16 = FUN_00654b9c(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 0x10,&local_60,0xc,param_6,&local_68);
      break;
    case 'c':
      auVar16 = FUN_00655830(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_6,&local_68,param_8,
                             *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x30));
      break;
    case 'd':
      auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_8 + 0xc,1,0x1f,2,param_6,&local_68);
      break;
    case 'e':
      uVar9 = FUN_00654b08(local_80);
      cVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,8,uVar9);
      if (cVar5 == '\0') {
        auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                               local_88,param_8 + 0xc,10,0x1f,2,param_6,&local_68);
      }
      else {
        if (local_80._0_8_ != 0) {
          if (*(ulong *)(local_80._0_8_ + 0x10) < *(ulong *)(local_80._0_8_ + 0x18)) {
            *(ulong *)(local_80._0_8_ + 0x10) = *(ulong *)(local_80._0_8_ + 0x10) + 4;
          }
          else {
            FUN_0064d8c4();
          }
          local_80._8_4_ = 0xffffffff;
        }
        auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                               local_88,param_8 + 0xc,1,9,1,param_6,&local_68);
      }
      break;
    case 'm':
      auVar16 = FUN_0064f8cc(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,&local_64,1,0xc,2,param_6,&local_68);
      if (local_68 == 0) {
        *(int *)(param_8 + 0x10) = local_64 + -1;
      }
      break;
    case 'n':
      uVar9 = FUN_00654b08(local_80);
      cVar5 = (**(code **)(*plVar11 + 0x60))(plVar11,uVar9,0);
      auVar16 = local_80;
      if (cVar5 != '\n') goto LAB_00655a70;
LAB_006565ec:
      local_80._0_8_ = auVar16._0_8_;
      if (local_80._0_8_ != 0) {
        if (*(ulong *)(local_80._0_8_ + 0x10) < *(ulong *)(local_80._0_8_ + 0x18)) {
          *(ulong *)(local_80._0_8_ + 0x10) = *(ulong *)(local_80._0_8_ + 0x10) + 4;
        }
        else {
          FUN_0064d8c4(local_80._0_8_);
          local_80 = auVar16;
                    /* try { // try from 006566d8 to 007566df has its CatchHandler @ 006567b8 */
        }
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = local_80._0_8_;
      }
      break;
    case 't':
      uVar9 = FUN_00654b08(local_80);
      cVar5 = (**(code **)(*plVar11 + 0x60))(plVar11,uVar9,0);
      auVar16 = local_80;
      if (cVar5 == '\t') goto LAB_006565ec;
LAB_00655a70:
      local_68 = local_68 | 4;
      break;
    case 'x':
      auVar16 = FUN_00655830(param_1,local_80._0_8_,CONCAT44(uStack_74,local_80._8_4_),local_90,
                             local_88,param_6,&local_68,param_8,
                             *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x10));
    }
    local_80._0_8_ = auVar16._0_8_;
    sVar15 = lVar14 + 1;
LAB_00655974:
    if ((long *)local_80._0_8_ != (long *)0x0) goto LAB_006558d8;
LAB_00655978:
    local_80 = auVar16;
    if (local_90 == (long *)0x0) goto LAB_006559c4;
    iVar6 = 1;
    iVar7 = 0;
    if ((int)local_88 != -1) goto LAB_00655900;
LAB_00655994:
    local_80 = auVar16;
    if ((int *)local_90[2] < (int *)local_90[3]) {
      iVar7 = *(int *)local_90[2];
    }
    else {
      iVar7 = (**(code **)(*local_90 + 0x48))();
    }
    if (iVar7 == -1) break;
    local_88 = CONCAT44(local_88._4_4_,iVar7);
                    /* try { // try from 006559b8 to 00755b0f has its CatchHandler @ 006559b8
                       catch() { ... } // from try @ 006559b8 with catch @ 006559b8
                       catch() { ... } // from try @ 00655b1c with catch @ 006559b8
                       catch() { ... } // from try @ 00655e64 with catch @ 006559b8
                       catch() { ... } // from try @ 00655fd4 with catch @ 006559b8 */
    if (iVar6 == 0) goto LAB_006559c4;
  } while( true );
                    /* try { // try from 00655b1c to 00755e5b has its CatchHandler @ 006559b8 */
  local_90 = (long *)0x0;
  iVar7 = 1;
  goto LAB_00655900;
}


