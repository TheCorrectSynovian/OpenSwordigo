/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f21a8
 * Function: FUN_005f21a8
 * Signature: undefined FUN_005f21a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f21a8(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
  plVar14 = *(long **)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 005f1a18 with catch @ 005f21cc */
  plVar15 = plVar14;
  if (199 < (int)((uint)*(byte *)((long)plVar14 + 0x4a) + param_3)) {
    if (*(int *)(*plVar14 + 0x60) == 0) {
      uVar3 = FUN_005ef3d4(plVar14[4],0x69a06d,200,"local variables");
    }
    else {
                    /* catch() { ... } // from try @ 005f17ec with catch @ 005f2204 */
                    /* catch() { ... } // from try @ 005f1788 with catch @ 005f2208 */
      uVar3 = FUN_005ef3d4(plVar14[4],&DAT_0069a08f,*(int *)(*plVar14 + 0x60),200,"local variables")
      ;
                    /* catch() { ... } // from try @ 005f1740 with catch @ 005f220c */
    }
    FUN_006007a0(plVar14[3],uVar3,0);
    plVar15 = *(long **)(param_1 + 0x30);
  }
                    /* catch() { ... } // from try @ 005f1718 with catch @ 005f223c */
  lVar13 = *plVar15;
                    /* catch() { ... } // from try @ 005f1900 with catch @ 005f2240 */
                    /* catch() { ... } // from try @ 005f1710 with catch @ 005f2244 */
  iVar2 = *(int *)(lVar13 + 0x5c);
                    /* catch() { ... } // from try @ 005f172c with catch @ 005f2248
                       catch() { ... } // from try @ 005f1770 with catch @ 005f2248 */
  if ((short)plVar15[9] < iVar2) {
    lVar4 = *(long *)(lVar13 + 0x30);
    iVar1 = iVar2;
    if (!SBORROW4(iVar2,iVar2)) goto LAB_005f2300;
  }
  else {
                    /* catch() { ... } // from try @ 005f182c with catch @ 005f2280 */
    lVar4 = FUN_005eec70(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar13 + 0x30),
                         (int *)(lVar13 + 0x5c),0x10,0x7fff,"too many local variables");
    iVar1 = *(int *)(lVar13 + 0x5c);
    *(long *)(lVar13 + 0x30) = lVar4;
    if (iVar1 <= iVar2) goto LAB_005f2300;
  }
  lVar11 = (long)iVar2;
  lVar6 = (long)iVar1;
  lVar7 = lVar11 + 1;
  *(undefined8 *)(lVar4 + lVar11 * 0x10) = 0;
  if (lVar7 < lVar6) {
    uVar8 = (lVar6 + -1) - lVar11;
                    /* catch() { ... } // from try @ 005f17c8 with catch @ 005f22b8 */
    if (1 < uVar8) {
      uVar10 = uVar8 & 0xfffffffffffffffe;
      lVar7 = lVar7 + uVar10;
      uVar12 = uVar10;
      puVar9 = (undefined8 *)(lVar4 + lVar11 * 0x10);
      do {
        puVar9[2] = 0;
        puVar9[4] = 0;
        uVar12 = uVar12 - 2;
        puVar9 = puVar9 + 4;
      } while (uVar12 != 0);
      if (uVar8 == uVar10) goto LAB_005f2300;
    }
                    /* catch() { ... } // from try @ 005f15e4 with catch @ 005f22f0 */
    lVar6 = lVar6 - lVar7;
    puVar9 = (undefined8 *)(lVar4 + lVar7 * 0x10);
    do {
                    /* catch() { ... } // from try @ 005f1580 with catch @ 005f22f4 */
      lVar6 = lVar6 + -1;
                    /* catch() { ... } // from try @ 005f1538 with catch @ 005f22f8 */
      *puVar9 = 0;
      puVar9 = puVar9 + 2;
    } while (lVar6 != 0);
  }
LAB_005f2300:
  sVar5 = (short)plVar15[9];
  *(long *)(lVar4 + (long)sVar5 * 0x10) = param_2;
  if (((*(byte *)(param_2 + 9) & 3) != 0) && ((*(byte *)(lVar13 + 9) >> 2 & 1) != 0)) {
                    /* catch() { ... } // from try @ 005f1510 with catch @ 005f2328 */
                    /* catch() { ... } // from try @ 005f16b0 with catch @ 005f232c */
                    /* catch() { ... } // from try @ 005f1508 with catch @ 005f2330 */
    FUN_005ee334(*(undefined8 *)(param_1 + 0x38),lVar13,param_2);
                    /* catch() { ... } // from try @ 005f1524 with catch @ 005f2334
                       catch() { ... } // from try @ 005f1568 with catch @ 005f2334 */
    sVar5 = (short)plVar15[9];
  }
  *(short *)(plVar15 + 9) = sVar5 + 1;
  *(short *)((long)plVar14 + (long)(int)((uint)*(byte *)((long)plVar14 + 0x4a) + param_3) * 2 + 0xc4
            ) = sVar5;
  return;
}


