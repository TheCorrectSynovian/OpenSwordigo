/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00617e18
 * Function: PVRTVertexGenerateTangentSpace
 * Signature: undefined __cdecl PVRTVertexGenerateTangentSpace(int * param_1, char * * param_2, ushort * param_3, int param_4, char * param_5, int param_6, int param_7, EPVRTDataType param_8, int param_9, EPVRTDataType param_10, int param_11, EPVRTDataType param_12, int param_13, EPVRTDataType param_14, int param_15, EPVRTDataType param_16, int param_17, float param_18)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTVertexGenerateTangentSpace(int*, char**, unsigned short*, int, char const*, int, int,
   EPVRTDataType, int, EPVRTDataType, int, EPVRTDataType, int, EPVRTDataType, int, EPVRTDataType,
   int, float) */

void PVRTVertexGenerateTangentSpace
               (float param_1_00,int *param_1,long *param_2,void *param_3,int param_4,long param_5,
               int param_6,int param_7,undefined4 param_9,int param_10,undefined4 param_11,
               int param_12,undefined4 param_13,int param_14,undefined4 param_15,int param_16,
               undefined4 param_17,int param_18)

{
  PVRTVECTOR3f *pPVar1;
  PVRTVECTOR3f *pPVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  void *__ptr;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  ushort *puVar18;
  undefined4 *puVar19;
  int iVar20;
  int *piVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  PVRTVECTOR3f *pPVar27;
  ulong __size;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  PVRTVECTOR3f *pPVar32;
  undefined4 uVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  PVRTVECTOR3f aPStack_108 [16];
  PVRTVECTOR3f aPStack_f8 [16];
  PVRTVECTOR3f aPStack_e8 [16];
  float afStack_d8 [4];
  float afStack_c8 [4];
  float afStack_b8 [4];
  float afStack_a8 [4];
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  
                    /* try { // try from 00617e1c to 00717e23 has its CatchHandler @ 00617efc */
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 00617e58 to 00717e5b has its CatchHandler @ 00617f00 */
                    /* try { // try from 00617e68 to 00717e7f has its CatchHandler @ 00617efc */
  *param_1 = 0;
  pvVar8 = malloc((long)(param_4 * 3 * param_6));
  *param_2 = (long)pvVar8;
  if (pvVar8 == (void *)0x0) {
LAB_00618644:
    uVar10 = 1;
  }
  else {
                    /* try { // try from 00617ea0 to 00717ea3 has its CatchHandler @ 00617f04 */
    __size = -(ulong)((uint)(param_18 * 3) >> 0x1f) & 0xfffffffe00000000 |
             (ulong)(uint)(param_18 * 3) << 1;
    pvVar8 = malloc(__size);
                    /* try { // try from 00617eb0 to 00717ec7 has its CatchHandler @ 00617efc */
    pvVar9 = calloc((long)param_4,900);
                    /* try { // try from 00617ec8 to 00717f1b has its CatchHandler @ 00617de4 */
    __ptr = calloc(0x20,900);
    uVar10 = 1;
    if (((pvVar8 != (void *)0x0) && (pvVar9 != (void *)0x0)) && (__ptr != (void *)0x0)) {
                    /* catch() { ... } // from try @ 00617e1c with catch @ 00617efc
                       catch() { ... } // from try @ 00617e68 with catch @ 00617efc
                       catch() { ... } // from try @ 00617eb0 with catch @ 00617efc */
      if (0 < param_18) {
                    /* catch() { ... } // from try @ 00617e58 with catch @ 00617f00 */
        lVar15 = (long)param_7;
                    /* catch() { ... } // from try @ 00617ea0 with catch @ 00617f04 */
                    /* try { // try from 00617f1c to 00717f9f has its CatchHandler @ 00617f1c
                       catch() { ... } // from try @ 00617f1c with catch @ 00617f1c
                       catch() { ... } // from try @ 00617fa8 with catch @ 00617f1c
                       catch() { ... } // from try @ 006180a0 with catch @ 00617f1c
                       catch() { ... } // from try @ 006181d0 with catch @ 00617f1c
                       catch() { ... } // from try @ 00618264 with catch @ 00617f1c
                       catch() { ... } // from try @ 006182c8 with catch @ 00617f1c
                       catch() { ... } // from try @ 00618360 with catch @ 00617f1c
                       catch() { ... } // from try @ 00618430 with catch @ 00617f1c
                       catch() { ... } // from try @ 00618494 with catch @ 00617f1c
                       catch() { ... } // from try @ 006184ec with catch @ 00617f1c
                       catch() { ... } // from try @ 00618980 with catch @ 00617f1c
                       catch() { ... } // from try @ 00618e18 with catch @ 00617f1c
                       catch() { ... } // from try @ 00618e78 with catch @ 00617f1c
                       catch() { ... } // from try @ 00618f6c with catch @ 00617f1c
                       catch() { ... } // from try @ 006190f4 with catch @ 00617f1c */
        puVar18 = (ushort *)((long)param_3 + 4);
        lVar34 = 0;
        lVar13 = (long)param_10;
        lVar16 = (long)param_6;
        lVar12 = (long)param_12;
        do {
          uVar5 = puVar18[-2];
          uVar31 = (ulong)uVar5;
          uVar4 = *puVar18;
          uVar26 = (ulong)uVar4;
          uVar10 = 1;
          if (uVar5 == uVar4) goto LAB_00618648;
          uVar6 = puVar18[-1];
          uVar29 = (ulong)uVar6;
          if ((uVar5 == uVar6) || (uVar6 == uVar4)) goto LAB_00618648;
          piVar17 = (int *)((long)pvVar9 + uVar31 * 900);
                    /* try { // try from 00617fa0 to 00717fa7 has its CatchHandler @ 00618fec */
          if ((0x1f < *piVar17) ||
             ((piVar21 = (int *)((long)pvVar9 + uVar29 * 900), 0x1f < *piVar21 ||
              (piVar14 = (int *)((long)pvVar9 + uVar26 * 900), 0x1f < *piVar14))))
          goto LAB_00618644;
                    /* try { // try from 00617fa8 to 0071806f has its CatchHandler @ 00617f1c */
          lVar25 = param_5 + uVar31 * lVar16;
          PVRTVertexRead(&local_88,lVar25 + lVar15,param_9,3);
          lVar28 = param_5 + uVar29 * lVar16;
          PVRTVertexRead(&local_98,lVar28 + lVar15,param_9,3);
          lVar30 = param_5 + uVar26 * lVar16;
          PVRTVertexRead(afStack_a8,lVar30 + lVar15,param_9,3);
          PVRTVertexRead(aPStack_e8,lVar25 + lVar13,param_11,3);
          PVRTVertexRead(aPStack_f8,lVar28 + lVar13,param_11,3);
          PVRTVertexRead(aPStack_108,lVar30 + lVar13,param_11,3);
                    /* try { // try from 00618070 to 0071809f has its CatchHandler @ 00618e2c */
          PVRTVertexRead(afStack_b8,lVar25 + lVar12,param_13,3);
          PVRTVertexRead(afStack_c8,lVar28 + lVar12,param_13,3);
                    /* try { // try from 006180a0 to 007181af has its CatchHandler @ 00617f1c */
          PVRTVertexRead(afStack_d8,lVar30 + lVar12,param_13,3);
          lVar25 = (long)*piVar17 * 0xc + uVar31 * 900;
          PVRTVertexTangentBitangent
                    ((PVRTVECTOR3f *)((long)pvVar9 + lVar25 + 4),
                     (PVRTVECTOR3f *)((long)pvVar9 + lVar25 + 0x184),aPStack_e8,(float *)&local_88,
                     (float *)&local_98,afStack_a8,afStack_b8,afStack_c8,afStack_d8);
          lVar25 = (long)*piVar21 * 0xc + uVar29 * 900;
          PVRTVertexTangentBitangent
                    ((PVRTVECTOR3f *)((long)pvVar9 + lVar25 + 4),
                     (PVRTVECTOR3f *)((long)pvVar9 + lVar25 + 0x184),aPStack_f8,(float *)&local_98,
                     afStack_a8,(float *)&local_88,afStack_c8,afStack_d8,afStack_b8);
          lVar25 = (long)*piVar14 * 0xc + uVar26 * 900;
          PVRTVertexTangentBitangent
                    ((PVRTVECTOR3f *)((long)pvVar9 + lVar25 + 4),
                     (PVRTVECTOR3f *)((long)pvVar9 + lVar25 + 0x184),aPStack_108,afStack_a8,
                     (float *)&local_88,(float *)&local_98,afStack_d8,afStack_b8,afStack_c8);
          uVar33 = (undefined4)lVar34;
          *(undefined4 *)((long)pvVar9 + (long)*piVar17 * 4 + uVar31 * 900 + 0x304) = uVar33;
          *(undefined4 *)((long)pvVar9 + (long)*piVar21 * 4 + uVar29 * 900 + 0x304) = uVar33;
          puVar18 = puVar18 + 3;
          *(undefined4 *)((long)pvVar9 + (long)*piVar14 * 4 + uVar26 * 900 + 0x304) = uVar33;
          lVar34 = lVar34 + 1;
                    /* try { // try from 006181b0 to 007181c3 has its CatchHandler @ 00618fe8 */
          *piVar17 = *piVar17 + 1;
          *piVar21 = *piVar21 + 1;
                    /* try { // try from 006181c4 to 007181cf has its CatchHandler @ 00618f78 */
                    /* try { // try from 006181d0 to 0071824f has its CatchHandler @ 00617f1c */
          *piVar14 = *piVar14 + 1;
        } while (lVar34 < param_18);
      }
      if (0 < param_4) {
        uVar26 = 0;
        lVar34 = (long)param_6;
        do {
          piVar17 = (int *)((long)pvVar9 + uVar26 * 900);
                    /* try { // try from 00618250 to 00718263 has its CatchHandler @ 00618f3c */
          if (0 < *piVar17) {
            lVar12 = 0;
            iVar24 = 0;
                    /* try { // try from 00618264 to 007182bb has its CatchHandler @ 00617f1c */
            do {
              if (iVar24 < 1) {
                if (iVar24 == 0) goto LAB_006183b8;
              }
              else {
                lVar15 = lVar12 * 0xc + uVar26 * 900;
                lVar13 = 0;
                pPVar1 = (PVRTVECTOR3f *)((long)pvVar9 + lVar15 + 4);
                pPVar2 = (PVRTVECTOR3f *)((long)pvVar9 + lVar15 + 0x184);
                pPVar32 = (PVRTVECTOR3f *)((long)__ptr + 0x184);
                do {
                  piVar21 = (int *)((long)__ptr + lVar13 * 900);
                  if (*piVar21 < 1) {
                    iVar11 = 0;
                    if (*piVar21 == 0) goto LAB_0061833c;
                  }
                  else {
                    lVar16 = 0;
                    pPVar27 = pPVar32;
                    do {
                      fVar35 = (float)PVRTMatrixVec3DotProductF(pPVar1,pPVar27 + -0x180);
                    /* try { // try from 006182bc to 007182c7 has its CatchHandler @ 00618eec */
                    /* try { // try from 006182c8 to 0071835b has its CatchHandler @ 00617f1c */
                      if ((fVar35 < param_1_00) ||
                         (fVar35 = (float)PVRTMatrixVec3DotProductF(pPVar2,pPVar27),
                         fVar35 < param_1_00)) break;
                      lVar16 = lVar16 + 1;
                      pPVar27 = pPVar27 + 0xc;
                    } while (lVar16 < *piVar21);
                    iVar11 = *piVar21;
                    if ((int)lVar16 == iVar11) {
LAB_0061833c:
                      uVar10 = *(undefined8 *)pPVar1;
                      lVar16 = (long)iVar11 * 0xc + lVar13 * 900;
                      *(undefined4 *)((long)__ptr + lVar16 + 0xc) =
                           *(undefined4 *)((long)pvVar9 + lVar15 + 0xc);
                      *(undefined8 *)((long)__ptr + lVar16 + 4) = uVar10;
                    /* try { // try from 0061835c to 0071835f has its CatchHandler @ 00618e20 */
                    /* try { // try from 00618360 to 007183d3 has its CatchHandler @ 00617f1c */
                      uVar10 = *(undefined8 *)pPVar2;
                      lVar16 = (long)*piVar21 * 0xc + lVar13 * 900;
                      *(undefined4 *)((long)__ptr + lVar16 + 0x18c) =
                           *(undefined4 *)((long)pvVar9 + lVar15 + 0x18c);
                      *(undefined8 *)((long)__ptr + lVar16 + 0x184) = uVar10;
                      *(undefined4 *)((long)__ptr + (long)*piVar21 * 4 + lVar13 * 900 + 0x304) =
                           *(undefined4 *)((long)pvVar9 + lVar12 * 4 + uVar26 * 900 + 0x304);
                      *piVar21 = *piVar21 + 1;
                      break;
                    }
                  }
                  lVar13 = lVar13 + 1;
                  pPVar32 = pPVar32 + 900;
                } while (lVar13 < iVar24);
                if ((int)lVar13 == iVar24) {
LAB_006183b8:
                  lVar13 = lVar12 * 0xc + uVar26 * 900;
                  puVar19 = (undefined4 *)((long)__ptr + (long)iVar24 * 900);
                    /* try { // try from 006183d4 to 007183e7 has its CatchHandler @ 00618e1c */
                  uVar22 = *(undefined8 *)((long)pvVar9 + lVar13 + 4);
                  puVar19[3] = *(undefined4 *)((long)pvVar9 + lVar13 + 0xc);
                  uVar33 = *(undefined4 *)((long)pvVar9 + lVar12 * 4 + uVar26 * 900 + 0x304);
                  uVar10 = *(undefined8 *)((long)pvVar9 + lVar13 + 0x184);
                    /* try { // try from 006183e8 to 007183fb has its CatchHandler @ 00618e80 */
                  uVar3 = *(undefined4 *)((long)pvVar9 + lVar13 + 0x18c);
                  *(undefined8 *)(puVar19 + 1) = uVar22;
                  *(undefined8 *)(puVar19 + 0x61) = uVar10;
                    /* try { // try from 006183fc to 0071840b has its CatchHandler @ 00618dec */
                  puVar19[0xc1] = uVar33;
                  iVar24 = iVar24 + 1;
                  puVar19[99] = uVar3;
                  *puVar19 = 1;
                }
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < *piVar17);
            if (0 < iVar24) {
                    /* try { // try from 0061842c to 0071842f has its CatchHandler @ 00618e80 */
                    /* try { // try from 00618430 to 00718487 has its CatchHandler @ 00617f1c */
              lVar13 = 0;
              lVar12 = 0;
              lVar15 = 0x304;
              do {
                iVar11 = *(int *)((long)__ptr + lVar12 * 900);
                local_88 = 0;
                local_80 = 0;
                local_98 = 0;
                local_90 = 0;
                if (0 < iVar11) {
                  lVar16 = 0;
                  local_88 = 0;
                  fVar35 = 0.0;
                  fVar36 = 0.0;
                  local_98 = 0;
                  lVar28 = lVar15;
                  lVar25 = lVar13;
                  do {
                    /* try { // try from 00618488 to 00718493 has its CatchHandler @ 00618d9c */
                    uVar10 = *(undefined8 *)((long)__ptr + lVar25 + 4);
                    iVar20 = *(int *)((long)__ptr + lVar28) * 3;
                    /* try { // try from 00618494 to 007184e7 has its CatchHandler @ 00617f1c */
                    fVar37 = *(float *)((long)__ptr + lVar25 + 0xc);
                    uVar22 = *(undefined8 *)((long)__ptr + lVar25 + 0x184);
                    fVar38 = *(float *)((long)__ptr + lVar25 + 0x18c);
                    if (uVar26 == *(ushort *)
                                   ((long)param_3 + (long)*(int *)((long)__ptr + lVar28) * 6)) {
                      iVar23 = 0;
LAB_006184e0:
                    /* try { // try from 006184e8 to 007184eb has its CatchHandler @ 00618d98 */
                      *(short *)((long)pvVar8 + (long)(iVar23 + iVar20) * 2) = (short)*param_1;
                    }
                    else {
                      if (uVar26 == *(ushort *)((long)param_3 + (long)iVar20 * 2 + 2)) {
                        iVar23 = 1;
                        goto LAB_006184e0;
                      }
                      if (uVar26 == *(ushort *)((long)param_3 + (long)iVar20 * 2 + 4)) {
                        iVar23 = 2;
                        goto LAB_006184e0;
                      }
                    }
                    /* try { // try from 006184ec to 007184fb has its CatchHandler @ 00617f1c */
                    lVar16 = lVar16 + 1;
                    local_88 = CONCAT44((float)((ulong)uVar10 >> 0x20) +
                                        (float)((ulong)local_88 >> 0x20),
                                        (float)uVar10 + (float)local_88);
                    fVar36 = fVar37 + fVar36;
                    local_98 = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                                        (float)((ulong)local_98 >> 0x20),
                                        (float)uVar22 + (float)local_98);
                    /* try { // try from 006184fc to 00718507 has its CatchHandler @ 00619098 */
                    fVar35 = fVar38 + fVar35;
                    lVar25 = lVar25 + 0xc;
                    lVar28 = lVar28 + 4;
                  } while (lVar16 < iVar11);
                  local_80 = (ulong)(uint)fVar36;
                  local_90 = (ulong)(uint)fVar35;
                }
                PVRTMatrixVec3NormalizeF((PVRTVECTOR3f *)&local_88,(PVRTVECTOR3f *)&local_88);
                PVRTMatrixVec3NormalizeF((PVRTVECTOR3f *)&local_98,(PVRTVECTOR3f *)&local_98);
                iVar11 = *param_1;
                if (param_4 * 3 <= iVar11) goto LAB_00618644;
                if (0xffff < iVar11) {
                  uVar10 = 2;
                  goto LAB_00618648;
                }
                    /* try { // try from 00618550 to 0071857f has its CatchHandler @ 00618b34 */
                memcpy((void *)(*param_2 + iVar11 * lVar34),
                       (void *)(param_5 + uVar26 * (long)param_6),(long)param_6);
                PVRTVertexWrite(*param_2 + *param_1 * lVar34 + (long)param_14,param_15,3,&local_88);
                    /* try { // try from 006185a0 to 007185c7 has its CatchHandler @ 00619098 */
                PVRTVertexWrite(*param_2 + *param_1 * lVar34 + (long)param_16,param_17,3,&local_98);
                lVar12 = lVar12 + 1;
                lVar13 = lVar13 + 900;
                lVar15 = lVar15 + 900;
                *param_1 = *param_1 + 1;
              } while (lVar12 < iVar24);
            }
          }
          uVar26 = uVar26 + 1;
        } while ((long)uVar26 < (long)param_4);
      }
      free(__ptr);
      free(pvVar9);
      pvVar9 = realloc((void *)*param_2,(long)*param_1 * (long)param_6);
      *param_2 = (long)pvVar9;
                    /* try { // try from 00618628 to 00718657 has its CatchHandler @ 006190a8 */
      memcpy(param_3,pvVar8,__size);
      free(pvVar8);
      uVar10 = 0;
    }
  }
LAB_00618648:
  if (*(long *)(lVar7 + 0x28) == local_78) {
                    /* try { // try from 0061867c to 00718683 has its CatchHandler @ 00618d94 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


