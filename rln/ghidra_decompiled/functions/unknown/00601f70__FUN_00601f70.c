/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00601f70
 * Function: FUN_00601f70
 * Signature: undefined FUN_00601f70(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00601f70(uint *param_1,undefined8 *param_2,int param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined1 auStack_b8 [80];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar15 = *(long **)(param_1 + 0x12);
                    /* try { // try from 00601fb0 to 00701fdf has its CatchHandler @ 0060403c */
  uVar5 = *param_1;
  lVar11 = plVar15[1];
  uVar2 = plVar15[2];
  uVar13 = lVar11 + 1;
  if (uVar2 < uVar13) {
    if (0x7ffffffffffffffd < uVar2) {
      FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 00602000 to 00702027 has its CatchHandler @ 006040f4 */
      FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                   "lexical element too long");
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
    }
                    /* try { // try from 00602030 to 00702077 has its CatchHandler @ 006040dc */
    lVar14 = uVar2 * 2;
    if (lVar14 == -2) {
      lVar6 = FUN_005eede0();
    }
    else {
      lVar6 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar2,lVar14);
    }
    lVar11 = plVar15[1];
    *plVar15 = lVar6;
    plVar15[2] = lVar14;
    uVar13 = lVar11 + 1;
  }
  else {
    lVar6 = *plVar15;
  }
  plVar15[1] = uVar13;
  *(char *)(lVar6 + lVar11) = (char)uVar5;
  plVar15 = *(long **)(param_1 + 0x10);
  lVar11 = *plVar15;
  *plVar15 = lVar11 + -1;
  if (lVar11 == 0) {
    uVar5 = FUN_005f8650();
  }
  else {
    pbVar12 = (byte *)plVar15[1];
    plVar15[1] = (long)(pbVar12 + 1);
    uVar5 = (uint)*pbVar12;
  }
                    /* try { // try from 00602098 to 007020a3 has its CatchHandler @ 0060408c */
  *param_1 = uVar5;
  if ((uVar5 == 0xd) || (uVar5 == 10)) {
    FUN_00601c4c(param_1);
  }
  puVar1 = (undefined *)0x69b372;
                    /* try { // try from 006020c4 to 007020eb has its CatchHandler @ 00604038 */
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = &DAT_0069b35b;
  }
  do {
    while (uVar5 = *param_1, (int)uVar5 < 0xd) {
      if (uVar5 == 0xffffffff) {
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 00602270 to 00702277 has its CatchHandler @ 00603b08 */
        uVar7 = FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],puVar1
                            );
        uVar9 = *(undefined8 *)(param_1 + 0xe);
        pcVar8 = "<eof>";
                    /* try { // try from 00602290 to 00702297 has its CatchHandler @ 0060365c */
LAB_006020e0:
        FUN_005ef3d4(uVar9,"%s near \'%s\'",uVar7,pcVar8);
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
      if (uVar5 == 10) {
LAB_00602138:
        plVar15 = *(long **)(param_1 + 0x12);
        lVar11 = plVar15[1];
        uVar2 = plVar15[2];
        uVar13 = lVar11 + 1;
                    /* try { // try from 00602144 to 0070214f has its CatchHandler @ 00603e58 */
        if (uVar2 < uVar13) {
                    /* try { // try from 00602150 to 00702157 has its CatchHandler @ 00603b70 */
                    /* try { // try from 00602158 to 007021bf has its CatchHandler @ 00603e58 */
          if (0x7ffffffffffffffd < uVar2) {
            FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
            FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                         "lexical element too long");
                    /* WARNING: Subroutine does not return */
            FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
          }
          lVar14 = uVar2 * 2;
          if (lVar14 == -2) {
            lVar6 = FUN_005eede0();
          }
          else {
                    /* try { // try from 00602314 to 0070231b has its CatchHandler @ 00603bf0 */
                    /* try { // try from 0060231c to 0070232f has its CatchHandler @ 00603ab0 */
            lVar6 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar2,lVar14);
          }
          lVar11 = plVar15[1];
          *plVar15 = lVar6;
          plVar15[2] = lVar14;
          uVar13 = lVar11 + 1;
        }
        else {
          lVar6 = *plVar15;
        }
                    /* try { // try from 00602330 to 00702343 has its CatchHandler @ 00603a54 */
        plVar15[1] = uVar13;
        *(undefined1 *)(lVar6 + lVar11) = 10;
        FUN_00601c4c(param_1);
        if (param_2 == (undefined8 *)0x0) {
          *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
        }
      }
      else {
LAB_00602294:
        if (param_2 != (undefined8 *)0x0) {
          plVar15 = *(long **)(param_1 + 0x12);
          lVar11 = plVar15[1];
          uVar2 = plVar15[2];
          uVar13 = lVar11 + 1;
          if (uVar2 < uVar13) {
            if (0x7ffffffffffffffd < uVar2) {
                    /* try { // try from 006022c0 to 007022cb has its CatchHandler @ 00603ab8 */
              FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
              FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                           "lexical element too long");
                    /* try { // try from 006022ec to 00702313 has its CatchHandler @ 00603654 */
                    /* WARNING: Subroutine does not return */
              FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
            }
            lVar14 = uVar2 * 2;
            if (lVar14 == -2) {
              lVar6 = FUN_005eede0();
            }
            else {
              lVar6 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar2,lVar14);
            }
            lVar11 = plVar15[1];
                    /* try { // try from 00602370 to 00702383 has its CatchHandler @ 006039ec */
            *plVar15 = lVar6;
            plVar15[2] = lVar14;
            uVar13 = lVar11 + 1;
          }
          else {
            lVar6 = *plVar15;
                    /* try { // try from 00602354 to 0070235b has its CatchHandler @ 00603bf8 */
          }
          plVar15[1] = uVar13;
          *(char *)(lVar6 + lVar11) = (char)uVar5;
        }
        plVar15 = *(long **)(param_1 + 0x10);
        lVar11 = *plVar15;
        *plVar15 = lVar11 + -1;
        if (lVar11 == 0) {
          uVar5 = FUN_005f8650();
          *param_1 = uVar5;
        }
        else {
          pbVar12 = (byte *)plVar15[1];
                    /* try { // try from 0060239c to 007023ab has its CatchHandler @ 00603e00 */
          plVar15[1] = (long)(pbVar12 + 1);
          *param_1 = (uint)*pbVar12;
        }
      }
    }
    if (uVar5 == 0xd) goto LAB_00602138;
    if (uVar5 == 0x5b) {
      iVar4 = FUN_00601d18(param_1);
      if (iVar4 == param_3) {
                    /* try { // try from 006021c4 to 007021cb has its CatchHandler @ 00603b68 */
        plVar15 = *(long **)(param_1 + 0x12);
        uVar5 = *param_1;
                    /* try { // try from 006021cc to 007021df has its CatchHandler @ 00603b60 */
        lVar11 = plVar15[1];
        uVar2 = plVar15[2];
        uVar13 = lVar11 + 1;
        if (uVar2 < uVar13) {
                    /* try { // try from 006021e0 to 007021f3 has its CatchHandler @ 00603c18 */
          if (0x7ffffffffffffffd < uVar2) {
                    /* try { // try from 006021f4 to 00702203 has its CatchHandler @ 00603b30 */
            FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
            FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                         "lexical element too long");
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00602224 to 00702227 has its CatchHandler @ 00603c18 */
            FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
          }
          lVar14 = uVar2 * 2;
          if (lVar14 == -2) {
            lVar6 = FUN_005eede0();
          }
          else {
            lVar6 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar2,lVar14);
          }
          lVar11 = plVar15[1];
          *plVar15 = lVar6;
          plVar15[2] = lVar14;
          uVar13 = lVar11 + 1;
        }
        else {
          lVar6 = *plVar15;
                    /* try { // try from 0060235c to 0070236f has its CatchHandler @ 00603a50 */
        }
        plVar15[1] = uVar13;
        *(char *)(lVar6 + lVar11) = (char)uVar5;
        plVar15 = *(long **)(param_1 + 0x10);
                    /* try { // try from 006023e4 to 0070240b has its CatchHandler @ 00603604 */
        lVar11 = *plVar15;
        *plVar15 = lVar11 + -1;
        if (lVar11 == 0) {
          uVar5 = FUN_005f8650();
          *param_1 = uVar5;
        }
        else {
          pbVar12 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar12 + 1);
          *param_1 = (uint)*pbVar12;
        }
        if (param_3 == 0) {
                    /* try { // try from 0060242c to 00702453 has its CatchHandler @ 00603e00 */
          FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
          uVar7 = FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                               "nesting of [[...]] is deprecated");
          uVar9 = *(undefined8 *)(param_1 + 0xe);
          iVar4 = iscntrl(0x5b);
          pcVar8 = "%c";
          if (iVar4 != 0) {
            pcVar8 = "char(%d)";
          }
                    /* try { // try from 00602474 to 00702477 has its CatchHandler @ 006034f4 */
          pcVar8 = (char *)FUN_005ef3d4(uVar9,pcVar8,0x5b);
          goto LAB_006020e0;
        }
      }
    }
    else {
                    /* try { // try from 0060210c to 00702133 has its CatchHandler @ 006040ec */
      if (uVar5 != 0x5d) goto LAB_00602294;
      iVar4 = FUN_00601d18(param_1);
      if (iVar4 == param_3) {
        plVar15 = *(long **)(param_1 + 0x12);
                    /* try { // try from 00602498 to 0070249b has its CatchHandler @ 006034f0 */
        uVar5 = *param_1;
        lVar11 = plVar15[1];
        uVar2 = plVar15[2];
                    /* try { // try from 006024a0 to 007024b3 has its CatchHandler @ 006039e8 */
        uVar13 = lVar11 + 1;
        if (uVar2 < uVar13) {
                    /* try { // try from 006024b4 to 007024bf has its CatchHandler @ 00603990 */
          if (0x7ffffffffffffffd < uVar2) {
            FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 006024d4 to 007024ef has its CatchHandler @ 00603eb4 */
            FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                         "lexical element too long");
                    /* WARNING: Subroutine does not return */
            FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
          }
          lVar14 = uVar2 * 2;
                    /* try { // try from 0060250c to 00702513 has its CatchHandler @ 0060398c */
          if (lVar14 == -2) {
            lVar6 = FUN_005eede0();
          }
          else {
            lVar6 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar2,lVar14);
          }
          lVar11 = plVar15[1];
          *plVar15 = lVar6;
          plVar15[2] = lVar14;
          uVar13 = lVar11 + 1;
        }
        else {
          lVar6 = *plVar15;
        }
        plVar15[1] = uVar13;
        *(char *)(lVar6 + lVar11) = (char)uVar5;
        plVar15 = *(long **)(param_1 + 0x10);
        lVar11 = *plVar15;
        *plVar15 = lVar11 + -1;
        if (lVar11 == 0) {
          uVar5 = FUN_005f8650();
          *param_1 = uVar5;
        }
        else {
          pbVar12 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar12 + 1);
                    /* try { // try from 00602564 to 00702577 has its CatchHandler @ 0060394c */
          *param_1 = (uint)*pbVar12;
        }
        if (param_2 != (undefined8 *)0x0) {
          lVar11 = *(long *)(param_1 + 0xe);
                    /* try { // try from 00602598 to 007025a3 has its CatchHandler @ 006034ec */
          uVar9 = FUN_005f356c(lVar11,**(long **)(param_1 + 0x12) + (long)(param_3 + 2),
                               (*(long **)(param_1 + 0x12))[1] - (long)((param_3 + 2) * 2));
                    /* try { // try from 006025b4 to 007025df has its CatchHandler @ 00603eb4 */
          puVar10 = (undefined4 *)
                    FUN_005f4adc(lVar11,*(undefined8 *)(*(long *)(param_1 + 0xc) + 8),uVar9);
          if (puVar10[2] == 0) {
            *puVar10 = 1;
            puVar10[2] = 1;
            if (*(ulong *)(*(long *)(lVar11 + 0x20) + 0x70) <=
                *(ulong *)(*(long *)(lVar11 + 0x20) + 0x78)) {
              FUN_005edcb0(lVar11);
            }
          }
          *param_2 = uVar9;
        }
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
                    /* try { // try from 00602604 to 0070260f has its CatchHandler @ 006038fc */
        return;
      }
    }
  } while( true );
}


