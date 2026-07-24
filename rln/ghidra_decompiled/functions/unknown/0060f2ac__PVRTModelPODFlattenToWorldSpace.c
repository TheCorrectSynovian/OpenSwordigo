/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060f2ac
 * Function: PVRTModelPODFlattenToWorldSpace
 * Signature: undefined __cdecl PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD * param_1, CPVRTModelPOD * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD&, CPVRTModelPOD&) */

void PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD *param_1,CPVRTModelPOD *param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  ulong uVar4;
  float fVar5;
  SPODNode *pSVar6;
  SPODNode *pSVar7;
  int *piVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  void *pvVar13;
  PVRTMATRIXf *__ptr;
  void *__dest;
  SPODMaterial *pSVar14;
  undefined8 uVar15;
  void *__src;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  float *pfVar20;
  undefined8 *puVar21;
  int iVar22;
  SPODMesh *pSVar23;
  int *piVar24;
  int *piVar25;
  CPODData *pCVar26;
  CPODData *pCVar27;
  CPODData *pCVar28;
  CPODData *pCVar29;
  int *piVar30;
  long lVar31;
  long lVar32;
  char *__s;
  undefined8 *puVar33;
  size_t sVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  PVRTMATRIXf *pPVar38;
  long lVar39;
  ulong uVar40;
  PVRTMATRIXf *pPVar41;
  float fVar42;
  long lVar43;
  int *piVar44;
  uint uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  PVRTMATRIXf *local_130;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar12 = tpidr_el0;
  local_78 = *(long *)(lVar12 + 0x28);
  CPVRTModelPOD::Destroy(param_2);
  uVar16 = *(uint *)(param_1 + 0x48);
  if (uVar16 != 0) {
    pvVar13 = calloc((ulong)uVar16 * 0x60,0x60);
    *(void **)(param_2 + 0x50) = pvVar13;
  }
  uVar45 = *(uint *)(param_1 + 0x4c);
                    /* try { // try from 0060f30c to 0070f313 has its CatchHandler @ 00610ea4 */
  if (uVar45 != 0) {
                    /* try { // try from 0060f314 to 0070f387 has its CatchHandler @ 0060f050 */
    pvVar13 = calloc((ulong)uVar45 * 0x158,0x158);
    *(void **)(param_2 + 0x40) = pvVar13;
  }
  *(uint *)(param_2 + 0x48) = uVar16;
  *(uint *)(param_2 + 0x4c) = uVar45;
  *(uint *)(param_2 + 0x38) = uVar45;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  uVar15 = DAT_00689bc8;
  uVar16 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar45 = 0;
                    /* try { // try from 0060f388 to 0070f393 has its CatchHandler @ 00610e54 */
                    /* try { // try from 0060f394 to 0070f403 has its CatchHandler @ 0060f050 */
    do {
      uVar35 = (ulong)uVar45;
      lVar17 = (uVar35 + (ulong)uVar45 * 2) * 0x20;
      pSVar6 = (SPODNode *)(*(long *)(param_1 + 0x50) + lVar17);
      lVar37 = *(long *)(param_1 + 0x40);
      lVar39 = (long)*(int *)pSVar6;
      pSVar23 = (SPODMesh *)(lVar37 + lVar39 * 0x158);
      if (*(long *)(pSVar23 + 0xe8) != 0) {
        CPVRTModelPOD::Destroy(param_2);
                    /* try { // try from 0060fe5c to 0070fe6f has its CatchHandler @ 00610b48 */
        uVar15 = 1;
        goto LAB_006102dc;
      }
      lVar43 = *(long *)(param_2 + 0x50);
      lVar36 = *(long *)(param_2 + 0x40);
      pSVar7 = (SPODNode *)(lVar43 + lVar17);
      PVRTModelPODCopyNode(pSVar6,pSVar7,*(int *)(param_1 + 0x78));
      lVar17 = lVar43 + uVar35 * 0x60;
      puVar33 = (undefined8 *)(lVar17 + 0x58);
      pvVar13 = (void *)*puVar33;
      *(undefined8 *)(lVar17 + 0x14) = 0xffffffff;
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        *puVar33 = 0;
      }
                    /* try { // try from 0060f404 to 0070f40b has its CatchHandler @ 00610e04 */
      puVar33 = (undefined8 *)(lVar43 + uVar35 * 0x60 + 0x28);
      pvVar13 = (void *)*puVar33;
                    /* try { // try from 0060f40c to 0070f48b has its CatchHandler @ 0060f050 */
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        *puVar33 = 0;
      }
      puVar33 = (undefined8 *)(lVar43 + uVar35 * 0x60 + 0x38);
      pvVar13 = (void *)*puVar33;
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        *puVar33 = 0;
      }
      puVar33 = (undefined8 *)(lVar43 + uVar35 * 0x60 + 0x48);
      pvVar13 = (void *)*puVar33;
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        *puVar33 = 0;
      }
      *(uint *)pSVar7 = uVar45;
      PVRTModelPODCopyMesh(pSVar23,(SPODMesh *)(lVar36 + (ulong)uVar45 * 0x158));
      puVar33 = (undefined8 *)(lVar36 + uVar35 * 0x158 + 0xf0);
      pvVar13 = (void *)*puVar33;
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
      *puVar33 = 0;
      puVar33 = (undefined8 *)(lVar36 + uVar35 * 0x158 + 0xf8);
      pvVar13 = (void *)*puVar33;
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
                    /* try { // try from 0060f48c to 0070f493 has its CatchHandler @ 00610db4 */
      *puVar33 = 0;
                    /* try { // try from 0060f494 to 0070f503 has its CatchHandler @ 0060f050 */
      lVar17 = lVar36 + uVar35 * 0x158;
      pvVar13 = *(void **)(lVar17 + 0x100);
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
      *(undefined8 *)(lVar17 + 0x100) = 0;
      lVar17 = lVar36 + uVar35 * 0x158;
      pvVar13 = *(void **)(lVar17 + 200);
      *(undefined4 *)(lVar17 + 0x10c) = 0;
      *(undefined8 *)(lVar17 + 0xb8) = uVar15;
      *(undefined4 *)(lVar17 + 0xc0) = 0;
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        *(undefined8 *)(lVar17 + 200) = 0;
      }
      lVar17 = lVar36 + uVar35 * 0x158;
      pvVar13 = *(void **)(lVar17 + 0xe0);
      *(undefined8 *)(lVar17 + 0xd0) = uVar15;
      *(undefined4 *)(lVar17 + 0xd8) = 0;
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        *(undefined8 *)(lVar17 + 0xe0) = 0;
      }
      lVar17 = lVar37 + lVar39 * 0x158;
      piVar44 = (int *)(lVar17 + 0x3c);
      if (*piVar44 != 0) {
                    /* try { // try from 0060f504 to 0070f50b has its CatchHandler @ 00610d64 */
        lVar43 = lVar36 + uVar35 * 0x158;
                    /* try { // try from 0060f50c to 0070f6a3 has its CatchHandler @ 0060f050 */
        *(undefined4 *)(lVar43 + 0x38) = 1;
        pvVar13 = realloc(*(void **)(lVar43 + 0x48),
                          (ulong)*(uint *)(lVar43 + 0x3c) * (ulong)*(uint *)pSVar23 * 4);
        *(void **)(lVar43 + 0x48) = pvVar13;
      }
      lVar43 = lVar37 + lVar39 * 0x158;
      piVar24 = (int *)(lVar43 + 0x54);
      if (*piVar24 != 0) {
        lVar31 = lVar36 + uVar35 * 0x158;
        *(undefined4 *)(lVar31 + 0x50) = 1;
        pvVar13 = realloc(*(void **)(lVar31 + 0x60),
                          (ulong)*(uint *)(lVar31 + 0x54) * (ulong)*(uint *)pSVar23 * 4);
        *(void **)(lVar31 + 0x60) = pvVar13;
      }
      lVar31 = lVar37 + lVar39 * 0x158;
      piVar25 = (int *)(lVar31 + 0x6c);
      if (*piVar25 != 0) {
        lVar32 = lVar36 + uVar35 * 0x158;
        *(undefined4 *)(lVar32 + 0x68) = 1;
        pvVar13 = realloc(*(void **)(lVar32 + 0x78),
                          (ulong)*(uint *)(lVar32 + 0x6c) * (ulong)*(uint *)pSVar23 * 4);
        *(void **)(lVar32 + 0x78) = pvVar13;
      }
      lVar32 = lVar37 + lVar39 * 0x158;
      pCVar26 = (CPODData *)(lVar17 + 0x38);
      piVar30 = (int *)(lVar32 + 0x84);
      pCVar27 = (CPODData *)(lVar43 + 0x50);
      pCVar28 = (CPODData *)(lVar31 + 0x68);
      pCVar29 = (CPODData *)(lVar32 + 0x80);
      if (*piVar30 != 0) {
        lVar17 = lVar36 + uVar35 * 0x158;
        *(undefined4 *)(lVar17 + 0x80) = 1;
        pvVar13 = realloc(*(void **)(lVar17 + 0x90),
                          (ulong)*(uint *)(lVar17 + 0x84) * (ulong)*(uint *)pSVar23 * 4);
        *(void **)(lVar17 + 0x90) = pvVar13;
      }
      lVar17 = lVar37 + lVar39 * 0x158;
      if (*(int *)(lVar17 + 0x10c) == 0) {
        pfVar20 = *(float **)(param_1 + 0x80);
        uVar18 = ((long)pSVar6 - *(long *)(param_1 + 0x50) >> 5) * -0x5555555555555555;
        if (*pfVar20 == 0.0) {
                    /* try { // try from 0060f6a4 to 0070f6ab has its CatchHandler @ 00611240 */
          puVar33 = (undefined8 *)(*(long *)(pfVar20 + 8) + (uVar18 & 0xffffffff) * 0x40);
LAB_0060fc30:
          uStack_98 = puVar33[7];
          local_a0 = puVar33[6];
          uStack_a8 = puVar33[5];
          local_b0 = puVar33[4];
                    /* try { // try from 0060fc3c to 0070fc43 has its CatchHandler @ 00610b50 */
          uStack_b8 = puVar33[3];
          local_c0 = puVar33[2];
                    /* try { // try from 0060fc44 to 0070fc8f has its CatchHandler @ 0060f050 */
          uStack_c8 = puVar33[1];
          local_d0 = *puVar33;
        }
        else {
          uVar40 = uVar18 & 0xffffffff;
          if (*pfVar20 == *(float *)(*(long *)(pfVar20 + 4) + (uVar18 & 0xffffffff) * 4)) {
            puVar33 = (undefined8 *)(*(long *)(pfVar20 + 6) + uVar40 * 0x40);
            goto LAB_0060fc30;
          }
          CPVRTModelPOD::GetWorldMatrixNoCache(param_1,(PVRTMATRIXf *)&local_d0,pSVar6);
          puVar19 = *(undefined4 **)(param_1 + 0x80);
          *(undefined4 *)(*(long *)(puVar19 + 4) + uVar40 * 4) = *puVar19;
                    /* try { // try from 0060fe28 to 0070fe2b has its CatchHandler @ 0061095c */
                    /* try { // try from 0060fe2c to 0070fe5b has its CatchHandler @ 0060f050 */
          puVar33 = (undefined8 *)(*(long *)(puVar19 + 6) + uVar40 * 0x40);
          puVar33[7] = uStack_98;
          puVar33[6] = local_a0;
          puVar33[5] = uStack_a8;
          puVar33[4] = local_b0;
          puVar33[3] = uStack_b8;
          puVar33[2] = local_c0;
          puVar33[1] = uStack_c8;
          *puVar33 = local_d0;
        }
        if (((*piVar24 != 0) || (*piVar25 != 0)) || (*piVar30 != 0)) {
          local_110 = local_d0;
          uStack_100 = local_c0;
          uStack_e8 = uStack_a8;
          local_f0 = local_b0;
          uStack_d8 = uStack_98;
          uStack_e0 = local_a0;
                    /* try { // try from 0060fc90 to 0070fca3 has its CatchHandler @ 00610b4c */
          uStack_f8 = uStack_b8 & 0xffffffff;
          uStack_108 = uStack_c8 & 0xffffffff;
          PVRTMatrixInverseF((PVRTMATRIXf *)&local_110,(PVRTMATRIXf *)&local_110);
          PVRTMatrixTransposeF((PVRTMATRIXf *)&local_110,(PVRTMATRIXf *)&local_110);
        }
        if (*(int *)pSVar23 != 0) {
          lVar36 = lVar36 + uVar35 * 0x158;
          lVar37 = lVar37 + lVar39 * 0x158;
          uVar16 = 0;
                    /* try { // try from 0060fcd0 to 0070fcdf has its CatchHandler @ 00610d2c */
                    /* try { // try from 0060fce0 to 0070fd4f has its CatchHandler @ 0060f050 */
          do {
            if (*piVar44 != 0) {
              PVRTVertexRead(&local_120,
                             *(long *)(lVar37 + 0x48) + (ulong)(*(int *)(lVar37 + 0x40) * uVar16),
                             *(undefined4 *)pCVar26);
              local_90 = CONCAT44((float)((ulong)local_d0 >> 0x20) * local_120 +
                                  (float)((ulong)local_c0 >> 0x20) * local_11c +
                                  (float)((ulong)local_b0 >> 0x20) * local_118 +
                                  (float)((ulong)local_a0 >> 0x20) * local_114,
                                  (float)local_d0 * local_120 + (float)local_c0 * local_11c +
                                  (float)local_b0 * local_118 + (float)local_a0 * local_114);
              uStack_88 = CONCAT44((float)(uStack_c8 >> 0x20) * local_120 +
                                   (float)(uStack_b8 >> 0x20) * local_11c +
                                   (float)((ulong)uStack_a8 >> 0x20) * local_118 +
                                   (float)((ulong)uStack_98 >> 0x20) * local_114,
                                   (float)uStack_c8 * local_120 + (float)uStack_b8 * local_11c +
                                   (float)uStack_a8 * local_118 + (float)uStack_98 * local_114);
                    /* try { // try from 0060fd50 to 0070fd5f has its CatchHandler @ 00610cdc */
              PVRTVertexWrite(*(long *)(lVar36 + 0x48) + (ulong)(*(int *)(lVar36 + 0x40) * uVar16),
                              *(undefined4 *)(lVar36 + 0x38),*piVar44,&local_90);
            }
            TransformCPODData(pCVar27,(CPODData *)(lVar36 + 0x50),uVar16,(PVRTMATRIXf *)&local_110,
                              (float *)0x0,(float *)0x0,0,true);
                    /* try { // try from 0060fd98 to 0070fdbf has its CatchHandler @ 0061096c */
            TransformCPODData(pCVar28,(CPODData *)(lVar36 + 0x68),uVar16,(PVRTMATRIXf *)&local_110,
                              (float *)0x0,(float *)0x0,0,true);
            TransformCPODData(pCVar29,(CPODData *)(lVar36 + 0x80),uVar16,(PVRTMATRIXf *)&local_110,
                              (float *)0x0,(float *)0x0,0,true);
            uVar16 = uVar16 + 1;
                    /* try { // try from 0060fde0 to 0070fe07 has its CatchHandler @ 00610cdc */
          } while (uVar16 < *(uint *)pSVar23);
        }
      }
      else {
        lVar43 = lVar37 + lVar39 * 0x158;
        iVar11 = *(int *)(lVar43 + 0x108);
        piVar44 = (int *)(lVar43 + 0x108);
        if (iVar11 == 0) {
          local_130 = (PVRTMATRIXf *)0x0;
                    /* try { // try from 0060f6b4 to 0070f6bb has its CatchHandler @ 006111d8 */
          __ptr = (PVRTMATRIXf *)0x0;
        }
        else {
          local_130 = calloc((long)iVar11 << 6,0x40);
          iVar11 = *piVar44;
          if (iVar11 == 0) {
            __ptr = (PVRTMATRIXf *)0x0;
          }
          else {
            __ptr = calloc((long)iVar11 << 6,0x40);
          }
        }
        puVar2 = (uint *)(lVar17 + 0x10c);
        if (*(uint *)pSVar23 == 0) {
          pvVar13 = (void *)0x0;
        }
        else {
          pvVar13 = calloc((ulong)*(uint *)pSVar23,1);
        }
        uVar18 = (ulong)*puVar2;
        if (*puVar2 != 0) {
          lVar37 = lVar37 + lVar39 * 0x158;
          uVar40 = 0;
                    /* try { // try from 0060f740 to 0070f767 has its CatchHandler @ 00611158 */
                    /* try { // try from 0060f768 to 0070f803 has its CatchHandler @ 0060f050 */
          lVar36 = lVar36 + uVar35 * 0x158;
          fVar42 = 0.0;
          piVar3 = (int *)(lVar37 + 0xbc);
          uVar35 = 0;
          do {
            uVar16 = *(uint *)(*(long *)(lVar37 + 0xf8) + uVar35 * 4);
            if (uVar16 != 0) {
              uVar18 = 0;
              pPVar38 = __ptr;
              pPVar41 = local_130;
              do {
                    /* try { // try from 0060f804 to 0070f813 has its CatchHandler @ 006111cc */
                CPVRTModelPOD::GetBoneWorldMatrix
                          (param_1,pPVar41,pSVar6,
                           (SPODNode *)
                           (*(long *)(param_1 + 0x50) +
                           (long)*(int *)(*(long *)(lVar37 + 0xf0) +
                                         (ulong)(uint)((int)uVar18 + (int)uVar35 * *piVar44) * 4) *
                           0x60));
                    /* try { // try from 0060f818 to 0070f81f has its CatchHandler @ 00611164 */
                    /* try { // try from 0060f820 to 0070f84b has its CatchHandler @ 0060f050 */
                if (((*piVar24 != 0) || (*piVar25 != 0)) || (*piVar30 != 0)) {
                  uVar46 = *(undefined8 *)(pPVar41 + 0x10);
                  *(undefined8 *)(pPVar38 + 0x18) = *(undefined8 *)(pPVar41 + 0x18);
                  *(undefined8 *)(pPVar38 + 0x10) = uVar46;
                  uVar46 = *(undefined8 *)pPVar41;
                  *(undefined8 *)(pPVar38 + 8) = *(undefined8 *)(pPVar41 + 8);
                  *(undefined8 *)pPVar38 = uVar46;
                  uVar46 = *(undefined8 *)(pPVar41 + 0x30);
                    /* try { // try from 0060f84c to 0070f84f has its CatchHandler @ 00610c50 */
                  *(undefined8 *)(pPVar38 + 0x38) = *(undefined8 *)(pPVar41 + 0x38);
                  *(undefined8 *)(pPVar38 + 0x30) = uVar46;
                    /* try { // try from 0060f850 to 0070f8c3 has its CatchHandler @ 0060f050 */
                  uVar47 = *(undefined8 *)(pPVar41 + 0x28);
                  uVar46 = *(undefined8 *)(pPVar41 + 0x20);
                  *(undefined4 *)(pPVar38 + 0x1c) = 0;
                  *(undefined4 *)(pPVar38 + 0xc) = 0;
                  *(undefined8 *)(pPVar38 + 0x34) = 0;
                  *(undefined8 *)(pPVar38 + 0x28) = uVar47;
                  *(undefined8 *)(pPVar38 + 0x20) = uVar46;
                  *(undefined8 *)(pPVar38 + 0x2c) = 0;
                  PVRTMatrixInverseF(pPVar38,pPVar38);
                  PVRTMatrixTransposeF(pPVar38,pPVar38);
                }
                uVar18 = uVar18 + 1;
                pPVar41 = pPVar41 + 0x40;
                pPVar38 = pPVar38 + 0x40;
              } while (uVar16 != uVar18);
              uVar18 = (ulong)*puVar2;
            }
            uVar4 = uVar35 + 1;
                    /* try { // try from 0060f8c4 to 0070f8d7 has its CatchHandler @ 00610c4c */
            iVar11 = *(int *)(*(long *)(lVar37 + 0x100) + uVar35 * 4);
            piVar8 = (int *)(*(long *)(lVar37 + 0x100) + uVar4 * 4);
            if (uVar18 <= uVar4) {
              piVar8 = (int *)(lVar37 + 4);
            }
            iVar9 = *piVar8;
            if (*(int *)(lVar37 + 0x30) == 0) {
              fVar42 = (float)(iVar11 * 3);
              fVar5 = fVar42;
              if ((uint)fVar42 < (uint)(iVar9 * 3)) {
                do {
                  lVar17 = *(long *)(lVar37 + 0x20);
                  if (lVar17 == 0) {
                    cVar10 = *(char *)((long)pvVar13 + (ulong)(uint)fVar5);
                    local_120 = fVar5;
                  }
                  else {
                    PVRTVertexRead(&local_120,
                                   lVar17 + (ulong)(uint)(*(int *)(lVar37 + 0x18) * (int)fVar5),
                                   *(undefined4 *)(lVar37 + 0x10));
                    cVar10 = *(char *)((long)pvVar13 + (ulong)(uint)local_120);
                  }
                  if (cVar10 == '\0') {
                    /* try { // try from 0060fad0 to 0070faff has its CatchHandler @ 006109c0 */
                    PVRTVertexRead(&local_110,
                                   *(long *)(lVar37 + 200) +
                                   (ulong)(uint)(*(int *)(lVar37 + 0xc0) * (int)local_120),
                                   *(undefined4 *)(lVar37 + 0xb8),*piVar3);
                    /* try { // try from 0060fb00 to 0070fc3b has its CatchHandler @ 0060f050 */
                    PVRTVertexRead(&local_90,
                                   *(long *)(lVar37 + 0xe0) +
                                   (ulong)(uint)(*(int *)(lVar37 + 0xd8) * (int)local_120),
                                   *(undefined4 *)(lVar37 + 0xd0),*(undefined4 *)(lVar37 + 0xd4));
                    TransformCPODData(pCVar26,(CPODData *)(lVar36 + 0x38),(int)local_120,local_130,
                                      (float *)&local_110,(float *)&local_90,*piVar3,false);
                    TransformCPODData(pCVar27,(CPODData *)(lVar36 + 0x50),(int)local_120,__ptr,
                                      (float *)&local_110,(float *)&local_90,*piVar3,true);
                    TransformCPODData(pCVar28,(CPODData *)(lVar36 + 0x68),(int)local_120,__ptr,
                                      (float *)&local_110,(float *)&local_90,*piVar3,true);
                    TransformCPODData(pCVar29,(CPODData *)(lVar36 + 0x80),(int)local_120,__ptr,
                                      (float *)&local_110,(float *)&local_90,*piVar3,true);
                    *(undefined1 *)((long)pvVar13 + (ulong)(uint)local_120) = 1;
                  }
                  fVar5 = (float)((int)fVar5 + 1);
                } while ((float)(iVar9 * 3) != fVar5);
              }
            }
            else {
                    /* try { // try from 0060f8d8 to 0070f8eb has its CatchHandler @ 00610c9c */
              if (iVar9 != iVar11) {
                lVar17 = *(long *)(lVar37 + 0x28);
                uVar16 = 0;
                do {
                  iVar22 = *(int *)(lVar17 + uVar40 * 4);
                    /* try { // try from 0060f8ec to 0070f8fb has its CatchHandler @ 00610c1c */
                  iVar1 = (int)fVar42 + 2;
                  fVar5 = (float)(iVar1 + iVar22);
                  if ((uint)fVar42 < (uint)fVar5) {
                    do {
                      lVar17 = *(long *)(lVar37 + 0x20);
                    /* try { // try from 0060f91c to 0070f91f has its CatchHandler @ 00610c9c */
                      if (lVar17 == 0) {
                        cVar10 = *(char *)((long)pvVar13 + (ulong)(uint)fVar42);
                        local_120 = fVar42;
                      }
                      else {
                        PVRTVertexRead(&local_120,
                                       lVar17 + (ulong)(uint)(*(int *)(lVar37 + 0x18) * (int)fVar42)
                                       ,*(undefined4 *)(lVar37 + 0x10));
                        cVar10 = *(char *)((long)pvVar13 + (ulong)(uint)local_120);
                      }
                      if (cVar10 == '\0') {
                    /* try { // try from 0060f95c to 0070f963 has its CatchHandler @ 00610bf4 */
                    /* try { // try from 0060f964 to 0070f9ab has its CatchHandler @ 0060f050 */
                        PVRTVertexRead(&local_110,
                                       *(long *)(lVar37 + 200) +
                                       (ulong)(uint)(*(int *)(lVar37 + 0xc0) * (int)local_120),
                                       *(undefined4 *)(lVar37 + 0xb8),*piVar3);
                        PVRTVertexRead(&local_90,
                                       *(long *)(lVar37 + 0xe0) +
                                       (ulong)(uint)(*(int *)(lVar37 + 0xd8) * (int)local_120),
                                       *(undefined4 *)(lVar37 + 0xd0),*(undefined4 *)(lVar37 + 0xd4)
                                      );
                    /* try { // try from 0060f9ac to 0070f9b7 has its CatchHandler @ 00610ba4 */
                    /* try { // try from 0060f9b8 to 0070fa0b has its CatchHandler @ 0060f050 */
                        TransformCPODData(pCVar26,(CPODData *)(lVar36 + 0x38),(int)local_120,
                                          local_130,(float *)&local_110,(float *)&local_90,*piVar3,
                                          false);
                        TransformCPODData(pCVar27,(CPODData *)(lVar36 + 0x50),(int)local_120,__ptr,
                                          (float *)&local_110,(float *)&local_90,*piVar3,true);
                        TransformCPODData(pCVar28,(CPODData *)(lVar36 + 0x68),(int)local_120,__ptr,
                                          (float *)&local_110,(float *)&local_90,*piVar3,true);
                    /* try { // try from 0060fa0c to 0070fa0f has its CatchHandler @ 00610ba0 */
                    /* try { // try from 0060fa10 to 0070facf has its CatchHandler @ 0060f050 */
                        TransformCPODData(pCVar29,(CPODData *)(lVar36 + 0x80),(int)local_120,__ptr,
                                          (float *)&local_110,(float *)&local_90,*piVar3,true);
                        *(undefined1 *)((long)pvVar13 + (ulong)(uint)local_120) = 1;
                      }
                      lVar17 = *(long *)(lVar37 + 0x28);
                      fVar42 = (float)((int)fVar42 + 1);
                      iVar22 = *(int *)(lVar17 + uVar40 * 4);
                      fVar5 = (float)(iVar1 + iVar22);
                    } while ((uint)fVar42 < (uint)fVar5);
                  }
                  fVar42 = fVar5;
                  uVar16 = iVar22 + uVar16;
                  uVar40 = (ulong)((int)uVar40 + 1);
                } while (uVar16 < (uint)(iVar9 - iVar11));
              }
            }
            uVar18 = (ulong)*puVar2;
            uVar35 = uVar4;
          } while (uVar4 < uVar18);
        }
        if (local_130 != (PVRTMATRIXf *)0x0) {
          free(local_130);
        }
        if (__ptr != (PVRTMATRIXf *)0x0) {
          free(__ptr);
        }
        if (pvVar13 != (void *)0x0) {
          free(pvVar13);
        }
      }
      uVar16 = *(uint *)(param_1 + 0x4c);
      uVar45 = uVar45 + 1;
    } while (uVar45 < uVar16);
  }
                    /* try { // try from 0060fe70 to 0070fe83 has its CatchHandler @ 00610c64 */
  if (uVar16 < *(uint *)(param_1 + 0x48)) {
    uVar35 = (ulong)uVar16;
    lVar37 = uVar35 << 6;
                    /* try { // try from 0060fe84 to 0070fe8f has its CatchHandler @ 00610b18 */
    lVar17 = (uVar35 + (ulong)uVar16 * 2) * 0x20;
    do {
      PVRTModelPODCopyNode
                ((SPODNode *)(*(long *)(param_1 + 0x50) + lVar17),
                 (SPODNode *)(*(long *)(param_2 + 0x50) + lVar17),*(int *)(param_1 + 0x78));
      lVar39 = *(long *)(param_2 + 0x50);
      pvVar13 = *(void **)(lVar39 + lVar17 + 0x58);
      *(undefined8 *)(lVar39 + lVar17 + 0x14) = 0xffffffff;
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        lVar39 = *(long *)(param_2 + 0x50);
        *(undefined8 *)(lVar39 + lVar17 + 0x58) = 0;
      }
      pvVar13 = *(void **)(lVar39 + lVar17 + 0x50);
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        lVar39 = *(long *)(param_2 + 0x50);
        *(undefined8 *)(lVar39 + lVar17 + 0x50) = 0;
      }
      pvVar13 = *(void **)(lVar39 + lVar17 + 0x28);
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        lVar39 = *(long *)(param_2 + 0x50);
        *(undefined8 *)(lVar39 + lVar17 + 0x28) = 0;
      }
      pvVar13 = *(void **)(lVar39 + lVar17 + 0x20);
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        lVar39 = *(long *)(param_2 + 0x50);
        *(undefined8 *)(lVar39 + lVar17 + 0x20) = 0;
      }
      pvVar13 = *(void **)(lVar39 + lVar17 + 0x38);
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        lVar39 = *(long *)(param_2 + 0x50);
        *(undefined8 *)(lVar39 + lVar17 + 0x38) = 0;
      }
      pvVar13 = *(void **)(lVar39 + lVar17 + 0x30);
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        lVar39 = *(long *)(param_2 + 0x50);
        *(undefined8 *)(lVar39 + lVar17 + 0x30) = 0;
      }
      pvVar13 = *(void **)(lVar39 + lVar17 + 0x48);
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        lVar39 = *(long *)(param_2 + 0x50);
        *(undefined8 *)(lVar39 + lVar17 + 0x48) = 0;
      }
      pvVar13 = *(void **)(lVar39 + lVar17 + 0x40);
      if (pvVar13 != (void *)0x0) {
        free(pvVar13);
        lVar39 = *(long *)(param_2 + 0x50);
        *(undefined8 *)(lVar39 + lVar17 + 0x40) = 0;
      }
      pfVar20 = *(float **)(param_1 + 0x80);
      if (*pfVar20 == 0.0) {
        lVar36 = *(long *)(pfVar20 + 8);
LAB_00610010:
        puVar33 = (undefined8 *)(lVar36 + lVar37);
        uStack_98 = puVar33[7];
        local_a0 = puVar33[6];
        uStack_a8 = puVar33[5];
        local_b0 = puVar33[4];
        uStack_b8 = puVar33[3];
        local_c0 = puVar33[2];
        uStack_c8 = puVar33[1];
        local_d0 = *puVar33;
      }
      else {
        if (*pfVar20 == *(float *)(*(long *)(pfVar20 + 4) + uVar35 * 4)) {
          lVar36 = *(long *)(pfVar20 + 6);
          goto LAB_00610010;
        }
        CPVRTModelPOD::GetWorldMatrixNoCache
                  (param_1,(PVRTMATRIXf *)&local_d0,(SPODNode *)(*(long *)(param_1 + 0x50) + lVar17)
                  );
        puVar19 = *(undefined4 **)(param_1 + 0x80);
                    /* try { // try from 0060feb0 to 0070feb3 has its CatchHandler @ 00610c64 */
        *(undefined4 *)(*(long *)(puVar19 + 4) + uVar35 * 4) = *puVar19;
                    /* try { // try from 0060feb4 to 0071004f has its CatchHandler @ 0060f050 */
        puVar33 = (undefined8 *)(*(long *)(puVar19 + 6) + lVar37);
        puVar33[7] = uStack_98;
        puVar33[6] = local_a0;
        puVar33[5] = uStack_a8;
        puVar33[4] = local_b0;
        puVar33[3] = uStack_b8;
        puVar33[2] = local_c0;
        puVar33[1] = uStack_c8;
        *puVar33 = local_d0;
        lVar39 = *(long *)(param_2 + 0x50);
      }
      pvVar13 = calloc(0x40,4);
      *(void **)(lVar39 + lVar17 + 0x58) = pvVar13;
      if (pvVar13 != (void *)0x0) {
                    /* try { // try from 00610050 to 00710063 has its CatchHandler @ 00610adc */
        puVar33 = *(undefined8 **)(*(long *)(param_2 + 0x50) + lVar17 + 0x58);
        puVar33[7] = uStack_98;
        puVar33[6] = local_a0;
                    /* try { // try from 00610064 to 007100bf has its CatchHandler @ 0060f050 */
        puVar33[5] = uStack_a8;
        puVar33[4] = local_b0;
        puVar33[3] = uStack_b8;
        puVar33[2] = local_c0;
        puVar33[1] = uStack_c8;
        *puVar33 = local_d0;
      }
      uVar35 = uVar35 + 1;
      lVar17 = lVar17 + 0x60;
      lVar37 = lVar37 + 0x40;
    } while (uVar35 < *(uint *)(param_1 + 0x48));
  }
  uVar16 = *(uint *)(param_1 + 0x18);
  if (uVar16 != 0) {
    pvVar13 = calloc((ulong)uVar16 * 0x18,0x18);
    *(void **)(param_2 + 0x20) = pvVar13;
    if ((pvVar13 != (void *)0x0) &&
       (*(uint *)(param_2 + 0x18) = uVar16, *(int *)(param_1 + 0x18) != 0)) {
                    /* try { // try from 006100c0 to 007100c7 has its CatchHandler @ 00610a8c */
      lVar17 = 0;
      uVar35 = 1;
                    /* try { // try from 006100c8 to 00710143 has its CatchHandler @ 0060f050 */
      do {
        lVar37 = *(long *)(param_1 + 0x20);
        puVar33 = (undefined8 *)((long)pvVar13 + lVar17);
        iVar11 = *(int *)(param_1 + 0x78);
        puVar21 = (undefined8 *)(lVar37 + lVar17);
        uVar46 = puVar21[1];
        uVar15 = *puVar21;
        puVar33[2] = 0;
        puVar33[1] = uVar46;
        *puVar33 = uVar15;
        __src = (void *)puVar21[2];
        if (__src != (void *)0x0) {
          sVar34 = (long)iVar11 << 2;
          if (iVar11 == 0) {
            __dest = (void *)0x0;
          }
          else {
            __dest = calloc(sVar34,4);
            *(void **)((long)pvVar13 + lVar17 + 0x10) = __dest;
            if (__dest == (void *)0x0) goto LAB_00610134;
            __src = *(void **)(lVar37 + lVar17 + 0x10);
          }
          memcpy(__dest,__src,sVar34);
        }
LAB_00610134:
        if (*(uint *)(param_1 + 0x18) <= uVar35) break;
        pvVar13 = *(void **)(param_2 + 0x20);
        lVar17 = lVar17 + 0x18;
        uVar35 = uVar35 + 1;
      } while( true );
    }
  }
  uVar16 = *(uint *)(param_1 + 0x28);
                    /* try { // try from 00610144 to 0071015b has its CatchHandler @ 00610a88 */
  if (uVar16 != 0) {
    puVar33 = calloc((ulong)uVar16 * 0x28,0x28);
    *(undefined8 **)(param_2 + 0x30) = puVar33;
    if (puVar33 != (undefined8 *)0x0) {
                    /* try { // try from 00610160 to 00710173 has its CatchHandler @ 00610a14 */
      *(uint *)(param_2 + 0x28) = uVar16;
      puVar21 = *(undefined8 **)(param_1 + 0x30);
      puVar33[4] = puVar21[4];
      uVar15 = puVar21[2];
      puVar33[3] = puVar21[3];
      puVar33[2] = uVar15;
                    /* try { // try from 0061017c to 0071018f has its CatchHandler @ 00610a10 */
      uVar15 = *puVar21;
      puVar33[1] = puVar21[1];
      *puVar33 = uVar15;
      if (1 < uVar16) {
        uVar35 = 1;
        lVar17 = 0x28;
        do {
          uVar35 = uVar35 + 1;
          puVar33 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar17);
          puVar21 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar17);
          lVar17 = lVar17 + 0x28;
          puVar21[4] = puVar33[4];
          uVar15 = puVar33[2];
          puVar21[3] = puVar33[3];
          puVar21[2] = uVar15;
          uVar15 = *puVar33;
          puVar21[1] = puVar33[1];
          *puVar21 = uVar15;
        } while (uVar35 < *(uint *)(param_2 + 0x28));
      }
    }
  }
  uVar16 = *(uint *)(param_1 + 0x58);
  uVar35 = (ulong)uVar16;
  if (uVar16 != 0) {
                    /* try { // try from 006101d4 to 007101db has its CatchHandler @ 006109bc */
    pvVar13 = calloc(uVar35 << 3,8);
    *(void **)(param_2 + 0x60) = pvVar13;
    if (pvVar13 != (void *)0x0) {
      uVar18 = 0;
      *(uint *)(param_2 + 0x58) = uVar16;
      do {
        lVar17 = *(long *)(param_1 + 0x60);
        __s = *(char **)(lVar17 + uVar18 * 8);
        if (__s != (char *)0x0) {
          lVar37 = *(long *)(param_2 + 0x60);
          sVar34 = strlen(__s);
          if (sVar34 + 1 == 0) {
            pvVar13 = *(void **)(lVar37 + uVar18 * 8);
          }
          else {
            pvVar13 = calloc(sVar34 + 1,1);
            *(void **)(lVar37 + uVar18 * 8) = pvVar13;
            if (pvVar13 == (void *)0x0) goto LAB_0061024c;
            __s = *(char **)(lVar17 + uVar18 * 8);
          }
          sVar34 = strlen(__s);
          memcpy(pvVar13,__s,sVar34 + 1);
          uVar35 = (ulong)*(uint *)(param_2 + 0x58);
        }
LAB_0061024c:
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar35);
    }
  }
  uVar16 = *(uint *)(param_1 + 0x68);
  if (uVar16 != 0) {
    pSVar14 = calloc((ulong)uVar16 * 0xb0,0xb0);
    *(SPODMaterial **)(param_2 + 0x70) = pSVar14;
    if (((pSVar14 != (SPODMaterial *)0x0) &&
        (*(uint *)(param_2 + 0x68) = uVar16, *(int *)(param_1 + 0x68) != 0)) &&
       (PVRTModelPODCopyMaterial(*(SPODMaterial **)(param_1 + 0x70),pSVar14),
       1 < *(uint *)(param_1 + 0x68))) {
      uVar35 = 1;
      lVar17 = 0xb0;
      do {
        PVRTModelPODCopyMaterial
                  ((SPODMaterial *)(*(long *)(param_1 + 0x70) + lVar17),
                   (SPODMaterial *)(*(long *)(param_2 + 0x70) + lVar17));
        uVar35 = uVar35 + 1;
        lVar17 = lVar17 + 0xb0;
      } while (uVar35 < *(uint *)(param_1 + 0x68));
    }
  }
  CPVRTModelPOD::InitImpl(param_2);
  uVar15 = 0;
LAB_006102dc:
  if (*(long *)(lVar12 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}


