/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00632c04
 * Function: FUN_00632c04
 * Signature: undefined FUN_00632c04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00632c04(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            int *param_6,long param_7,ulong param_8,long param_9,uint *param_10)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  size_t sVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *local_20;
  undefined8 local_18;
  long *local_10;
  uint local_8;
  undefined4 uStack_4;
  
                    /* try { // try from 00632c08 to 00732c13 has its CatchHandler @ 006331a0 */
                    /* try { // try from 00632c24 to 00732c3f has its CatchHandler @ 00633214 */
  local_8 = (uint)param_3;
  uStack_4 = (undefined4)((ulong)param_3 >> 0x20);
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_2;
                    /* try { // try from 00632c40 to 00732c4b has its CatchHandler @ 0063319c */
  plVar9 = (long *)FUN_0062d354(param_9 + 0xd0);
                    /* try { // try from 00632c4c to 00732c5b has its CatchHandler @ 00633130 */
  lVar1 = -(param_8 * 8 + 0x1e & 0xfffffffffffffff0);
  iVar6 = FUN_00632808(&local_10);
  iVar7 = FUN_00632808(&local_20);
  if ((iVar6 == -1) == (iVar7 == -1)) {
    uVar17 = 0;
    uVar16 = 0;
    puVar14 = (ulong *)0x0;
    plVar9 = local_10;
  }
  else {
    puVar15 = (ulong *)(param_8 * 2);
    puVar14 = (ulong *)0x0;
    uVar17 = 0;
    cVar4 = FUN_00632808(&local_10);
    if (puVar15 == (ulong *)0x0) {
      uVar16 = 0;
      plVar9 = local_10;
    }
    else {
      do {
        while ((**(char **)(param_7 + (long)puVar14 * 8) != cVar4 &&
               (cVar5 = (**(code **)(*plVar9 + 0x10))(plVar9), cVar4 != cVar5))) {
          puVar14 = (ulong *)((long)puVar14 + 1);
                    /* try { // try from 00632db8 to 00732dc3 has its CatchHandler @ 00633198 */
          if (puVar14 == puVar15) goto LAB_00632de8;
        }
        *(int *)(&stack0xffffffffffffff80 + uVar17 * 4 + lVar1) = (int)puVar14;
        puVar14 = (ulong *)((long)puVar14 + 1);
        uVar17 = uVar17 + 1;
      } while (puVar14 != puVar15);
LAB_00632de8:
      if (uVar17 == 0) {
        uVar16 = 0;
        puVar14 = (ulong *)0x0;
        plVar9 = local_10;
      }
      else {
        if (local_10 != (long *)0x0) {
          if ((ulong)local_10[2] < (ulong)local_10[3]) {
            local_10[2] = local_10[2] + 1;
          }
          else {
            FUN_0062b4a0(local_10);
          }
          local_8 = 0xffffffff;
        }
        plVar9 = local_10;
        uVar16 = 0;
        lVar2 = -(uVar17 * 8 + 0x1e & 0xfffffffffffffff0);
        puVar14 = (ulong *)(&stack0xffffffffffffff80 + lVar2 + lVar1);
        do {
          sVar10 = strlen(*(char **)(param_7 +
                                    (long)*(int *)(&stack0xffffffffffffff80 + uVar16 * 4 + lVar1) *
                                    8));
                    /* try { // try from 00632e3c to 00732e47 has its CatchHandler @ 00633118 */
          *(size_t *)(&stack0xffffffffffffff80 + uVar16 * 8 + lVar2 + lVar1) = sVar10;
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar17);
        uVar16 = 1;
      }
    }
  }
  do {
    uVar13 = uVar17;
    if (plVar9 == (long *)0x0) {
LAB_00632f44:
                    /* try { // try from 00632f48 to 00732f6f has its CatchHandler @ 006330fc */
      if (local_20 == (long *)0x0) break;
      iVar6 = 1;
LAB_00632cd0:
      iVar7 = 0;
      if ((int)local_18 == -1) {
        if ((byte *)local_20[2] < (byte *)local_20[3]) {
          uVar8 = (uint)*(byte *)local_20[2];
        }
        else {
                    /* try { // try from 00632f70 to 00733247 has its CatchHandler @ 00632a08 */
          uVar8 = (**(code **)(*local_20 + 0x48))();
          if (uVar8 == 0xffffffff) {
            local_20 = (long *)0x0;
            iVar7 = 1;
            goto LAB_00632ce0;
          }
        }
                    /* try { // try from 00632eac to 00732eb7 has its CatchHandler @ 0063310c */
        local_18 = CONCAT44(local_18._4_4_,uVar8);
        if (iVar6 == 0) break;
      }
      else {
LAB_00632ce0:
        if (iVar7 == iVar6) break;
      }
LAB_00632ce8:
      if (local_10 == (long *)0x0) {
        uVar8 = 0xff;
      }
      else {
                    /* try { // try from 00632cf8 to 00732cff has its CatchHandler @ 00633220 */
        if (local_8 == 0xffffffff) {
          if ((byte *)local_10[2] < (byte *)local_10[3]) {
            uVar8 = (uint)*(byte *)local_10[2];
          }
          else {
            uVar8 = (**(code **)(*local_10 + 0x48))(local_10);
            if (uVar8 == 0xffffffff) {
              local_10 = (long *)0x0;
              uVar8 = 0xff;
              goto LAB_00632d00;
            }
          }
          local_8 = uVar8;
          uVar8 = uVar8 & 0xff;
        }
        else {
          uVar8 = local_8 & 0xff;
        }
      }
    }
    else {
      if (local_8 == 0xffffffff) {
                    /* try { // try from 00632f04 to 00732f2b has its CatchHandler @ 00633100 */
        if ((byte *)plVar9[2] < (byte *)plVar9[3]) {
          uVar8 = (uint)*(byte *)plVar9[2];
        }
        else {
          uVar8 = (**(code **)(*plVar9 + 0x48))(plVar9);
          if (uVar8 == 0xffffffff) {
            local_10 = (long *)0x0;
            goto LAB_00632f44;
          }
        }
        iVar6 = 0;
        local_8 = uVar8;
        if (local_20 != (long *)0x0) goto LAB_00632cd0;
        goto LAB_00632ce8;
      }
      iVar6 = 0;
      if (local_20 != (long *)0x0) goto LAB_00632cd0;
      uVar8 = local_8 & 0xff;
    }
LAB_00632d00:
    if (uVar17 == 0) goto LAB_00632ecc;
                    /* try { // try from 00632d04 to 00732d57 has its CatchHandler @ 00633224 */
    uVar11 = 0;
    uVar13 = 0;
    do {
      while( true ) {
        if (uVar16 < puVar14[uVar11]) break;
        uVar13 = uVar13 + 1;
LAB_00632d1c:
        uVar11 = uVar11 + 1;
        if (uVar17 <= uVar11) goto LAB_00632d68;
      }
      if (*(byte *)(*(long *)(param_7 +
                             (long)*(int *)(&stack0xffffffffffffff80 + uVar11 * 4 + lVar1) * 8) +
                   uVar16) == uVar8) goto LAB_00632d1c;
      uVar17 = uVar17 - 1;
      uVar12 = puVar14[uVar17];
      *(undefined4 *)(&stack0xffffffffffffff80 + uVar11 * 4 + lVar1) =
           *(undefined4 *)(&stack0xffffffffffffff80 + uVar17 * 4 + lVar1);
      puVar14[uVar11] = uVar12;
    } while (uVar11 < uVar17);
LAB_00632d68:
                    /* try { // try from 00632d70 to 00732d87 has its CatchHandler @ 00633210 */
    if (uVar17 == uVar13) break;
    if (local_10 != (long *)0x0) {
      if ((ulong)local_10[2] < (ulong)local_10[3]) {
        local_8 = 0xffffffff;
        local_10[2] = local_10[2] + 1;
      }
      else {
        (**(code **)(*local_10 + 0x50))(local_10);
        local_8 = 0xffffffff;
      }
    }
                    /* try { // try from 00632d98 to 00732daf has its CatchHandler @ 0063320c */
    uVar16 = uVar16 + 1;
    plVar9 = local_10;
  } while( true );
  if (uVar13 == 1) {
    uVar17 = *puVar14;
joined_r0x00632fbc:
    if (uVar17 == uVar16) {
LAB_00632fc0:
      iVar7 = *(int *)(&stack0xffffffffffffff80 + lVar1);
      iVar6 = iVar7 - (int)param_8;
      if ((ulong)(long)iVar7 < param_8) {
        iVar6 = iVar7;
      }
      *param_6 = iVar6;
      goto LAB_00632ed8;
    }
  }
  else {
                    /* try { // try from 00632ec8 to 00732ee7 has its CatchHandler @ 00633124 */
    if (uVar13 == 2) {
      if (*puVar14 != uVar16) {
        uVar17 = puVar14[1];
        goto joined_r0x00632fbc;
      }
      goto LAB_00632fc0;
    }
  }
LAB_00632ecc:
  *param_10 = *param_10 | 4;
LAB_00632ed8:
  auVar3._8_4_ = local_8;
  auVar3._0_8_ = local_10;
  auVar3._12_4_ = uStack_4;
  return auVar3;
}


