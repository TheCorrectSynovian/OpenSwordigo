/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f43c0
 * Function: FUN_005f43c0
 * Signature: undefined FUN_005f43c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_005f43c0(undefined8 param_1,long param_2,double *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  int *piVar7;
  int *piVar10;
  undefined8 *puVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  int iVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  int iVar27;
  undefined8 *puVar28;
  int iVar29;
  int iVar30;
  double dVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int local_d4 [27];
  long local_68;
  int *piVar8;
  int *piVar9;
  int *piVar11;
  int *piVar12;
  
                    /* try { // try from 005f43e0 to 006f43f3 has its CatchHandler @ 005f4b08 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 005f43f4 to 006f4407 has its CatchHandler @ 005f4a9c */
                    /* try { // try from 005f4408 to 006f4423 has its CatchHandler @ 005f4a38 */
  switch(*(uint *)(param_3 + 1)) {
  case 1:
    puVar28 = *(undefined8 **)(param_2 + 0x20);
    uVar15 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U & *(uint *)param_3;
    goto LAB_005f44a4;
  default:
    puVar28 = *(undefined8 **)(param_2 + 0x20);
                    /* try { // try from 005f4450 to 006f4457 has its CatchHandler @ 005f48ac */
    uVar15 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U | 1;
    uVar2 = 0;
    if (uVar15 != 0) {
      uVar2 = *(uint *)param_3 / uVar15;
    }
    uVar15 = *(uint *)param_3 - uVar2 * uVar15;
LAB_005f4460:
    puVar13 = puVar28 + (ulong)uVar15 * 5;
    break;
  case 3:
    dVar31 = *param_3;
                    /* try { // try from 005f4470 to 006f4477 has its CatchHandler @ 005f49a0 */
    if (dVar31 != 0.0) {
      uVar15 = (int)((ulong)dVar31 >> 0x20) + SUB84(dVar31,0);
                    /* catch() { ... } // from try @ 005f4590 with catch @ 005f48a8 */
                    /* catch() { ... } // from try @ 005f4450 with catch @ 005f48ac
                       catch() { ... } // from try @ 005f4494 with catch @ 005f48ac */
      puVar28 = *(undefined8 **)(param_2 + 0x20);
      uVar2 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U | 1;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar15 / uVar2;
      }
                    /* catch() { ... } // from try @ 005f45a4 with catch @ 005f48bc
                       catch() { ... } // from try @ 005f4660 with catch @ 005f48bc */
      uVar15 = uVar15 - uVar3 * uVar2;
      goto LAB_005f4460;
    }
    puVar13 = *(undefined8 **)(param_2 + 0x20);
    puVar28 = puVar13;
    break;
  case 4:
    puVar28 = *(undefined8 **)(param_2 + 0x20);
                    /* try { // try from 005f4494 to 006f44bb has its CatchHandler @ 005f48ac */
    uVar15 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U & *(uint *)((long)*param_3 + 0xc);
LAB_005f44a4:
    puVar13 = puVar28 + (long)(int)uVar15 * 5;
  }
  if ((puVar13 == (undefined8 *)&LAB_0069a2a0) || (*(int *)(puVar13 + 1) != 0)) {
    puVar18 = *(undefined8 **)(param_2 + 0x28);
    puVar17 = puVar18 + -5;
    *(undefined8 **)(param_2 + 0x28) = puVar17;
joined_r0x005f4518:
    puVar5 = puVar17;
    if (puVar28 < puVar18) {
      if (*(int *)(puVar5 + 3) != 0) goto code_r0x005f4524;
      switch(*(undefined4 *)(puVar13 + 3)) {
      case 1:
        uVar15 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U & *(uint *)(puVar13 + 2);
        goto LAB_005f498c;
      default:
        uVar15 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U | 1;
        uVar2 = 0;
        if (uVar15 != 0) {
          uVar2 = *(uint *)(puVar13 + 2) / uVar15;
        }
        uVar15 = *(uint *)(puVar13 + 2) - uVar2 * uVar15;
LAB_005f48e4:
        puVar28 = puVar28 + (ulong)uVar15 * 5;
        break;
      case 3:
        dVar31 = (double)puVar13[2];
        if (dVar31 != 0.0) {
          uVar15 = (int)((ulong)dVar31 >> 0x20) + SUB84(dVar31,0);
          uVar2 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U | 1;
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar15 / uVar2;
          }
          uVar15 = uVar15 - uVar3 * uVar2;
          goto LAB_005f48e4;
        }
        break;
      case 4:
        uVar15 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U & *(uint *)(puVar13[2] + 0xc);
LAB_005f498c:
        puVar28 = puVar28 + (long)(int)uVar15 * 5;
      }
      if (puVar28 == puVar13) {
        puVar5[4] = puVar13[4];
        puVar13[4] = puVar5;
        puVar13 = puVar5;
      }
      else {
        do {
          puVar18 = puVar28;
                    /* catch() { ... } // from try @ 005f4470 with catch @ 005f49a0 */
          puVar28 = (undefined8 *)puVar18[4];
        } while (puVar28 != puVar13);
        puVar18[4] = puVar5;
        puVar5[4] = puVar13[4];
        uVar32 = puVar13[2];
        puVar5[3] = puVar13[3];
        puVar5[2] = uVar32;
        uVar32 = *puVar13;
        puVar5[1] = puVar13[1];
        *puVar5 = uVar32;
        puVar13[4] = 0;
        *(undefined4 *)(puVar13 + 1) = 0;
      }
      goto LAB_005f44c4;
    }
    memset(local_d4,0,0x6c);
    iVar29 = *(int *)(param_2 + 0x38);
    iVar27 = 0;
    lVar22 = 1;
                    /* try { // try from 005f455c to 006f4583 has its CatchHandler @ 005f4914 */
    iVar20 = 1;
    uVar19 = 0;
    do {
      iVar16 = (int)lVar22;
      iVar30 = iVar20;
      if ((iVar29 < iVar20) && (iVar30 = iVar29, iVar29 < iVar16)) break;
      if (iVar30 < iVar16) {
        iVar30 = 0;
      }
      else {
        lVar23 = (long)iVar16;
        lVar24 = (long)iVar30;
                    /* try { // try from 005f4590 to 006f45a3 has its CatchHandler @ 005f48a8 */
        lVar22 = lVar23;
        if (lVar23 <= lVar24) {
          lVar22 = lVar24;
        }
        uVar25 = (lVar22 + 1) - lVar23;
                    /* try { // try from 005f45a4 to 006f45bf has its CatchHandler @ 005f48bc */
        if (uVar25 < 9) {
          iVar30 = 0;
        }
        else {
          uVar1 = 8;
          if ((uVar25 & 7) != 0) {
            uVar1 = uVar25 & 7;
          }
          lVar22 = uVar25 - uVar1;
          iVar30 = 0;
          iVar16 = 0;
          iVar33 = 0;
          iVar34 = 0;
          piVar21 = (int *)(*(long *)(param_2 + 0x18) + lVar23 * 0x10 + 0x38);
          lVar23 = lVar22 + lVar23;
                    /* try { // try from 005f45d4 to 006f45db has its CatchHandler @ 005f4804 */
          iVar35 = 0;
          iVar36 = 0;
          iVar37 = 0;
          iVar38 = 0;
          do {
            piVar26 = piVar21 + -0x10;
            iVar39 = *piVar21;
            piVar7 = piVar21 + 4;
            piVar8 = piVar21 + 8;
            piVar9 = piVar21 + 0xc;
            piVar10 = piVar21 + -0xc;
            piVar11 = piVar21 + -8;
            piVar12 = piVar21 + -4;
            lVar22 = lVar22 + -8;
            piVar21 = piVar21 + 0x20;
            iVar39 = -(uint)(iVar39 == 0);
            iVar40 = -(uint)(*piVar7 == 0);
            iVar41 = -(uint)(*piVar8 == 0);
            iVar42 = -(uint)(*piVar9 == 0);
            iVar43 = -(uint)(*piVar26 == 0);
            iVar44 = -(uint)(*piVar10 == 0);
            iVar45 = -(uint)(*piVar11 == 0);
            iVar46 = -(uint)(*piVar12 == 0);
                    /* try { // try from 005f45f4 to 006f45fb has its CatchHandler @ 005f4814 */
            iVar35 = iVar35 - CONCAT13(~(byte)((uint)iVar39 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar39 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar39 >> 8),~(byte)iVar39)))
            ;
            iVar36 = iVar36 - CONCAT13(~(byte)((uint)iVar40 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar40 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar40 >> 8),~(byte)iVar40)))
            ;
            iVar37 = iVar37 - CONCAT13(~(byte)((uint)iVar41 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar41 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar41 >> 8),~(byte)iVar41)))
            ;
            iVar38 = iVar38 - CONCAT13(~(byte)((uint)iVar42 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar42 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar42 >> 8),~(byte)iVar42)))
            ;
            iVar30 = iVar30 - CONCAT13(~(byte)((uint)iVar43 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar43 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar43 >> 8),~(byte)iVar43)))
            ;
            iVar16 = iVar16 - CONCAT13(~(byte)((uint)iVar44 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar44 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar44 >> 8),~(byte)iVar44)))
            ;
            iVar33 = iVar33 - CONCAT13(~(byte)((uint)iVar45 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar45 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar45 >> 8),~(byte)iVar45)))
            ;
            iVar34 = iVar34 - CONCAT13(~(byte)((uint)iVar46 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar46 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar46 >> 8),~(byte)iVar46)))
            ;
          } while (lVar22 != 0);
          iVar30 = iVar35 + iVar30 + iVar36 + iVar16 + iVar37 + iVar33 + iVar38 + iVar34;
        }
                    /* try { // try from 005f4618 to 006f463f has its CatchHandler @ 005f4804 */
        piVar21 = (int *)(*(long *)(param_2 + 0x18) + lVar23 * 0x10 + -8);
        do {
          if (*piVar21 != 0) {
            iVar30 = iVar30 + 1;
          }
          lVar22 = lVar23 + 1;
          bVar6 = lVar23 < lVar24;
          lVar23 = lVar22;
          piVar21 = piVar21 + 4;
        } while (bVar6);
      }
      iVar27 = iVar30 + iVar27;
      bVar6 = uVar19 < 0x1a;
      iVar20 = iVar20 << 1;
      local_d4[uVar19] = local_d4[uVar19] + iVar30;
      uVar19 = uVar19 + 1;
    } while (bVar6);
                    /* try { // try from 005f4660 to 006f4687 has its CatchHandler @ 005f48bc */
    iVar30 = 1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f);
    iVar29 = 0;
    iVar20 = 0;
    lVar22 = (long)iVar30 * 0x28;
    iVar30 = -iVar30;
    while( true ) {
      iVar30 = iVar30 + 1;
      if (*(int *)((long)puVar28 + lVar22 + -0x20) != 0) {
        if (((*(int *)((long)puVar28 + lVar22 + -0x10) == 3) &&
            (dVar31 = *(double *)((long)puVar28 + lVar22 + -0x18), iVar16 = (int)dVar31,
            dVar31 == (double)iVar16)) && (iVar16 - 1U >> 0x1a == 0)) {
          iVar16 = FUN_005eee4c();
          local_d4[(long)iVar16 + 1] = local_d4[(long)iVar16 + 1] + 1;
          iVar16 = 1;
        }
        else {
          iVar16 = 0;
        }
        iVar20 = iVar16 + iVar20;
        iVar29 = iVar29 + 1;
      }
      if (iVar30 == 0) break;
                    /* try { // try from 005f4688 to 006f4833 has its CatchHandler @ 005f4210 */
      puVar28 = *(undefined8 **)(param_2 + 0x20);
      lVar22 = lVar22 + -0x28;
    }
    if (((*(uint *)(param_3 + 1) == 3) && (iVar30 = (int)*param_3, *param_3 == (double)iVar30)) &&
       (iVar30 - 1U >> 0x1a == 0)) {
      iVar30 = FUN_005eee4c();
      local_d4[(long)iVar30 + 1] = local_d4[(long)iVar30 + 1] + 1;
      iVar30 = 1;
    }
    else {
      iVar30 = 0;
    }
    iVar30 = iVar20 + iVar27 + iVar30;
    if (iVar30 < 1) {
      iVar20 = 0;
      iVar16 = 0;
    }
    else {
      iVar33 = 0;
      piVar21 = local_d4;
      iVar34 = 0;
      iVar35 = 1;
      iVar36 = 0;
      iVar37 = 0;
      do {
        iVar20 = iVar36;
        iVar16 = iVar37;
        if ((0 < *piVar21) &&
           (iVar33 = *piVar21 + iVar33, iVar20 = iVar33, iVar16 = iVar35, iVar33 <= iVar34)) {
          iVar20 = iVar36;
          iVar16 = iVar37;
        }
        if (iVar33 == iVar30) break;
        piVar21 = piVar21 + 1;
        bVar6 = iVar35 < iVar30;
        iVar34 = iVar35;
        iVar35 = iVar35 << 1;
        iVar36 = iVar20;
        iVar37 = iVar16;
      } while (bVar6);
    }
    FUN_005f3a60(param_1,param_2,iVar16,(iVar27 + iVar29 + 1) - iVar20);
    puVar13 = (undefined8 *)FUN_005f4118(param_2,param_3);
    *(undefined1 *)(param_2 + 10) = 0;
                    /* catch() { ... } // from try @ 005f44dc with catch @ 005f4800 */
    if (puVar13 == &DAT_00699bc8) {
      if (*(uint *)(param_3 + 1) == 3) {
        if (NAN(*param_3)) {
          pcVar14 = "table index is NaN";
          goto LAB_005f490c;
        }
      }
      else if (*(uint *)(param_3 + 1) == 0) {
        pcVar14 = "table index is nil";
LAB_005f490c:
        FUN_005eb320(param_1,pcVar14);
      }
                    /* catch() { ... } // from try @ 005f455c with catch @ 005f4914 */
      puVar28 = (undefined8 *)FUN_005f43c0(param_1,param_2,param_3);
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return puVar28;
      }
      goto LAB_005f4934;
    }
  }
  else {
LAB_005f44c4:
    puVar13[2] = *param_3;
    *(uint *)(puVar13 + 3) = *(uint *)(param_3 + 1);
                    /* try { // try from 005f44dc to 006f4503 has its CatchHandler @ 005f4800 */
    if (((3 < (int)*(uint *)(param_3 + 1)) && ((*(byte *)((long)*param_3 + 9) & 3) != 0)) &&
       ((*(byte *)(param_2 + 9) >> 2 & 1) != 0)) {
      FUN_005ee46c(param_1,param_2);
    }
  }
                    /* catch() { ... } // from try @ 005f45d4 with catch @ 005f4804
                       catch() { ... } // from try @ 005f4618 with catch @ 005f4804 */
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 005f4834 to 006f4a2f has its CatchHandler @ 005f4a34 */
    return puVar13;
  }
LAB_005f4934:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x005f4524:
  *(undefined8 **)(param_2 + 0x28) = puVar5 + -5;
  puVar17 = puVar5 + -5;
  puVar18 = puVar5;
  goto joined_r0x005f4518;
}


