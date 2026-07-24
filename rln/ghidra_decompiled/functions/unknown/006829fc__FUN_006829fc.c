/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006829fc
 * Function: FUN_006829fc
 * Signature: undefined FUN_006829fc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_006829fc(ulong *param_1,ulong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong *puVar3;
  void *pvVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  size_t __size;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  code *pcVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong local_18;
  ulong *local_10;
  void *local_8;
  
  if (((byte)param_1[4] & 1) != 0) goto LAB_00682a28;
  uVar17 = (ulong)((uint)param_1[4] >> 0xb);
  if (uVar17 == 0) {
    if (((byte)param_1[4] >> 1 & 1) == 0) {
      uVar17 = FUN_00682768(param_1,param_1[3]);
      if (uVar17 != 0xffffffffffffffff) goto LAB_00682aa0;
LAB_00682a60:
      param_1[4] = 0;
      *(undefined2 *)(param_1 + 4) = 0x7f8;
      param_1[3] = (ulong)&DAT_007fe560;
                    /* try { // try from 00682a7c to 00782abb has its CatchHandler @ 00682bac */
    }
    else {
      for (plVar12 = (long *)param_1[3]; *plVar12 != 0; plVar12 = plVar12 + 1) {
        lVar10 = FUN_00682768(param_1);
        if (lVar10 == -1) goto LAB_00682a60;
        uVar17 = uVar17 + lVar10;
      }
LAB_00682aa0:
      if (((uint)uVar17 & 0x1fffff) == uVar17) {
        uVar6 = (uint)param_1[4] & 0x7ff | (uint)uVar17 << 0xb;
      }
      else {
                    /* try { // try from 00682abc to 00782c8b has its CatchHandler @ 0068290c */
        uVar6 = (uint)param_1[4] & 0x7ff;
      }
      *(uint *)(param_1 + 4) = uVar6;
      if (uVar17 != 0) goto LAB_00682ac8;
    }
  }
  else {
LAB_00682ac8:
    __size = (uVar17 + 2) * 8;
    local_10 = malloc(__size);
    if (local_10 != (ulong *)0x0) {
      local_10[1] = 0;
      local_8 = malloc(__size);
      if (local_8 != (void *)0x0) {
        *(undefined8 *)((long)local_8 + 8) = 0;
      }
      if (((byte)param_1[4] >> 1 & 1) == 0) {
        FUN_006828c8(param_1,&local_10,param_1[3]);
      }
      else {
        for (plVar12 = (long *)param_1[3]; *plVar12 != 0; plVar12 = plVar12 + 1) {
          FUN_006828c8(param_1,&local_10);
        }
      }
      pvVar4 = local_8;
      puVar3 = local_10;
      if ((local_10 != (ulong *)0x0) && (local_10[1] != uVar17)) {
LAB_00682e20:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (((byte)param_1[4] >> 2 & 1) == 0) {
        if ((param_1[4] & 0x7f8) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00682e44 with catch @ 00682e50
                        */
          pcVar16 = FUN_00681c14;
        }
        else {
                    /* try { // try from 00682e3c to 00782e3f has its CatchHandler @ 00682e40 */
          pcVar16 = FUN_00681fb4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00682e3c with catch @ 00682e40
                        */
        }
      }
      else {
                    /* try { // try from 00682e44 to 00782e47 has its CatchHandler @ 00682e50 */
                    /* try { // try from 00682e48 to 00782e53 has its CatchHandler @ 00682d24 */
        pcVar16 = FUN_006826cc;
      }
      if (local_8 == (void *)0x0) {
        FUN_00681cf0(param_1,pcVar16,local_10);
      }
      else {
        puVar18 = local_10 + 2;
        uVar20 = local_10[1];
        puVar14 = &DAT_007fe558;
        puVar21 = puVar18;
        for (uVar13 = 0; uVar13 != uVar20; uVar13 = uVar13 + 1) {
          while ((puVar14 != &DAT_007fe558 &&
                 (iVar7 = (*pcVar16)(param_1,*puVar21,*puVar14), iVar7 < 0))) {
            puVar15 = *(ulong **)((long)pvVar4 + (long)puVar14 + (0x10 - (long)puVar18));
            *(undefined8 *)((long)pvVar4 + (long)puVar14 + (0x10 - (long)puVar18)) = 0;
            puVar14 = puVar15;
          }
          *(ulong **)((long)pvVar4 + uVar13 * 8 + 0x10) = puVar14;
          puVar14 = puVar21;
          puVar21 = puVar21 + 1;
        }
        lVar10 = 0;
        uVar13 = 0;
        for (uVar11 = 0; uVar11 != uVar20; uVar11 = uVar11 + 1) {
          if (*(long *)((long)pvVar4 + uVar11 * 8 + 0x10) == 0) {
            lVar19 = lVar10 + 2;
            lVar10 = lVar10 + 1;
            *(ulong *)((long)pvVar4 + lVar19 * 8) = *puVar18;
          }
          else {
            lVar19 = uVar13 + 2;
            uVar13 = uVar13 + 1;
            puVar3[lVar19] = *puVar18;
          }
          puVar18 = puVar18 + 1;
        }
        puVar3[1] = uVar13;
        *(long *)((long)pvVar4 + 8) = lVar10;
        if (*(long *)((long)local_8 + 8) + local_10[1] != uVar17) goto LAB_00682e20;
        FUN_00681cf0(param_1,pcVar16);
        pvVar4 = local_8;
        puVar3 = local_10;
        lVar10 = *(long *)((long)local_8 + 8);
        if (lVar10 != 0) {
          uVar17 = local_10[1];
          lVar19 = lVar10 << 3;
          do {
            lVar10 = lVar10 + -1;
            uVar13 = *(ulong *)((long)pvVar4 + lVar19 + 8);
            puVar18 = puVar3 + uVar17;
            while (uVar17 != 0) {
              iVar7 = (*pcVar16)(param_1,puVar18[1],uVar13);
              if (iVar7 < 1) break;
              *(ulong *)((long)(puVar18 + -1) + lVar19 + 0x10) = puVar18[1];
              uVar17 = uVar17 - 1;
              puVar18 = puVar18 + -1;
            }
            lVar19 = lVar19 + -8;
            puVar3[lVar10 + uVar17 + 2] = uVar13;
          } while (lVar10 != 0);
          puVar3[1] = puVar3[1] + *(long *)((long)pvVar4 + 8);
        }
                    /* catch() { ... } // from try @ 006829c8 with catch @ 00682ba8 */
                    /* catch() { ... } // from try @ 00682a7c with catch @ 00682bac */
        free(local_8);
      }
      *local_10 = param_1[3];
      param_1[3] = (ulong)local_10;
      *(byte *)(param_1 + 4) = (byte)param_1[4] | 1;
    }
  }
  if (param_2 < *param_1) {
    return 0;
  }
LAB_00682a28:
  bVar5 = (byte)param_1[4];
  if ((bVar5 & 1) == 0) {
    if ((bVar5 >> 1 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00682d60 with catch @ 00682dbc
                        */
      lVar10 = FUN_00682140(param_1,param_1[3],param_2);
      return lVar10;
    }
    for (plVar12 = (long *)param_1[3]; *plVar12 != 0; plVar12 = plVar12 + 1) {
      lVar10 = FUN_00682140(param_1,*plVar12,param_2);
      if (lVar10 != 0) {
        return lVar10;
      }
    }
  }
  else if ((bVar5 >> 2 & 1) == 0) {
                    /* try { // try from 00682c8c to 00782c8f has its CatchHandler @ 00682ca8 */
    if (((ushort)param_1[4] & 0x7f8) == 0) {
      uVar17 = 0;
      uVar13 = *(ulong *)(param_1[3] + 8);
      while (uVar20 = uVar13, uVar17 < uVar20) {
                    /* catch() { ... } // from try @ 00682c8c with catch @ 00682ca8 */
                    /* try { // try from 00682cac to 00782caf has its CatchHandler @ 00682cb4 */
        uVar13 = uVar20 + uVar17 >> 1;
                    /* try { // try from 00682cb0 to 00782d23 has its CatchHandler @ 0068290c */
                    /* catch() { ... } // from try @ 00682cac with catch @ 00682cb4 */
        lVar10 = *(long *)(param_1[3] + (uVar13 + 2) * 8);
                    /* catch() { ... } // from try @ 006829a8 with catch @ 00682cb8 */
        if (*(ulong *)(lVar10 + 8) <= param_2) {
          if (param_2 < *(ulong *)(lVar10 + 8) + *(long *)(lVar10 + 0x10)) {
            return lVar10;
          }
          uVar17 = uVar13 + 1;
          uVar13 = uVar20;
        }
      }
    }
    else {
      uVar1 = (ushort)param_1[4] >> 3;
      uVar2 = uVar1 & 0xff;
      uVar20 = param_1[3];
      uVar17 = 0;
      uVar8 = FUN_00681e04(uVar2,param_1);
      uVar13 = *(ulong *)(uVar20 + 8);
                    /* try { // try from 00682d6c to 00782e3b has its CatchHandler @ 00682d24 */
      while (uVar11 = uVar13, uVar17 < uVar11) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00682d6c with catch @ 00682d24
                       catch(type#1 @ 00000000) { ... } // from try @ 00682e48 with catch @ 00682d24
                        */
        uVar13 = uVar11 + uVar17 >> 1;
        lVar10 = *(long *)(uVar20 + (uVar13 + 2) * 8);
        uVar9 = FUN_00681ec4(uVar2,uVar8,lVar10 + 8,&local_18);
        FUN_00681ec4(uVar1 & 0xf,0,uVar9,&local_10);
                    /* try { // try from 00682d60 to 00782d6b has its CatchHandler @ 00682dbc */
        if (local_18 <= param_2) {
          if (param_2 < local_18 + (long)local_10) {
            return lVar10;
          }
          uVar17 = uVar13 + 1;
          uVar13 = uVar11;
        }
      }
    }
  }
  else {
    uVar20 = param_1[3];
    uVar17 = 0;
    uVar13 = *(ulong *)(uVar20 + 8);
    while (uVar11 = uVar13, uVar17 < uVar11) {
      uVar13 = uVar11 + uVar17 >> 1;
      lVar10 = *(long *)(uVar20 + (uVar13 + 2) * 8);
      bVar5 = FUN_006822a0(lVar10);
      uVar8 = FUN_00681e04(bVar5,param_1);
      uVar8 = FUN_00681ec4(bVar5,uVar8,lVar10 + 8,&local_18);
      FUN_00681ec4(bVar5 & 0xf,0,uVar8,&local_10);
      if (local_18 <= param_2) {
        if (param_2 < local_18 + (long)local_10) {
          return lVar10;
        }
        uVar17 = uVar13 + 1;
        uVar13 = uVar11;
      }
    }
  }
  return 0;
}


