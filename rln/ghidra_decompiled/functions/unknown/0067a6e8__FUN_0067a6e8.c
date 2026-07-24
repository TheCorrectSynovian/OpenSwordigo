/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067a6e8
 * Function: FUN_0067a6e8
 * Signature: undefined FUN_0067a6e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067a6e8(undefined1 *param_1,uint param_2,int *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  char *pcVar12;
  size_t sVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 *puVar21;
  long *plVar22;
  long **pplVar23;
  long **pplVar24;
  ulong uVar25;
  byte bVar26;
  int iVar27;
  size_t sVar28;
  byte *pbVar29;
  byte *pbVar30;
  uint uVar31;
  undefined8 unaff_x22;
  ulong uVar32;
  ulong uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long local_90;
  int *local_88;
  long *local_80;
  int *local_78;
  long local_70 [2];
  long **local_60;
  int *local_58;
  long local_50 [2];
  long ***local_40;
  int *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  long *local_20;
  int *local_18;
  ulong local_10;
  long local_8;
  
                    /* try { // try from 0067a6ec to 0077a6fb has its CatchHandler @ 0067a7bc */
                    /* try { // try from 0067a704 to 0077a723 has its CatchHandler @ 0067a7c0 */
  if (param_3 == (int *)0x0) goto LAB_0067a764;
  if (*(int *)(param_1 + 0x130) != 0) {
    return;
  }
  iVar7 = *param_3;
  switch(iVar7) {
  case 0:
    if ((param_2 >> 2 & 1) == 0) {
      iVar7 = param_3[4];
      lVar11 = *(long *)(param_3 + 2);
      if ((long)iVar7 != 0) {
        lVar19 = 0;
        lVar18 = *(long *)(param_1 + 0x100);
        do {
                    /* catch() { ... } // from try @ 0067a704 with catch @ 0067a7c0 */
          uVar5 = *(undefined1 *)(lVar11 + lVar19);
          if (lVar18 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar8 = 1;
            lVar18 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar8 = lVar18 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar8;
          lVar19 = lVar19 + 1;
          param_1[lVar18] = uVar5;
          param_1[0x108] = uVar5;
          lVar18 = lVar8;
                    /* catch() { ... } // from try @ 0067a6ec with catch @ 0067a7bc */
        } while (iVar7 != lVar19);
      }
    }
    else {
      pbVar29 = *(byte **)(param_3 + 2);
      pbVar2 = pbVar29 + param_3[4];
      while (pbVar29 < pbVar2) {
        bVar26 = *pbVar29;
        if (((3 < (long)pbVar2 - (long)pbVar29) && (bVar26 == 0x5f)) &&
           ((pbVar29[1] == 0x5f &&
            ((bVar26 = 0x5f, pbVar29[2] == 0x55 && (pbVar30 = pbVar29 + 3, pbVar30 < pbVar2)))))) {
          uVar33 = 0;
          do {
            bVar26 = *pbVar30;
            uVar16 = (uint)bVar26;
            uVar31 = uVar16 - 0x30;
            if (9 < (uVar31 & 0xff)) {
              if ((uVar16 - 0x41 & 0xff) < 6) {
                uVar31 = uVar16 - 0x37;
              }
              else {
                if (5 < (uVar16 - 0x61 & 0xff)) {
                  if (((pbVar30 < pbVar2) && (bVar26 == 0x5f)) && (uVar33 < 0x100)) {
                    lVar11 = *(long *)(param_1 + 0x100);
                    if (lVar11 == 0xff) {
                      param_1[0xff] = 0;
                      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                      *(undefined8 *)(param_1 + 0x100) = 0;
                      lVar11 = 0;
                      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
                    }
                    *(long *)(param_1 + 0x100) = lVar11 + 1;
                    param_1[lVar11] = (char)uVar33;
                    param_1[0x108] = (char)uVar33;
                    goto LAB_0067cde4;
                  }
                  break;
                }
                uVar31 = bVar26 - 0x57;
              }
            }
            pbVar30 = pbVar30 + 1;
            uVar33 = (long)(int)uVar31 + uVar33 * 0x10;
          } while (pbVar30 != pbVar2);
          bVar26 = 0x5f;
        }
        lVar11 = *(long *)(param_1 + 0x100);
        if (lVar11 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar11 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar19 = lVar11 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar19;
        param_1[lVar11] = bVar26;
        param_1[0x108] = bVar26;
        pbVar30 = pbVar29;
LAB_0067cde4:
        pbVar29 = pbVar30 + 1;
      }
    }
    break;
  case 1:
  case 2:
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar11 = *(long *)(param_1 + 0x100);
    if ((param_2 >> 2 & 1) == 0) {
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        *param_1 = 0x3a;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0067a838:
        lVar11 = lVar19 + 1;
      }
      else {
        lVar19 = lVar11 + 1;
        *(long *)(param_1 + 0x100) = lVar19;
        param_1[lVar11] = 0x3a;
        param_1[0x108] = 0x3a;
                    /* try { // try from 0067a834 to 0077a873 has its CatchHandler @ 0067a834
                       catch() { ... } // from try @ 0067a834 with catch @ 0067a834
                       catch() { ... } // from try @ 0067a8a4 with catch @ 0067a834 */
        if (lVar19 != 0xff) goto LAB_0067a838;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar11 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar11;
      param_1[lVar19] = 0x3a;
      param_1[0x108] = 0x3a;
    }
    else {
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
                    /* catch() { ... } // from try @ 0067d7a0 with catch @ 0067d754 */
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x2e;
      param_1[0x108] = 0x2e;
    }
    piVar10 = *(int **)(param_3 + 4);
    if (*piVar10 == 0x46) {
      FUN_00672840(param_1,"{default arg#");
      FUN_00672a48(param_1,(long)(piVar10[4] + 1));
      FUN_00672840(param_1,&DAT_006a06d8);
      piVar10 = *(int **)(piVar10 + 2);
    }
    FUN_0067a6e8(param_1,param_2,piVar10);
    break;
  case 3:
    uVar35 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    piVar10 = *(int **)(param_3 + 2);
                    /* try { // try from 0067a874 to 0077a87f has its CatchHandler @ 0067aa4c */
    if (piVar10 != (int *)0x0) {
      iVar7 = *piVar10;
                    /* try { // try from 0067a880 to 0077a88f has its CatchHandler @ 0067a9e0 */
      lVar11 = *(long *)(param_1 + 0x120);
      local_80 = (long *)0x0;
      *(long ***)(param_1 + 0x128) = &local_80;
      local_78 = piVar10;
                    /* try { // try from 0067a898 to 0077a8a3 has its CatchHandler @ 0067a97c */
      local_70[0]._0_4_ = 0;
      local_70[1] = lVar11;
      if (iVar7 - 0x1cU < 5) {
                    /* try { // try from 0067a8a4 to 0077aa4f has its CatchHandler @ 0067a834 */
        piVar10 = *(int **)(piVar10 + 2);
        if (piVar10 != (int *)0x0) {
          iVar7 = *piVar10;
          local_60 = &local_80;
          *(long ****)(param_1 + 0x128) = &local_60;
          local_58 = piVar10;
          local_50[0]._0_4_ = 0;
          local_50[1] = lVar11;
          if (4 < iVar7 - 0x1cU) {
            uVar33 = 2;
            goto LAB_0067dd54;
          }
          piVar10 = *(int **)(piVar10 + 2);
          if (piVar10 != (int *)0x0) {
            iVar7 = *piVar10;
            local_40 = &local_60;
            local_38 = piVar10;
            *(long **)(param_1 + 0x128) = local_50 + 2;
            local_30 = 0;
            local_28 = lVar11;
            if (4 < iVar7 - 0x1cU) {
              uVar33 = 3;
              goto LAB_0067dd54;
            }
            piVar10 = *(int **)(piVar10 + 2);
            if (piVar10 != (int *)0x0) {
              iVar7 = *piVar10;
              local_20 = local_50 + 2;
              local_18 = piVar10;
              *(long ***)(param_1 + 0x128) = &local_20;
              local_10 = local_10 & 0xffffffff00000000;
              local_8 = lVar11;
              if (4 < iVar7 - 0x1cU) {
                uVar33 = 4;
                goto LAB_0067dd54;
              }
            }
          }
        }
      }
      else {
        uVar33 = 1;
LAB_0067dd54:
        uVar32 = uVar33;
        if (iVar7 == 4) {
          *(long **)(param_1 + 0x120) = &local_90;
          local_90 = lVar11;
          local_88 = piVar10;
LAB_0067de74:
          FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
          if (*piVar10 == 4) {
            *(long *)(param_1 + 0x120) = local_90;
          }
          iVar7 = (int)uVar32;
          uVar31 = iVar7 - 1;
          if ((int)local_70[(ulong)uVar31 * 4] == 0) {
            FUN_0067253c(param_1,0x20);
            FUN_0067e0f4(param_1,param_2,(&local_78)[(ulong)uVar31 * 4]);
          }
          if (uVar31 != 0) {
            uVar31 = iVar7 - 2;
            if ((int)local_70[(ulong)uVar31 * 4] == 0) {
              FUN_0067253c(param_1,0x20);
              FUN_0067e0f4(param_1,param_2,(&local_78)[(ulong)uVar31 * 4]);
            }
            if (uVar31 != 0) {
              uVar31 = iVar7 - 3;
              if ((int)local_70[(ulong)uVar31 * 4] == 0) {
                FUN_0067253c(param_1,0x20);
                FUN_0067e0f4(param_1,param_2,(&local_78)[(ulong)uVar31 * 4]);
              }
              if ((uVar31 != 0) && ((int)local_70[0] == 0)) {
                FUN_0067253c(param_1,0x20);
                FUN_0067e0f4(param_1,param_2,local_78);
                *(undefined8 *)(param_1 + 0x128) = uVar35;
                return;
              }
            }
          }
          *(undefined8 *)(param_1 + 0x128) = uVar35;
          return;
        }
        if (iVar7 != 2) goto LAB_0067de74;
        piVar20 = *(int **)(piVar10 + 4);
        if (*piVar20 == 0x46) {
          piVar20 = *(int **)(piVar20 + 2);
        }
        if (4 < *piVar20 - 0x1cU) goto LAB_0067de74;
        iVar7 = (int)uVar33;
        if (iVar7 != 4) {
          uVar32 = (ulong)(iVar7 - 1);
          pplVar23 = &local_80 + uVar33 * 4;
          *(long ***)(param_1 + 0x128) = pplVar23;
          pplVar24 = &local_80 + uVar32 * 4;
          uVar25 = (ulong)(iVar7 + 1U);
          piVar3 = (&local_78)[uVar32 * 4];
          *pplVar23 = *pplVar24;
          (&local_78)[uVar33 * 4] = piVar3;
          lVar19 = local_70[uVar32 * 4 + 1];
          local_70[uVar33 * 4] = local_70[uVar32 * 4];
          local_70[uVar33 * 4 + 1] = lVar19;
          (&local_80)[uVar33 * 4] = (long *)pplVar24;
          (&local_78)[uVar32 * 4] = piVar20;
          *(undefined4 *)(local_70 + uVar32 * 4) = 0;
          local_70[uVar32 * 4 + 1] = lVar11;
          piVar20 = *(int **)(piVar20 + 2);
          uVar32 = uVar25;
          if (4 < *piVar20 - 0x1cU) goto LAB_0067de74;
          if (iVar7 + 1U != 4) {
            uVar32 = (ulong)(iVar7 + 2U);
            pplVar24 = &local_80 + uVar25 * 4;
            *(long ***)(param_1 + 0x128) = pplVar24;
            piVar3 = (&local_78)[uVar33 * 4];
            *pplVar24 = *pplVar23;
            (&local_78)[uVar25 * 4] = piVar3;
            lVar19 = local_70[uVar33 * 4 + 1];
            local_70[uVar25 * 4] = local_70[uVar33 * 4];
            local_70[uVar25 * 4 + 1] = lVar19;
            (&local_80)[uVar25 * 4] = (long *)pplVar23;
            (&local_78)[uVar33 * 4] = piVar20;
            *(undefined4 *)(local_70 + uVar33 * 4) = 0;
            local_70[uVar33 * 4 + 1] = lVar11;
            piVar20 = *(int **)(piVar20 + 2);
            if (4 < *piVar20 - 0x1cU) goto LAB_0067de74;
            if (iVar7 + 2U != 4) {
              local_10 = CONCAT44(uStack_2c,local_30);
              local_18 = local_38;
              local_20 = local_50 + 2;
              local_8 = local_28;
              *(long ***)(param_1 + 0x128) = &local_20;
              local_30 = 0;
              if (4 < **(int **)(piVar20 + 2) - 0x1cU) {
                uVar32 = 4;
                local_38 = piVar20;
                local_28 = lVar11;
                goto LAB_0067de74;
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 4:
    uVar35 = *(undefined8 *)(param_1 + 0x160);
    uVar34 = *(undefined8 *)(param_1 + 0x128);
    *(int **)(param_1 + 0x160) = param_3;
    *(undefined8 *)(param_1 + 0x128) = 0;
    piVar10 = *(int **)(param_3 + 2);
    if (((((param_2 >> 2 & 1) == 0) || (*piVar10 != 0)) || (piVar10[4] != 6)) ||
       (iVar7 = strncmp(*(char **)(piVar10 + 2),"JArray",6), iVar7 != 0)) {
      FUN_0067a6e8(param_1,param_2,piVar10);
      if (param_1[0x108] == '<') {
        FUN_0067253c(param_1,0x20);
      }
      lVar11 = *(long *)(param_1 + 0x100);
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x3c;
      param_1[0x108] = 0x3c;
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
      if (param_1[0x108] == '>') {
        FUN_0067253c(param_1,0x20);
      }
      lVar11 = *(long *)(param_1 + 0x100);
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x3e;
      param_1[0x108] = 0x3e;
    }
    else {
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
                    /* catch() { ... } // from try @ 0067d79c with catch @ 0067d7dc */
      FUN_00672840(param_1,&LAB_006a06e8);
    }
    *(undefined8 *)(param_1 + 0x128) = uVar34;
    *(undefined8 *)(param_1 + 0x160) = uVar35;
    break;
  case 5:
    piVar10 = (int *)FUN_0067263c(param_1,param_3 + 2);
    if (piVar10 != (int *)0x0) {
      if (*piVar10 != 0x2f) {
LAB_0067b900:
        puVar21 = *(undefined8 **)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = *puVar21;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b8d0 with catch @ 0067b914
                        */
        FUN_0067a6e8(param_1,param_2);
        *(undefined8 **)(param_1 + 0x120) = puVar21;
        return;
      }
      iVar7 = *(int *)(param_1 + 0x134);
      while (0 < iVar7) {
        piVar10 = *(int **)(piVar10 + 4);
        iVar7 = iVar7 + -1;
        if ((piVar10 == (int *)0x0) || (*piVar10 != 0x2f)) goto LAB_0067a764;
      }
      if ((iVar7 == 0) && (*(long *)(piVar10 + 2) != 0)) goto LAB_0067b900;
    }
    goto LAB_0067a764;
  case 6:
    lVar19 = *(long *)(param_3 + 2);
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar19 != 0) {
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x7b;
        lVar11 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x70;
LAB_0067c7dc:
        lVar18 = lVar11 + 1;
        *(long *)(param_1 + 0x100) = lVar18;
        param_1[lVar11] = 0x61;
        param_1[0x108] = 0x61;
        if (lVar18 == 0xff) {
          param_1[0xff] = 0;
                    /* try { // try from 0067d5c8 to 0077d5fb has its CatchHandler @ 0067d5c8
                       catch() { ... } // from try @ 0067d5c8 with catch @ 0067d5c8
                       catch() { ... } // from try @ 0067d654 with catch @ 0067d5c8 */
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x72;
          lVar11 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 0x6d;
        }
        else {
LAB_0067c7f8:
          lVar8 = lVar18 + 1;
          *(long *)(param_1 + 0x100) = lVar8;
          param_1[lVar18] = 0x72;
          param_1[0x108] = 0x72;
          if (lVar8 != 0xff) goto LAB_0067c814;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x6d;
          lVar11 = 1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar18 = lVar11 + 1;
        *(long *)(param_1 + 0x100) = lVar18;
        param_1[lVar11] = 0x7b;
        param_1[0x108] = 0x7b;
        if (lVar18 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                    /* try { // try from 0067d640 to 0077d653 has its CatchHandler @ 0067d6d8 */
          *param_1 = 0x70;
          lVar18 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
                    /* try { // try from 0067d654 to 0077d747 has its CatchHandler @ 0067d5c8 */
          param_1[1] = 0x61;
          goto LAB_0067c7f8;
        }
        lVar11 = lVar11 + 2;
        *(long *)(param_1 + 0x100) = lVar11;
        param_1[lVar18] = 0x70;
        param_1[0x108] = 0x70;
        if (lVar11 != 0xff) goto LAB_0067c7dc;
                    /* try { // try from 0067d5fc to 0077d63b has its CatchHandler @ 0067d6dc */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar8 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x72;
LAB_0067c814:
        lVar11 = lVar8 + 1;
        *(long *)(param_1 + 0x100) = lVar11;
        param_1[lVar8] = 0x6d;
        param_1[0x108] = 0x6d;
        if (lVar11 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar18 = 1;
          lVar11 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          goto LAB_0067c834;
        }
      }
      lVar18 = lVar11 + 1;
LAB_0067c834:
      *(long *)(param_1 + 0x100) = lVar18;
      param_1[lVar11] = 0x23;
      param_1[0x108] = 0x23;
      sVar28 = 0;
      sprintf((char *)&local_80,"%ld",lVar19);
      sVar13 = strlen((char *)&local_80);
      lVar11 = *(long *)(param_1 + 0x100);
      lVar19 = lVar11;
      if (sVar13 != 0) {
        do {
          cVar4 = *(char *)((long)&local_80 + sVar28);
          if (lVar19 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar11 = 1;
            lVar19 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar11 = lVar19 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar11;
          sVar28 = sVar28 + 1;
          param_1[lVar19] = cVar4;
          param_1[0x108] = cVar4;
          lVar19 = lVar11;
        } while (sVar28 != sVar13);
      }
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x7d;
      param_1[0x108] = 0x7d;
      return;
    }
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x74;
      lVar11 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x68;
LAB_0067b164:
      lVar19 = lVar11 + 1;
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x69;
      param_1[0x108] = 0x69;
      if (lVar19 != 0xff) goto LAB_0067b180;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar11 = 1;
      lVar19 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x74;
      param_1[0x108] = 0x74;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x68;
        lVar19 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x69;
      }
      else {
        lVar11 = lVar11 + 2;
        *(long *)(param_1 + 0x100) = lVar11;
        param_1[lVar19] = 0x68;
        param_1[0x108] = 0x68;
        if (lVar11 != 0xff) goto LAB_0067b164;
                    /* catch() { ... } // from try @ 0067d640 with catch @ 0067d6d8 */
                    /* catch() { ... } // from try @ 0067d5fc with catch @ 0067d6dc */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar19 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
LAB_0067b180:
      lVar11 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar11;
    param_1[lVar19] = 0x73;
    param_1[0x108] = 0x73;
    break;
  case 7:
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    break;
  case 8:
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                    /* try { // try from 0067d2a0 to 0077d2ef has its CatchHandler @ 0067d2a0
                       catch() { ... } // from try @ 0067d2a0 with catch @ 0067d2a0
                       catch() { ... } // from try @ 0067d3e0 with catch @ 0067d2a0 */
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x7e;
    param_1[0x108] = 0x7e;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b820 with catch @ 0067b864
                        */
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    break;
  case 9:
                    /* try { // try from 0067b874 to 0077b87f has its CatchHandler @ 0067b880 */
    pcVar12 = "vtable for ";
    lVar11 = *(long *)(param_1 + 0x100);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b874 with catch @ 0067b880
                        */
                    /* try { // try from 0067b884 to 0077b887 has its CatchHandler @ 0067b890 */
    do {
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b8d8 with catch @ 0067b8b8
                       catch(type#1 @ 00000000) { ... } // from try @ 0067b938 with catch @ 0067b8b8
                        */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
                    /* try { // try from 0067b8d0 to 0077b8d7 has its CatchHandler @ 0067b914 */
        lVar11 = 0;
                    /* try { // try from 0067b8d8 to 0077b923 has its CatchHandler @ 0067b8b8 */
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
                    /* try { // try from 0067b888 to 0077b893 has its CatchHandler @ 0067b808 */
        lVar19 = lVar11 + 1;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b884 with catch @ 0067b890
                        */
      *(long *)(param_1 + 0x100) = lVar19;
      pcVar12 = pcVar12 + 1;
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
    } while (pcVar12 != "");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 10:
    pcVar12 = "VTT for ";
    lVar11 = *(long *)(param_1 + 0x100);
    do {
                    /* try { // try from 0067b9d0 to 0077b9d3 has its CatchHandler @ 0067b9e4 */
                    /* catch() { ... } // from try @ 0067b9c0 with catch @ 0067b9d4 */
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
                    /* catch() { ... } // from try @ 0067b9d0 with catch @ 0067b9e4 */
                    /* try { // try from 0067b9e8 to 0077b9eb has its CatchHandler @ 0067b9f4 */
        param_1[0xff] = 0;
                    /* try { // try from 0067b9ec to 0077b9f7 has its CatchHandler @ 0067b968 */
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                    /* catch() { ... } // from try @ 0067b9e8 with catch @ 0067b9f4 */
        lVar19 = 1;
        lVar11 = 0;
                    /* catch() { ... } // from try @ 0067ba18 with catch @ 0067b9fc */
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
                    /* catch() { ... } // from try @ 0067b980 with catch @ 0067b9b8 */
      *(long *)(param_1 + 0x100) = lVar19;
      pcVar12 = pcVar12 + 1;
                    /* try { // try from 0067b9c0 to 0077b9c7 has its CatchHandler @ 0067b9d4 */
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
    } while (pcVar12 != "");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0xb:
                    /* try { // try from 0067ba10 to 0077ba17 has its CatchHandler @ 0067ba34 */
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
                    /* try { // try from 0067ba18 to 0077ba47 has its CatchHandler @ 0067b9fc */
    do {
      cVar4 = "construction vtable for "[lVar11];
      if (lVar19 == 0xff) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067bad0 with catch @ 0067ba50
                       catch(type#1 @ 00000000) { ... } // from try @ 0067bb48 with catch @ 0067ba50
                        */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = cVar4;
                    /* catch() { ... } // from try @ 0067ba10 with catch @ 0067ba34 */
      param_1[0x108] = cVar4;
      lVar19 = lVar18;
    } while (lVar11 != 0x18);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar11 = 2;
      *param_1 = 0x2d;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x69;
LAB_0067c5b0:
      lVar19 = lVar11 + 1;
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x6e;
      param_1[0x108] = 0x6e;
      if (lVar19 != 0xff) goto LAB_0067c5cc;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar11 = 1;
      lVar19 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x2d;
      param_1[0x108] = 0x2d;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar19 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x6e;
      }
      else {
        lVar11 = lVar11 + 2;
        *(long *)(param_1 + 0x100) = lVar11;
        param_1[lVar19] = 0x69;
        param_1[0x108] = 0x69;
        if (lVar11 != 0xff) goto LAB_0067c5b0;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x6e;
        lVar19 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
LAB_0067c5cc:
      lVar11 = lVar19 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar11;
    param_1[lVar19] = 0x2d;
    param_1[0x108] = 0x2d;
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    break;
  case 0xc:
    pcVar12 = "typeinfo for ";
    lVar11 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      pcVar12 = pcVar12 + 1;
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
    } while (pcVar12 != "");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0xd:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
    do {
      uVar5 = (&DAT_006a0740)[lVar11];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = uVar5;
      param_1[0x108] = uVar5;
      lVar19 = lVar18;
    } while (lVar11 != 0x12);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0xe:
    pcVar12 = "typeinfo fn for ";
    lVar11 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      pcVar12 = pcVar12 + 1;
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
    } while (pcVar12 != "");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0xf:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "non-virtual thunk to "[lVar11];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar18;
    } while (lVar11 != 0x15);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x10:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "virtual thunk to "[lVar11];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar18;
    } while (lVar11 != 0x11);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x11:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
                    /* try { // try from 0067ad8c to 0077ae0f has its CatchHandler @ 0067ad8c
                       catch() { ... } // from try @ 0067ad8c with catch @ 0067ad8c
                       catch() { ... } // from try @ 0067ae1c with catch @ 0067ad8c */
    do {
      uVar5 = (&DAT_006a07a0)[lVar11];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = uVar5;
      param_1[0x108] = uVar5;
      lVar19 = lVar18;
    } while (lVar11 != 0x1a);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x12:
    pcVar12 = "java Class for ";
    lVar11 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                    /* catch() { ... } // from try @ 0067ae10 with catch @ 0067ae44 */
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      pcVar12 = pcVar12 + 1;
                    /* try { // try from 0067ae10 to 0077ae1b has its CatchHandler @ 0067ae44 */
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
                    /* try { // try from 0067ae1c to 0077ae47 has its CatchHandler @ 0067ad8c */
    } while (pcVar12 != "");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x13:
    FUN_00672840(param_1,"guard variable for ");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x14:
    FUN_00672840(param_1,"TLS init function for ");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x15:
    FUN_00672840(param_1,"TLS wrapper function for ");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x16:
    FUN_00672840(param_1,"reference temporary #");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    FUN_00672840(param_1," for ");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x17:
    FUN_00672840(param_1,"hidden alias for ");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x18:
    iVar7 = param_3[4];
    lVar11 = *(long *)(param_3 + 2);
    if ((long)iVar7 != 0) {
      lVar19 = 0;
      lVar18 = *(long *)(param_1 + 0x100);
      do {
        uVar5 = *(undefined1 *)(lVar11 + lVar19);
        if (lVar18 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar8 = 1;
          lVar18 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar8 = lVar18 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar8;
        lVar19 = lVar19 + 1;
        param_1[lVar18] = uVar5;
        param_1[0x108] = uVar5;
        lVar18 = lVar8;
      } while (iVar7 != lVar19);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    local_80 = *(long **)(param_1 + 0x128);
    plVar22 = local_80;
    if (local_80 == (long *)0x0) {
      local_80 = (long *)0x0;
      bVar6 = false;
    }
    else {
      do {
        if ((int)plVar22[2] == 0) {
          if (2 < *(int *)plVar22[1] - 0x19U) break;
          if (iVar7 == *(int *)plVar22[1]) {
            FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
            return;
          }
        }
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
      bVar6 = false;
    }
    goto LAB_0067afe4;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
    local_80 = *(long **)(param_1 + 0x128);
    bVar6 = false;
LAB_0067afe4:
    local_70[1] = *(long *)(param_1 + 0x120);
    *(long ***)(param_1 + 0x128) = &local_80;
LAB_0067b000:
    lVar11 = *(long *)(param_3 + 2);
    local_78 = param_3;
LAB_0067b004:
    piVar10 = local_78;
    local_70[0]._0_4_ = 0;
    FUN_0067a6e8(param_1,param_2,lVar11);
    if ((int)local_70[0] == 0) {
      FUN_0067e0f4(param_1,param_2,piVar10);
    }
    *(long **)(param_1 + 0x128) = local_80;
    if (bVar6) {
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
    }
    break;
  case 0x23:
  case 0x24:
    piVar10 = *(int **)(param_3 + 2);
    bVar6 = false;
    iVar7 = *piVar10;
    if (iVar7 == 5) {
      uVar31 = *(uint *)(param_1 + 0x148);
      puVar21 = *(undefined8 **)(param_1 + 0x140);
      if ((int)uVar31 < 1) {
LAB_0067caac:
        if (*(int *)(param_1 + 0x14c) <= (int)uVar31) {
LAB_0067dfd8:
          *(undefined4 *)(param_1 + 0x130) = 1;
          return;
        }
        uVar33 = -(ulong)(uVar31 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar31 << 4;
        plVar22 = *(long **)(param_1 + 0x120);
        *(uint *)(param_1 + 0x148) = uVar31 + 1;
        *(int **)((long)puVar21 + uVar33) = piVar10;
        puVar21 = (undefined8 *)((long)puVar21 + uVar33 + 8);
        if (plVar22 != (long *)0x0) {
          uVar31 = *(uint *)(param_1 + 0x158);
          iVar7 = *(int *)(param_1 + 0x15c);
          if ((int)uVar31 < iVar7) {
            uVar33 = -(ulong)(uVar31 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar31 << 4;
            puVar14 = puVar21;
            iVar27 = uVar31 + 1;
            do {
              iVar15 = iVar27;
              puVar21 = (undefined8 *)(*(long *)(param_1 + 0x150) + uVar33);
              puVar21[1] = plVar22[1];
              *puVar14 = puVar21;
              plVar22 = (long *)*plVar22;
              if (plVar22 == (long *)0x0) {
                *(int *)(param_1 + 0x158) = iVar15;
                goto LAB_0067cb30;
              }
              uVar33 = uVar33 + 0x10;
              puVar14 = puVar21;
              iVar27 = iVar15 + 1;
            } while (iVar15 + 1 != iVar7 + 1);
            *(int *)(param_1 + 0x158) = iVar15;
          }
          goto LAB_0067dfd8;
        }
LAB_0067cb30:
        *puVar21 = 0;
        bVar6 = false;
        piVar10 = (int *)FUN_0067263c(param_1,piVar10 + 2);
        if (piVar10 == (int *)0x0) goto LAB_0067a764;
LAB_0067ccf0:
        iVar7 = *piVar10;
        if (iVar7 != 0x2f) goto LAB_0067b040;
        iVar7 = *(int *)(param_1 + 0x134);
        while (0 < iVar7) {
          piVar10 = *(int **)(piVar10 + 4);
          iVar7 = iVar7 + -1;
          if ((piVar10 == (int *)0x0) || (*piVar10 != 0x2f)) goto LAB_0067a75c;
        }
        if ((iVar7 == 0) && (piVar10 = *(int **)(piVar10 + 2), piVar10 != (int *)0x0)) {
          iVar7 = *piVar10;
          goto LAB_0067b040;
        }
LAB_0067a75c:
        if (!bVar6) goto LAB_0067a764;
      }
      else {
        puVar14 = puVar21;
        if (piVar10 != (int *)*puVar21) {
          do {
            puVar14 = puVar14 + 2;
            if (puVar14 == puVar21 + ((ulong)(uVar31 - 1) + 1) * 2) goto LAB_0067caac;
          } while (piVar10 != (int *)*puVar14);
        }
        unaff_x22 = *(undefined8 *)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = puVar14[1];
        bVar6 = true;
        piVar10 = (int *)FUN_0067263c(param_1,piVar10 + 2);
        if (piVar10 != (int *)0x0) goto LAB_0067ccf0;
      }
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
LAB_0067a764:
      *(undefined4 *)(param_1 + 0x130) = 1;
      return;
    }
LAB_0067b040:
    if ((iVar7 == 0x23) || (*param_3 == iVar7)) {
      local_80 = *(long **)(param_1 + 0x128);
      param_3 = piVar10;
      goto LAB_0067afe4;
    }
    if (iVar7 != 0x24) {
      local_80 = *(long **)(param_1 + 0x128);
      goto LAB_0067afe4;
    }
                    /* catch() { ... } // from try @ 0067d318 with catch @ 0067d46c */
    lVar11 = *(long *)(piVar10 + 2);
    local_80 = *(long **)(param_1 + 0x128);
    local_70[1] = *(long *)(param_1 + 0x120);
    *(long ***)(param_1 + 0x128) = &local_80;
    local_78 = param_3;
    if (lVar11 == 0) goto LAB_0067b000;
    goto LAB_0067b004;
  case 0x27:
    if ((param_2 >> 2 & 1) == 0) {
      lVar11 = (long)(int)(*(long **)(param_3 + 2))[1];
      lVar19 = **(long **)(param_3 + 2);
      if (lVar11 != 0) {
        lVar18 = 0;
        lVar8 = *(long *)(param_1 + 0x100);
        do {
          uVar5 = *(undefined1 *)(lVar19 + lVar18);
          if (lVar8 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar17 = 1;
            lVar8 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar17 = lVar8 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar17;
          lVar18 = lVar18 + 1;
          param_1[lVar8] = uVar5;
          param_1[0x108] = uVar5;
          lVar8 = lVar17;
                    /* catch() { ... } // from try @ 0067a898 with catch @ 0067a97c */
        } while (lVar11 != lVar18);
      }
    }
    else {
      lVar11 = (long)*(int *)(*(long *)(param_3 + 2) + 0x18);
      lVar19 = *(long *)(*(long *)(param_3 + 2) + 0x10);
      if (lVar11 != 0) {
        lVar18 = 0;
        lVar8 = *(long *)(param_1 + 0x100);
        do {
          uVar5 = *(undefined1 *)(lVar19 + lVar18);
          if (lVar8 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar17 = 1;
            lVar8 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          else {
            lVar17 = lVar8 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar17;
          lVar18 = lVar18 + 1;
          param_1[lVar8] = uVar5;
          param_1[0x108] = uVar5;
          lVar8 = lVar17;
        } while (lVar11 != lVar18);
      }
    }
    break;
  case 0x28:
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x29:
    if ((param_2 >> 5 & 1) == 0) {
      if ((*(long *)(param_3 + 2) != 0) && ((param_2 >> 6 & 1) == 0)) {
                    /* try { // try from 0067d30c to 0077d317 has its CatchHandler @ 0067d4c0 */
        local_80 = *(long **)(param_1 + 0x128);
        *(long ***)(param_1 + 0x128) = &local_80;
                    /* try { // try from 0067d318 to 0077d323 has its CatchHandler @ 0067d46c */
        local_70[1] = *(long *)(param_1 + 0x120);
        local_70[0]._0_4_ = 0;
        local_78 = param_3;
        FUN_0067a6e8(param_1,param_2 & 0xffffff9f,*(undefined8 *)(param_3 + 2));
        *(long **)(param_1 + 0x128) = local_80;
        if ((int)local_70[0] != 0) {
          return;
        }
        FUN_0067253c(param_1,0x20);
      }
                    /* catch() { ... } // from try @ 0067a880 with catch @ 0067a9e0 */
      FUN_0067ef50(param_1,param_2 & 0xffffff9f,param_3 + 4,*(undefined8 *)(param_1 + 0x128));
    }
    else {
      FUN_0067ef50(param_1,param_2 & 0xffffff9f,param_3 + 4,*(undefined8 *)(param_1 + 0x128));
      if (*(long *)(param_3 + 2) != 0) {
        FUN_0067a6e8(param_1,param_2 & 0xffffff9f);
      }
    }
    break;
  case 0x2a:
    plVar22 = *(long **)(param_1 + 0x128);
    local_70[1] = *(long *)(param_1 + 0x120);
    *(long ***)(param_1 + 0x128) = &local_80;
    local_70[0]._0_4_ = 0;
    local_80 = plVar22;
    if ((plVar22 == (long *)0x0) || (2 < *(int *)plVar22[1] - 0x19U)) {
      local_78 = param_3;
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
      *(long **)(param_1 + 0x128) = plVar22;
      if ((int)local_70[0] != 0) {
        return;
      }
    }
    else {
      plVar9 = plVar22;
      pplVar23 = &local_80;
      uVar33 = 1;
      do {
        pplVar24 = pplVar23;
        uVar32 = uVar33;
        if ((int)plVar9[2] == 0) {
          if (3 < (uint)uVar33) {
            *(undefined4 *)(param_1 + 0x130) = 1;
            return;
          }
          uVar32 = (ulong)((uint)uVar33 + 1);
          pplVar24 = &local_80 + uVar33 * 4;
          piVar10 = (int *)plVar9[1];
          *pplVar24 = (long *)*plVar9;
          (&local_78)[uVar33 * 4] = piVar10;
          lVar11 = plVar9[3];
          local_70[uVar33 * 4] = plVar9[2];
          local_70[uVar33 * 4 + 1] = lVar11;
          (&local_80)[uVar33 * 4] = (long *)pplVar23;
          *(long ***)(param_1 + 0x128) = pplVar24;
          *(undefined4 *)(plVar9 + 2) = 1;
        }
        plVar9 = (long *)*plVar9;
      } while ((plVar9 != (long *)0x0) &&
              (pplVar23 = pplVar24, uVar33 = uVar32, *(int *)plVar9[1] - 0x19U < 3
                    /* catch() { ... } // from try @ 0067a874 with catch @ 0067aa4c */));
      local_78 = param_3;
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
      *(long **)(param_1 + 0x128) = plVar22;
      if ((int)local_70[0] != 0) {
        return;
      }
      if ((int)uVar32 != 1) {
        do {
          uVar31 = (int)uVar32 - 1;
          uVar32 = (ulong)uVar31;
          FUN_0067e0f4(param_1,param_2,(&local_78)[uVar32 * 4]);
        } while (uVar31 != 1);
        plVar22 = *(long **)(param_1 + 0x128);
      }
    }
    FUN_0067ec88(param_1,param_2,param_3 + 2,plVar22);
    break;
  case 0x2b:
  case 0x2d:
    local_80 = *(long **)(param_1 + 0x128);
    *(long ***)(param_1 + 0x128) = &local_80;
    local_70[1] = *(long *)(param_1 + 0x120);
    local_70[0]._0_4_ = 0;
    local_78 = param_3;
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    if ((int)local_70[0] == 0) {
      FUN_0067e0f4(param_1,param_2,param_3);
    }
    *(long **)(param_1 + 0x128) = local_80;
    break;
  case 0x2c:
    if (*(short *)((long)param_3 + 0x12) != 0) {
      lVar11 = *(long *)(param_1 + 0x100);
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar11 = 2;
        *param_1 = 0x5f;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x53;
LAB_0067c9e8:
        lVar19 = lVar11 + 1;
        *(long *)(param_1 + 0x100) = lVar19;
        param_1[lVar11] = 0x61;
        param_1[0x108] = 0x61;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x74;
          lVar11 = 1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          goto LAB_0067ca20;
        }
LAB_0067ca04:
        lVar11 = lVar19 + 1;
        *(long *)(param_1 + 0x100) = lVar11;
        param_1[lVar19] = 0x74;
        param_1[0x108] = 0x74;
        if (lVar11 != 0xff) goto LAB_0067ca20;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
        *(long *)(param_1 + 0x100) = lVar19;
        param_1[lVar11] = 0x5f;
        param_1[0x108] = 0x5f;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x53;
          lVar19 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 0x61;
          goto LAB_0067ca04;
        }
        lVar11 = lVar11 + 2;
        *(long *)(param_1 + 0x100) = lVar11;
        param_1[lVar19] = 0x53;
        param_1[0x108] = 0x53;
        if (lVar11 != 0xff) goto LAB_0067c9e8;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar11 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x74;
LAB_0067ca20:
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x20;
      param_1[0x108] = 0x20;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067bc1c with catch @ 0067bbe8
                       catch(type#1 @ 00000000) { ... } // from try @ 0067bd38 with catch @ 0067bbe8
                        */
    if (*(undefined **)(*(long *)(param_3 + 2) + 8) == &UNK_007b8440) {
      lVar11 = *(long *)(param_1 + 0x100);
    }
    else {
      FUN_0067a6e8(param_1,param_2);
      lVar19 = *(long *)(param_1 + 0x100);
                    /* try { // try from 0067bc14 to 0077bc1b has its CatchHandler @ 0067bc68 */
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar11 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar11 = lVar19 + 1;
      }
                    /* try { // try from 0067bc1c to 0077bccf has its CatchHandler @ 0067bbe8 */
      *(long *)(param_1 + 0x100) = lVar11;
      param_1[lVar19] = 0x20;
      param_1[0x108] = 0x20;
    }
    if ((short)param_3[4] == 0) {
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar11 = 2;
        *param_1 = 0x5f;
                    /* try { // try from 0067d79c to 0077d79f has its CatchHandler @ 0067d7dc */
                    /* try { // try from 0067d7a0 to 0077d87f has its CatchHandler @ 0067d754 */
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x46;
LAB_0067c704:
        lVar19 = lVar11 + 1;
        *(long *)(param_1 + 0x100) = lVar19;
        param_1[lVar11] = 0x72;
        param_1[0x108] = 0x72;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x61;
          lVar11 = 2;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 99;
        }
        else {
LAB_0067c720:
          lVar18 = lVar19 + 1;
          *(long *)(param_1 + 0x100) = lVar18;
          param_1[lVar19] = 0x61;
          param_1[0x108] = 0x61;
          if (lVar18 != 0xff) goto LAB_0067c73c;
                    /* catch() { ... } // from try @ 0067d8c0 with catch @ 0067d978 */
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 99;
          lVar11 = 1;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar19 = lVar11 + 1;
        *(long *)(param_1 + 0x100) = lVar19;
        param_1[lVar11] = 0x5f;
        param_1[0x108] = 0x5f;
        if (lVar19 == 0xff) {
                    /* catch() { ... } // from try @ 0067da28 with catch @ 0067da14 */
          param_1[0xff] = 0;
                    /* try { // try from 0067da24 to 0077da27 has its CatchHandler @ 0067da38 */
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                    /* try { // try from 0067da28 to 0077da4b has its CatchHandler @ 0067da14 */
          *param_1 = 0x46;
          lVar19 = 2;
                    /* catch() { ... } // from try @ 0067da24 with catch @ 0067da38 */
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          param_1[1] = 0x72;
          goto LAB_0067c720;
        }
        lVar11 = lVar11 + 2;
        *(long *)(param_1 + 0x100) = lVar11;
        param_1[lVar19] = 0x46;
        param_1[0x108] = 0x46;
        if (lVar11 != 0xff) goto LAB_0067c704;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x72;
        lVar18 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x61;
LAB_0067c73c:
        lVar11 = lVar18 + 1;
        *(long *)(param_1 + 0x100) = lVar11;
        param_1[lVar18] = 99;
        param_1[0x108] = 99;
        if (lVar11 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar11 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          goto LAB_0067c75c;
        }
      }
      lVar19 = lVar11 + 1;
LAB_0067c75c:
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x74;
      param_1[0x108] = 0x74;
      return;
    }
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar11 = 2;
      *param_1 = 0x5f;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x41;
LAB_0067bc78:
      lVar19 = lVar11 + 1;
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 99;
      param_1[0x108] = 99;
      if (lVar19 == 0xff) {
                    /* catch() { ... } // from try @ 0067d8c4 with catch @ 0067d880 */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 99;
        lVar11 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x75;
      }
      else {
LAB_0067bc94:
        lVar18 = lVar19 + 1;
        *(long *)(param_1 + 0x100) = lVar18;
        param_1[lVar19] = 99;
        param_1[0x108] = 99;
        if (lVar18 != 0xff) goto LAB_0067bcb0;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x75;
        lVar11 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
LAB_0067bccc:
      lVar19 = lVar11 + 1;
    }
    else {
      lVar19 = lVar11 + 1;
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x5f;
      param_1[0x108] = 0x5f;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x41;
        lVar19 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 99;
        goto LAB_0067bc94;
      }
      lVar11 = lVar11 + 2;
      *(long *)(param_1 + 0x100) = lVar11;
      param_1[lVar19] = 0x41;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067bc14 with catch @ 0067bc68
                        */
      param_1[0x108] = 0x41;
      if (lVar11 != 0xff) goto LAB_0067bc78;
                    /* try { // try from 0067d8c0 to 0077d8c3 has its CatchHandler @ 0067d978 */
                    /* try { // try from 0067d8c4 to 0077da13 has its CatchHandler @ 0067d880 */
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 99;
      lVar18 = 2;
      param_1[1] = 99;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0067bcb0:
      lVar11 = lVar18 + 1;
      *(long *)(param_1 + 0x100) = lVar11;
      param_1[lVar18] = 0x75;
      param_1[0x108] = 0x75;
      if (lVar11 != 0xff) goto LAB_0067bccc;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
                    /* try { // try from 0067bcd0 to 0077bcd3 has its CatchHandler @ 0067bd30 */
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x6d;
    param_1[0x108] = 0x6d;
    break;
  case 0x2e:
  case 0x2f:
    if (*(long *)(param_3 + 2) != 0) {
      FUN_0067a6e8(param_1,param_2);
    }
                    /* try { // try from 0067bb0c to 0077bb47 has its CatchHandler @ 0067bb50 */
    if (*(long *)(param_3 + 4) != 0) {
      uVar32 = *(ulong *)(param_1 + 0x100);
      uVar33 = uVar32;
      if (0xfd < uVar32) {
        param_1[uVar32] = 0;
        uVar33 = 0;
        (**(code **)(param_1 + 0x110))(param_1,uVar32,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      param_1[uVar33] = 0x2c;
      *(ulong *)(param_1 + 0x100) = uVar33 + 2;
      param_1[uVar33 + 1] = 0x20;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067baa8 with catch @ 0067bb38
                        */
      param_1[0x108] = 0x20;
      lVar11 = *(long *)(param_1 + 0x138);
                    /* try { // try from 0067bb48 to 0077bb53 has its CatchHandler @ 0067ba50 */
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067bb0c with catch @ 0067bb50
                        */
      if ((*(long *)(param_1 + 0x138) == lVar11) && (*(long *)(param_1 + 0x100) == uVar33 + 2)) {
        *(ulong *)(param_1 + 0x100) = uVar33;
      }
    }
    break;
  case 0x30:
    uVar35 = *(undefined8 *)(param_3 + 4);
    if (*(long *)(param_3 + 2) != 0) {
      FUN_0067a6e8(param_1,param_2);
    }
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x7b;
    param_1[0x108] = 0x7b;
    FUN_0067a6e8(param_1,param_2,uVar35);
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x31:
    lVar19 = *(long *)(param_3 + 2);
                    /* try { // try from 0067b924 to 0077b92f has its CatchHandler @ 0067b930 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b924 with catch @ 0067b930
                        */
    pcVar12 = "operator";
                    /* try { // try from 0067b934 to 0077b937 has its CatchHandler @ 0067b940 */
                    /* try { // try from 0067b938 to 0077b943 has its CatchHandler @ 0067b8b8 */
    iVar7 = *(int *)(lVar19 + 0x10);
    lVar11 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar12;
                    /* catch() { ... } // from try @ 0067b988 with catch @ 0067b968
                       catch() { ... } // from try @ 0067b9ec with catch @ 0067b968 */
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                    /* try { // try from 0067b980 to 0077b987 has its CatchHandler @ 0067b9b8 */
        lVar18 = 1;
                    /* try { // try from 0067b988 to 0077b9bf has its CatchHandler @ 0067b968 */
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b934 with catch @ 0067b940
                        */
        lVar18 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      pcVar12 = pcVar12 + 1;
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar18;
    } while (pcVar12 != "");
    pcVar12 = *(char **)(lVar19 + 8);
    if ((byte)(*pcVar12 + 0x9fU) < 0x1a) {
      if (lVar18 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18 + 1;
      param_1[lVar18] = 0x20;
      param_1[0x108] = 0x20;
      pcVar12 = *(char **)(lVar19 + 8);
    }
    lVar11 = (long)iVar7;
    if (pcVar12[lVar11 + -1] == ' ') {
      lVar11 = (long)(iVar7 + -1);
    }
    if (lVar11 != 0) {
      pcVar1 = pcVar12 + lVar11;
      lVar11 = *(long *)(param_1 + 0x100);
      do {
        cVar4 = *pcVar12;
        if (lVar11 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar11 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar19 = lVar11 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar19;
        pcVar12 = pcVar12 + 1;
        param_1[lVar11] = cVar4;
        param_1[0x108] = cVar4;
        lVar11 = lVar19;
      } while (pcVar12 != pcVar1);
    }
    break;
  case 0x32:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "operator "[lVar11];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar18;
    } while (lVar11 != 9);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    break;
  default:
                    /* try { // try from 0067a724 to 0077a82f has its CatchHandler @ 0067a684 */
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x34:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "operator "[lVar11];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar18;
    } while (lVar11 != 9);
    if (*(int **)(param_1 + 0x160) != (int *)0x0) {
      local_80 = *(long **)(param_1 + 0x120);
      *(long ***)(param_1 + 0x120) = &local_80;
      local_78 = *(int **)(param_1 + 0x160);
    }
    if (**(int **)(param_3 + 2) == 4) {
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(*(int **)(param_3 + 2) + 2));
      if (*(long *)(param_1 + 0x160) != 0) {
        *(long **)(param_1 + 0x120) = local_80;
      }
      if (param_1[0x108] == '<') {
        lVar11 = *(long *)(param_1 + 0x100);
        if (lVar11 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar11 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar11 + 1;
        param_1[lVar11] = 0x20;
        param_1[0x108] = 0x20;
      }
      lVar11 = *(long *)(param_1 + 0x100);
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar11 + 1;
      param_1[lVar11] = 0x3c;
      param_1[0x108] = 0x3c;
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 2) + 0x10));
      if (param_1[0x108] == '>') {
        lVar11 = *(long *)(param_1 + 0x100);
        if (lVar11 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar11 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar11 + 1;
        param_1[lVar11] = 0x20;
        param_1[0x108] = 0x20;
      }
      lVar11 = *(long *)(param_1 + 0x100);
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar11 + 1;
      param_1[lVar11] = 0x3e;
      param_1[0x108] = 0x3e;
    }
    else {
      FUN_0067a6e8(param_1,param_2);
      if (*(long *)(param_1 + 0x160) != 0) {
        *(long **)(param_1 + 0x120) = local_80;
      }
    }
    break;
  case 0x35:
    FUN_0067f200(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x36:
    piVar20 = *(int **)(param_3 + 2);
    piVar10 = *(int **)(param_3 + 4);
    if (*piVar20 == 0x31) {
      pcVar12 = (char *)**(undefined8 **)(piVar20 + 2);
      iVar7 = strcmp(pcVar12,"ad");
      if (iVar7 == 0) {
        iVar7 = *piVar10;
        if (iVar7 != 3) goto LAB_0067cb78;
        if ((**(int **)(piVar10 + 2) == 1) && (**(int **)(piVar10 + 4) == 0x29)) {
          piVar10 = *(int **)(piVar10 + 2);
        }
      }
      else {
        iVar7 = *piVar10;
LAB_0067cb78:
        if (iVar7 == 0x38) {
          FUN_0067f2d4(param_1,param_2,*(undefined8 *)(piVar10 + 2));
          FUN_0067f200(param_1,param_2,piVar20);
          return;
        }
      }
      FUN_0067f200(param_1,param_2,piVar20);
      iVar7 = strcmp(pcVar12,"gs");
      if (iVar7 == 0) {
        FUN_0067a6e8(param_1,param_2,piVar10);
        return;
      }
      iVar7 = strcmp(pcVar12,"st");
      if (iVar7 == 0) {
        FUN_0067253c(param_1,0x28);
        FUN_0067a6e8(param_1,param_2,piVar10);
        lVar11 = *(long *)(param_1 + 0x100);
        if (lVar11 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar11 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        *(long *)(param_1 + 0x100) = lVar11 + 1;
        param_1[lVar11] = 0x29;
        param_1[0x108] = 0x29;
        return;
      }
    }
    else if (*piVar20 == 0x33) {
      lVar11 = *(long *)(param_1 + 0x100);
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      *(long *)(param_1 + 0x100) = lVar11 + 1;
      param_1[lVar11] = 0x28;
      param_1[0x108] = 0x28;
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(piVar20 + 2));
      FUN_0067253c(param_1,0x29);
    }
    else {
      FUN_0067f200(param_1,param_2,piVar20);
    }
    FUN_0067f2d4(param_1,param_2,piVar10);
    break;
  case 0x37:
    piVar10 = *(int **)(param_3 + 4);
    if (*piVar10 != 0x38) goto LAB_0067a764;
    puVar21 = *(undefined8 **)(*(int **)(param_3 + 2) + 2);
    pcVar12 = (char *)*puVar21;
                    /* catch() { ... } // from try @ 0067d2f0 with catch @ 0067d514 */
    if ((pcVar12[1] == 'c') && (((byte)(*pcVar12 + 0x8eU) < 2 || ((byte)(*pcVar12 + 0x9dU) < 2)))) {
      FUN_0067f200(param_1,param_2);
      FUN_0067253c(param_1,0x3c);
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 4) + 8));
      FUN_00672840(param_1,&DAT_006a0980);
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 4) + 0x10));
      FUN_0067253c(param_1,0x29);
    }
    else {
      if ((**(int **)(param_3 + 2) == 0x31) &&
         ((*(int *)(puVar21 + 2) == 1 && (*(char *)puVar21[1] == '>')))) {
        FUN_0067253c(param_1,0x28);
        piVar10 = *(int **)(param_3 + 4);
        pcVar12 = (char *)**(undefined8 **)(*(long *)(param_3 + 2) + 8);
      }
      iVar7 = strcmp(pcVar12,"cl");
      piVar10 = *(int **)(piVar10 + 2);
      if ((iVar7 == 0) && (*piVar10 == 3)) {
        if (**(int **)(piVar10 + 4) != 0x29) {
          *(undefined4 *)(param_1 + 0x130) = 1;
        }
        FUN_0067f2d4(param_1,param_2,*(undefined8 *)(piVar10 + 2));
      }
      else {
        FUN_0067f2d4(param_1,param_2);
      }
      lVar11 = *(long *)(param_3 + 2);
      pcVar12 = (char *)**(undefined8 **)(lVar11 + 8);
      iVar7 = strcmp(pcVar12,"ix");
      if (iVar7 == 0) {
        FUN_0067253c(param_1,0x5b);
        FUN_0067a6e8(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 4) + 0x10));
        FUN_0067253c(param_1,0x5d);
      }
      else {
        iVar7 = strcmp(pcVar12,"cl");
        if (iVar7 != 0) {
          FUN_0067f200(param_1,param_2,lVar11);
        }
        FUN_0067f2d4(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 4) + 0x10));
      }
      if (((**(int **)(param_3 + 2) == 0x31) &&
          (lVar11 = *(long *)(*(int **)(param_3 + 2) + 2), *(int *)(lVar11 + 0x10) == 1)) &&
         (**(char **)(lVar11 + 8) == '>')) {
        FUN_0067253c(param_1,0x29);
      }
    }
    break;
  case 0x38:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x39:
    piVar10 = *(int **)(param_3 + 4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067bcd0 with catch @ 0067bd30
                        */
                    /* try { // try from 0067bd34 to 0077bd37 has its CatchHandler @ 0067bd40 */
                    /* try { // try from 0067bd38 to 0077bd43 has its CatchHandler @ 0067bbe8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067bd34 with catch @ 0067bd40
                        */
    if ((*piVar10 != 0x3a) || (piVar20 = *(int **)(piVar10 + 4), *piVar20 != 0x3b))
    goto LAB_0067a764;
    lVar18 = *(long *)(param_3 + 2);
    lVar11 = *(long *)(piVar10 + 2);
    uVar35 = *(undefined8 *)(piVar20 + 2);
    lVar19 = *(long *)(piVar20 + 4);
    iVar7 = strcmp((char *)**(undefined8 **)(lVar18 + 8),"qu");
    if (iVar7 == 0) {
      FUN_0067f2d4(param_1,param_2);
      FUN_0067f200(param_1,param_2,lVar18);
      FUN_0067f2d4(param_1,param_2,uVar35);
      FUN_00672840(param_1,&DAT_006a08c0);
      FUN_0067f2d4(param_1,param_2,lVar19);
    }
    else {
      FUN_00672840(param_1,&DAT_006a08c8);
      if (*(long *)(lVar11 + 8) != 0) {
        FUN_0067f2d4(param_1,param_2);
        FUN_0067253c(param_1,0x20);
      }
      FUN_0067a6e8(param_1,param_2,uVar35);
      if (lVar19 != 0) {
        FUN_0067f2d4(param_1,param_2,lVar19);
      }
    }
    break;
  case 0x3a:
  case 0x3b:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x3c:
  case 0x3d:
    uVar31 = 0;
    if ((**(int **)(param_3 + 2) == 0x27) &&
       (uVar31 = *(uint *)(*(long *)(*(int **)(param_3 + 2) + 2) + 0x1c), uVar31 != 0)) {
      if (uVar31 < 7) {
        if (**(int **)(param_3 + 4) == 0) {
          if (iVar7 == 0x3d) {
            FUN_0067253c(param_1,0x2d);
          }
          FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
          switch(uVar31) {
          case 2:
            FUN_0067253c(param_1,0x75);
            return;
          case 3:
                    /* try { // try from 0067d3e0 to 0077d57f has its CatchHandler @ 0067d2a0 */
            FUN_0067253c(param_1,0x6c);
            return;
          case 4:
                    /* try { // try from 0067d3cc to 0077d3df has its CatchHandler @ 0067d468 */
            FUN_00672840(param_1,&DAT_006a08d0);
            return;
          case 5:
            FUN_00672840(param_1,&DAT_006a08d8);
            return;
          case 6:
            FUN_00672840(param_1,&DAT_006a08e0);
            return;
          default:
            return;
          }
        }
      }
      else if ((((uVar31 == 7) && (piVar10 = *(int **)(param_3 + 4), *piVar10 == 0)) &&
               (piVar10[4] == 1)) && (iVar7 == 0x3c)) {
        if (**(char **)(piVar10 + 2) == '0') {
          FUN_00672840(param_1,"false");
          return;
        }
        if (**(char **)(piVar10 + 2) == '1') {
          FUN_00672840(param_1,&DAT_0069e6b0);
          return;
        }
      }
    }
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
                    /* try { // try from 0067d2f0 to 0077d2ff has its CatchHandler @ 0067d514 */
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
                    /* try { // try from 0067d300 to 0077d307 has its CatchHandler @ 0067d4c4 */
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x28;
    param_1[0x108] = 0x28;
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x29;
    param_1[0x108] = 0x29;
    if (*param_3 == 0x3d) {
      FUN_0067253c(param_1,0x2d);
    }
    if (uVar31 == 8) {
                    /* catch() { ... } // from try @ 0067d30c with catch @ 0067d4c0 */
      FUN_0067253c(param_1,0x5b);
                    /* catch() { ... } // from try @ 0067d300 with catch @ 0067d4c4 */
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
      FUN_0067253c(param_1,0x5d);
    }
    else {
      FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    }
    break;
  case 0x3e:
    pcVar12 = "java resource ";
    lVar11 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      pcVar12 = pcVar12 + 1;
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
    } while (pcVar12 != "");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x3f:
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    break;
  case 0x40:
    lVar11 = *(long *)(param_1 + 0x100);
    iVar7 = param_3[2];
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = (char)iVar7;
    param_1[0x108] = (char)iVar7;
    break;
  case 0x41:
    sprintf((char *)&local_80,"%ld",*(undefined8 *)(param_3 + 2));
    sVar28 = strlen((char *)&local_80);
    if (sVar28 != 0) {
      sVar13 = 0;
      lVar11 = *(long *)(param_1 + 0x100);
      do {
        cVar4 = *(char *)((long)&local_80 + sVar13);
        if (lVar11 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar11 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar19 = lVar11 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar19;
        sVar13 = sVar13 + 1;
        param_1[lVar11] = cVar4;
        param_1[0x108] = cVar4;
        lVar11 = lVar19;
      } while (sVar13 != sVar28);
    }
    break;
  case 0x42:
    pcVar12 = "decltype (";
    lVar11 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      pcVar12 = pcVar12 + 1;
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
    } while (pcVar12 != "");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x29;
    param_1[0x108] = 0x29;
    break;
  case 0x43:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "global constructors keyed to "[lVar11];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar18;
    } while (lVar11 != 0x1d);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x44:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "global destructors keyed to "[lVar11];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar18;
    } while (lVar11 != 0x1c);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x45:
    pcVar12 = "{lambda(";
    lVar11 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      pcVar12 = pcVar12 + 1;
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
    } while (pcVar12 != "");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      *param_1 = 0x29;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0067c450:
      lVar11 = lVar19 + 1;
    }
    else {
      lVar19 = lVar11 + 1;
      *(long *)(param_1 + 0x100) = lVar19;
      param_1[lVar11] = 0x29;
      param_1[0x108] = 0x29;
      if (lVar19 != 0xff) goto LAB_0067c450;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar11 = 1;
      lVar19 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    *(long *)(param_1 + 0x100) = lVar11;
    param_1[lVar19] = 0x23;
    param_1[0x108] = 0x23;
    sVar28 = 0;
    sprintf((char *)&local_80,"%ld",(long)(param_3[4] + 1));
    sVar13 = strlen((char *)&local_80);
    lVar11 = *(long *)(param_1 + 0x100);
    lVar19 = lVar11;
    if (sVar13 != 0) {
      do {
        cVar4 = *(char *)((long)&local_80 + sVar28);
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar11 = 1;
          lVar19 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar11 = lVar19 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar11;
        sVar28 = sVar28 + 1;
        param_1[lVar19] = cVar4;
        param_1[0x108] = cVar4;
        lVar19 = lVar11;
      } while (sVar28 != sVar13);
    }
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x47:
    pcVar12 = "{unnamed type#";
    lVar11 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
      pcVar12 = pcVar12 + 1;
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
    } while (pcVar12 != "");
    sVar28 = 0;
    sprintf((char *)&local_80,"%ld",*(long *)(param_3 + 2) + 1);
    sVar13 = strlen((char *)&local_80);
    lVar11 = *(long *)(param_1 + 0x100);
    lVar19 = lVar11;
    if (sVar13 != 0) {
      do {
        cVar4 = *(char *)((long)&local_80 + sVar28);
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar11 = 1;
          lVar19 = 0;
          *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        }
        else {
          lVar11 = lVar19 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar11;
        sVar28 = sVar28 + 1;
        param_1[lVar19] = cVar4;
        param_1[0x108] = cVar4;
        lVar19 = lVar11;
      } while (sVar28 != sVar13);
    }
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x48:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = "transaction clone for "[lVar11];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar18;
    } while (lVar11 != 0x16);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x49:
    lVar11 = 0;
    lVar19 = *(long *)(param_1 + 0x100);
    do {
                    /* try { // try from 0067b688 to 0077b68f has its CatchHandler @ 0067b6cc */
      uVar5 = (&DAT_006a0868)[lVar11];
                    /* try { // try from 0067b690 to 0077b6db has its CatchHandler @ 0067b670 */
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar18 = 1;
        lVar19 = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar18 = lVar19 + 1;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b690 with catch @ 0067b670
                       catch(type#1 @ 00000000) { ... } // from try @ 0067b6f0 with catch @ 0067b670
                        */
      *(long *)(param_1 + 0x100) = lVar18;
      lVar11 = lVar11 + 1;
      param_1[lVar19] = uVar5;
      param_1[0x108] = uVar5;
      lVar19 = lVar18;
    } while (lVar11 != 0x1a);
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    break;
  case 0x4a:
    iVar7 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b688 with catch @ 0067b6cc
                        */
    piVar10 = (int *)FUN_006726b8(param_1,*(undefined8 *)(param_3 + 2));
    if (piVar10 == (int *)0x0) {
      FUN_0067f2d4(param_1,param_2,*(undefined8 *)(param_3 + 2));
      FUN_00672840(param_1,&DAT_006a0908);
    }
    else {
      do {
                    /* try { // try from 0067b6dc to 0077b6e7 has its CatchHandler @ 0067b6e8 */
        if ((*piVar10 != 0x2f) || (*(long *)(piVar10 + 2) == 0)) {
          uVar35 = *(undefined8 *)(param_3 + 2);
          if (iVar7 == 0) {
            return;
          }
          goto LAB_0067b6f8;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b6dc with catch @ 0067b6e8
                        */
        piVar10 = *(int **)(piVar10 + 4);
                    /* try { // try from 0067b6ec to 0077b6ef has its CatchHandler @ 0067b6f8 */
        iVar7 = iVar7 + 1;
                    /* try { // try from 0067b6f0 to 0077b6fb has its CatchHandler @ 0067b670 */
      } while (piVar10 != (int *)0x0);
      uVar35 = *(undefined8 *)(param_3 + 2);
LAB_0067b6f8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b6ec with catch @ 0067b6f8
                        */
      iVar27 = 0;
      do {
        *(int *)(param_1 + 0x134) = iVar27;
        FUN_0067a6e8(param_1,param_2,uVar35);
        if (iVar27 < iVar7 + -1) {
                    /* catch() { ... } // from try @ 0067b740 with catch @ 0067b720
                       catch() { ... } // from try @ 0067b7a4 with catch @ 0067b720 */
          lVar11 = *(long *)(param_1 + 0x100);
          if (lVar11 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *param_1 = 0x2c;
            lVar19 = 1;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0067b748:
            lVar11 = lVar19 + 1;
          }
          else {
            lVar19 = lVar11 + 1;
            *(long *)(param_1 + 0x100) = lVar19;
            param_1[lVar11] = 0x2c;
                    /* try { // try from 0067b738 to 0077b73f has its CatchHandler @ 0067b770 */
            param_1[0x108] = 0x2c;
                    /* try { // try from 0067b740 to 0077b777 has its CatchHandler @ 0067b720 */
            if (lVar19 != 0xff) goto LAB_0067b748;
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar11 = 1;
            lVar19 = 0;
            *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
          }
          *(long *)(param_1 + 0x100) = lVar11;
          param_1[lVar19] = 0x20;
          param_1[0x108] = 0x20;
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 != iVar7);
    }
    break;
  case 0x4b:
                    /* catch() { ... } // from try @ 0067b738 with catch @ 0067b770 */
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
                    /* try { // try from 0067b778 to 0077b77f has its CatchHandler @ 0067b78c */
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x5b;
      lVar11 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x61;
LAB_0067b7c0:
      lVar19 = lVar11 + 1;
      *(long *)(param_1 + 0x100) = lVar19;
                    /* try { // try from 0067b7c8 to 0077b7cf has its CatchHandler @ 0067b7ec */
      param_1[lVar11] = 0x62;
                    /* try { // try from 0067b7d0 to 0077b7ff has its CatchHandler @ 0067b7b4 */
      param_1[0x108] = 0x62;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar11 = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        goto LAB_0067b7f8;
      }
LAB_0067b7dc:
      lVar11 = lVar19 + 1;
      *(long *)(param_1 + 0x100) = lVar11;
      param_1[lVar19] = 0x69;
                    /* catch() { ... } // from try @ 0067b7c8 with catch @ 0067b7ec */
      param_1[0x108] = 0x69;
      if (lVar11 != 0xff) goto LAB_0067b7f8;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
                    /* try { // try from 0067b788 to 0077b78b has its CatchHandler @ 0067b79c */
      *(long *)(param_1 + 0x100) = lVar19;
                    /* catch() { ... } // from try @ 0067b778 with catch @ 0067b78c */
      param_1[lVar11] = 0x5b;
      param_1[0x108] = 0x5b;
                    /* catch() { ... } // from try @ 0067b788 with catch @ 0067b79c */
                    /* try { // try from 0067b7a0 to 0077b7a3 has its CatchHandler @ 0067b7ac */
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar19 = 2;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        param_1[1] = 0x62;
        goto LAB_0067b7dc;
      }
                    /* try { // try from 0067b7a4 to 0077b7af has its CatchHandler @ 0067b720 */
      lVar11 = lVar11 + 2;
      *(long *)(param_1 + 0x100) = lVar11;
                    /* catch() { ... } // from try @ 0067b7a0 with catch @ 0067b7ac */
      param_1[lVar19] = 0x61;
                    /* catch() { ... } // from try @ 0067b7d0 with catch @ 0067b7b4 */
      param_1[0x108] = 0x61;
      if (lVar11 != 0xff) goto LAB_0067b7c0;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x62;
      lVar11 = 2;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      param_1[1] = 0x69;
LAB_0067b7f8:
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x3a;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067b828 with catch @ 0067b808
                       catch(type#1 @ 00000000) { ... } // from try @ 0067b888 with catch @ 0067b808
                        */
    param_1[0x108] = 0x3a;
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    lVar11 = *(long *)(param_1 + 0x100);
                    /* try { // try from 0067b820 to 0077b827 has its CatchHandler @ 0067b864 */
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
                    /* try { // try from 0067b828 to 0077b873 has its CatchHandler @ 0067b808 */
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x5d;
    param_1[0x108] = 0x5d;
    break;
  case 0x4c:
                    /* try { // try from 0067ba84 to 0077ba87 has its CatchHandler @ 0067bae8 */
    pcVar12 = " [clone ";
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 2));
    lVar11 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar12;
      if (lVar11 == 0xff) {
                    /* try { // try from 0067bad0 to 0077bb0b has its CatchHandler @ 0067ba50 */
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar11 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0067ba84 with catch @ 0067bae8
                        */
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar11 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar19;
                    /* try { // try from 0067baa8 to 0077bacf has its CatchHandler @ 0067bb38 */
      pcVar12 = pcVar12 + 1;
      param_1[lVar11] = cVar4;
      param_1[0x108] = cVar4;
      lVar11 = lVar19;
    } while (pcVar12 != "");
    FUN_0067a6e8(param_1,param_2,*(undefined8 *)(param_3 + 4));
    lVar11 = *(long *)(param_1 + 0x100);
    if (lVar11 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar11 = 0;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar11 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar19;
    param_1[lVar11] = 0x5d;
    param_1[0x108] = 0x5d;
  }
  return;
}


