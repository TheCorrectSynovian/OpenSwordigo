/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060e6a4
 * Function: PVRTModelPODToggleFixedPoint
 * Signature: undefined __cdecl PVRTModelPODToggleFixedPoint(SPODScene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x0060eef0) */
/* WARNING: Removing unreachable block (ram,0x0060f01c) */
/* WARNING: Removing unreachable block (ram,0x0060ee50) */
/* WARNING: Removing unreachable block (ram,0x0060ea4c) */
/* WARNING: Removing unreachable block (ram,0x0060e79c) */
/* WARNING: Removing unreachable block (ram,0x0060e964) */
/* WARNING: Removing unreachable block (ram,0x0060e8c4) */
/* WARNING: Removing unreachable block (ram,0x0060e7e0) */
/* WARNING: Removing unreachable block (ram,0x0060e880) */
/* WARNING: Removing unreachable block (ram,0x0060ea90) */
/* WARNING: Removing unreachable block (ram,0x0060e9ac) */
/* WARNING: Removing unreachable block (ram,0x0060ed6c) */
/* WARNING: Removing unreachable block (ram,0x0060ef38) */
/* WARNING: Removing unreachable block (ram,0x0060ed28) */
/* WARNING: Removing unreachable block (ram,0x0060ee0c) */
/* WARNING: Removing unreachable block (ram,0x0060efd8) */
/* PVRTModelPODToggleFixedPoint(SPODScene&) */

void PVRTModelPODToggleFixedPoint(SPODScene *param_1)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar25;
  
  fVar15 = DAT_0069b3ec;
  uVar17 = *(uint *)(param_1 + 0x18);
  if (((byte)param_1[0x7c] & 1) == 0) {
    if (uVar17 != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      uVar3 = 0;
      do {
        lVar7 = lVar4 + uVar3 * 0x18;
                    /* catch() { ... } // from try @ 0060e614 with catch @ 0060e6c4 */
                    /* catch() { ... } // from try @ 0060e59c with catch @ 0060e6c8 */
                    /* catch() { ... } // from try @ 0060e64c with catch @ 0060e6cc */
        uVar18 = NEON_fcvtzs(*(undefined8 *)(lVar7 + 4),0x10,4);
        *(undefined8 *)(lVar7 + 4) = uVar18;
                    /* catch() { ... } // from try @ 0060e5e4 with catch @ 0060e6dc */
        *(int *)(lVar7 + 0xc) = (int)(*(float *)(lVar7 + 0xc) * 65536.0);
        if ((*(long *)(lVar7 + 0x10) != 0) && (iVar25 = *(int *)(param_1 + 0x78), iVar25 != 0)) {
          pfVar5 = (float *)(*(long *)(lVar7 + 0x10) + (ulong)(iVar25 - 1) * 4);
          do {
            iVar25 = iVar25 + -1;
                    /* try { // try from 0060e700 to 0070e7bf has its CatchHandler @ 0060e7c8 */
            *pfVar5 = (float)(int)(*pfVar5 * 65536.0);
            pfVar5 = pfVar5 + -1;
          } while (iVar25 != 0);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar3 = 0;
      pauVar6 = (undefined1 (*) [16])(*(long *)(param_1 + 0x30) + 0x14);
      do {
                    /* catch() { ... } // from try @ 0060e574 with catch @ 0060e72c */
        fVar15 = *(float *)(pauVar6[-1] + 8);
        fVar21 = *(float *)pauVar6[1];
        uVar3 = uVar3 + 1;
        auVar19 = *pauVar6;
        uVar18 = NEON_fcvtzs(*(undefined8 *)pauVar6[-1],0x10,4);
        *(undefined8 *)pauVar6[-1] = uVar18;
        auVar19 = NEON_fcvtzs(auVar19,0x10,4);
        *(int *)(pauVar6[-1] + 8) = (int)(fVar15 * 65536.0);
        *(long *)(*pauVar6 + 8) = auVar19._8_8_;
        *(long *)*pauVar6 = auVar19._0_8_;
        *(int *)pauVar6[1] = (int)(fVar21 * 65536.0);
        pauVar6 = (undefined1 (*) [16])(pauVar6[2] + 8);
      } while (uVar3 < *(uint *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      uVar3 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x50);
        puVar8 = (uint *)(lVar4 + uVar3 * 0x60 + 0x18);
        uVar17 = *puVar8;
        if ((uVar17 & 1) == 0) {
          iVar25 = 3;
LAB_0060e848:
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x28);
          if (lVar7 != 0) {
            pfVar5 = (float *)(lVar7 + (ulong)(iVar25 - 1) * 4);
            do {
              iVar25 = iVar25 + -1;
                    /* try { // try from 0060e868 to 0070e88f has its CatchHandler @ 0060e898 */
              *pfVar5 = (float)(int)(*pfVar5 * 65536.0);
              pfVar5 = pfVar5 + -1;
            } while (iVar25 != 0);
            uVar17 = *puVar8;
          }
        }
        else {
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x20);
          uVar16 = *(uint *)(param_1 + 0x78);
          uVar9 = (ulong)uVar16;
          if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 0060e700 with catch @ 0060e7c8 */
            iVar25 = uVar16 * 3;
          }
          else {
            if (uVar16 == 0) {
              iVar25 = 3;
              goto LAB_0060e848;
            }
            if (uVar16 < 8) {
              uVar12 = 0;
                    /* try { // try from 0060e7c0 to 0070e7df has its CatchHandler @ 0060e4d0 */
              uVar16 = 0;
LAB_0060e824:
              lVar10 = uVar9 - uVar12;
              puVar11 = (uint *)(lVar7 + uVar12 * 4);
              uVar22 = uVar16;
              do {
                    /* try { // try from 0060e82c to 0070e837 has its CatchHandler @ 0060e844 */
                uVar16 = *puVar11;
                if (*puVar11 <= uVar22) {
                  uVar16 = uVar22;
                }
                lVar10 = lVar10 + -1;
                puVar11 = puVar11 + 1;
                uVar22 = uVar16;
              } while (lVar10 != 0);
            }
            else {
              uVar12 = uVar9 & 0xfffffff8;
              pauVar6 = (undefined1 (*) [16])(lVar7 + 0x10);
              auVar19 = ZEXT816(0);
              auVar23 = ZEXT816(0);
              uVar13 = uVar12;
              do {
                    /* try { // try from 0060e7f8 to 0070e7ff has its CatchHandler @ 0060e89c */
                pauVar1 = pauVar6 + -1;
                auVar24 = *pauVar6;
                uVar13 = uVar13 - 8;
                pauVar6 = pauVar6 + 2;
                auVar19 = NEON_umax(auVar19,*pauVar1,4);
                auVar23 = NEON_umax(auVar23,auVar24,4);
              } while (uVar13 != 0);
              auVar19 = NEON_umax(auVar19,auVar23,4);
              uVar16 = NEON_umaxv(auVar19,4);
              if (uVar12 != uVar9) goto LAB_0060e824;
            }
            iVar25 = uVar16 + 3;
                    /* catch() { ... } // from try @ 0060e82c with catch @ 0060e844 */
          }
                    /* catch() { ... } // from try @ 0060e544 with catch @ 0060e7cc */
          if (iVar25 != 0) goto LAB_0060e848;
        }
        if ((uVar17 >> 1 & 1) == 0) {
          iVar25 = 4;
LAB_0060e92c:
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x38);
          if (lVar7 != 0) {
            pfVar5 = (float *)(lVar7 + (ulong)(iVar25 - 1) * 4);
            do {
              iVar25 = iVar25 + -1;
              *pfVar5 = (float)(int)(*pfVar5 * 65536.0);
              pfVar5 = pfVar5 + -1;
            } while (iVar25 != 0);
            uVar17 = *puVar8;
          }
        }
        else {
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x30);
          uVar16 = *(uint *)(param_1 + 0x78);
          uVar9 = (ulong)uVar16;
                    /* try { // try from 0060e890 to 0070e8ab has its CatchHandler @ 0060e7e0 */
          if (lVar7 == 0) {
                    /* try { // try from 0060e8ac to 0070e8b7 has its CatchHandler @ 0060e8b8 */
            iVar25 = uVar16 << 2;
          }
          else {
            if (uVar16 == 0) {
                    /* catch() { ... } // from try @ 0060e8ac with catch @ 0060e8b8 */
                    /* try { // try from 0060e8bc to 0070e8bf has its CatchHandler @ 0060e8c4 */
              iVar25 = 4;
              goto LAB_0060e92c;
            }
                    /* catch() { ... } // from try @ 0060e868 with catch @ 0060e898 */
                    /* catch() { ... } // from try @ 0060e7f8 with catch @ 0060e89c */
            if (uVar16 < 8) {
              uVar12 = 0;
              uVar16 = 0;
LAB_0060e908:
              lVar10 = uVar9 - uVar12;
              puVar11 = (uint *)(lVar7 + uVar12 * 4);
              uVar22 = uVar16;
              do {
                uVar16 = *puVar11;
                    /* catch() { ... } // from try @ 0060ea64 with catch @ 0060e918
                       catch() { ... } // from try @ 0060eb84 with catch @ 0060e918 */
                if (*puVar11 <= uVar22) {
                  uVar16 = uVar22;
                }
                lVar10 = lVar10 + -1;
                puVar11 = puVar11 + 1;
                uVar22 = uVar16;
              } while (lVar10 != 0);
            }
            else {
              uVar12 = uVar9 & 0xfffffff8;
              pauVar6 = (undefined1 (*) [16])(lVar7 + 0x10);
              auVar19 = ZEXT816(0);
              auVar23 = ZEXT816(0);
              uVar13 = uVar12;
              do {
                pauVar1 = pauVar6 + -1;
                auVar24 = *pauVar6;
                uVar13 = uVar13 - 8;
                pauVar6 = pauVar6 + 2;
                auVar19 = NEON_umax(auVar19,*pauVar1,4);
                auVar23 = NEON_umax(auVar23,auVar24,4);
              } while (uVar13 != 0);
              auVar19 = NEON_umax(auVar19,auVar23,4);
              uVar16 = NEON_umaxv(auVar19,4);
              if (uVar12 != uVar9) goto LAB_0060e908;
            }
            iVar25 = uVar16 + 4;
          }
          if (iVar25 != 0) goto LAB_0060e92c;
        }
        if ((uVar17 >> 2 & 1) == 0) {
          iVar25 = 7;
LAB_0060ea14:
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x48);
          if (lVar7 != 0) {
            pfVar5 = (float *)(lVar7 + (ulong)(iVar25 - 1) * 4);
            do {
              iVar25 = iVar25 + -1;
              *pfVar5 = (float)(int)(*pfVar5 * 65536.0);
              pfVar5 = pfVar5 + -1;
            } while (iVar25 != 0);
                    /* try { // try from 0060ea3c to 0070ea63 has its CatchHandler @ 0060ea78 */
            uVar17 = *puVar8;
          }
        }
        else {
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x40);
          uVar16 = *(uint *)(param_1 + 0x78);
          uVar9 = (ulong)uVar16;
          if (lVar7 == 0) {
            iVar25 = uVar16 * 7;
          }
          else {
            if (uVar16 == 0) {
              iVar25 = 7;
              goto LAB_0060ea14;
            }
            if (uVar16 < 8) {
              uVar12 = 0;
              uVar16 = 0;
LAB_0060e9f0:
              lVar10 = uVar9 - uVar12;
                    /* try { // try from 0060e9f4 to 0070ea1b has its CatchHandler @ 0060ea80 */
              puVar11 = (uint *)(lVar7 + uVar12 * 4);
              uVar22 = uVar16;
              do {
                uVar16 = *puVar11;
                if (*puVar11 <= uVar22) {
                  uVar16 = uVar22;
                }
                lVar10 = lVar10 + -1;
                puVar11 = puVar11 + 1;
                uVar22 = uVar16;
              } while (lVar10 != 0);
            }
            else {
              uVar12 = uVar9 & 0xfffffff8;
              pauVar6 = (undefined1 (*) [16])(lVar7 + 0x10);
              auVar19 = ZEXT816(0);
              auVar23 = ZEXT816(0);
              uVar13 = uVar12;
              do {
                pauVar1 = pauVar6 + -1;
                auVar24 = *pauVar6;
                uVar13 = uVar13 - 8;
                pauVar6 = pauVar6 + 2;
                auVar19 = NEON_umax(auVar19,*pauVar1,4);
                auVar23 = NEON_umax(auVar23,auVar24,4);
              } while (uVar13 != 0);
              auVar19 = NEON_umax(auVar19,auVar23,4);
              uVar16 = NEON_umaxv(auVar19,4);
              if (uVar12 != uVar9) goto LAB_0060e9f0;
            }
            iVar25 = uVar16 + 7;
          }
          if (iVar25 != 0) goto LAB_0060ea14;
        }
        if ((uVar17 >> 3 & 1) == 0) {
          iVar25 = 0x10;
LAB_0060eaf8:
          lVar4 = *(long *)(lVar4 + uVar3 * 0x60 + 0x58);
          if (lVar4 != 0) {
            pfVar5 = (float *)(lVar4 + (ulong)(iVar25 - 1) * 4);
            do {
              iVar25 = iVar25 + -1;
              *pfVar5 = (float)(int)(*pfVar5 * 65536.0);
              pfVar5 = pfVar5 + -1;
            } while (iVar25 != 0);
          }
        }
        else {
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x50);
          uVar17 = *(uint *)(param_1 + 0x78);
          uVar9 = (ulong)uVar17;
          if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 0060ea3c with catch @ 0060ea78 */
            iVar25 = uVar17 << 4;
          }
          else {
            if (uVar17 == 0) {
              iVar25 = 0x10;
              goto LAB_0060eaf8;
            }
                    /* try { // try from 0060ea64 to 0070eac3 has its CatchHandler @ 0060e918 */
            if (uVar17 < 8) {
              uVar12 = 0;
              uVar17 = 0;
LAB_0060ead4:
              lVar10 = uVar9 - uVar12;
              puVar8 = (uint *)(lVar7 + uVar12 * 4);
              uVar16 = uVar17;
              do {
                uVar17 = *puVar8;
                if (*puVar8 <= uVar16) {
                  uVar17 = uVar16;
                }
                lVar10 = lVar10 + -1;
                puVar8 = puVar8 + 1;
                uVar16 = uVar17;
              } while (lVar10 != 0);
            }
            else {
              uVar12 = uVar9 & 0xfffffff8;
              pauVar6 = (undefined1 (*) [16])(lVar7 + 0x10);
              auVar19 = ZEXT816(0);
                    /* catch() { ... } // from try @ 0060e964 with catch @ 0060eaa0 */
              auVar23 = ZEXT816(0);
              uVar13 = uVar12;
              do {
                pauVar1 = pauVar6 + -1;
                auVar24 = *pauVar6;
                uVar13 = uVar13 - 8;
                pauVar6 = pauVar6 + 2;
                auVar19 = NEON_umax(auVar19,*pauVar1,4);
                auVar23 = NEON_umax(auVar23,auVar24,4);
              } while (uVar13 != 0);
              auVar19 = NEON_umax(auVar19,auVar23,4);
                    /* try { // try from 0060eac4 to 0070eb83 has its CatchHandler @ 0060eb8c */
              uVar17 = NEON_umaxv(auVar19,4);
              if (uVar12 != uVar9) goto LAB_0060ead4;
            }
            iVar25 = uVar17 + 0x10;
          }
          if (iVar25 != 0) goto LAB_0060eaf8;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x48));
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      uVar3 = 0;
      pfVar5 = (float *)(*(long *)(param_1 + 0x70) + 0x58);
      do {
        uVar3 = uVar3 + 1;
        auVar19 = NEON_fcvtzs(*(undefined1 (*) [16])(pfVar5 + -10),0x10,4);
        *(long *)(pfVar5 + -8) = auVar19._8_8_;
        *(long *)(pfVar5 + -10) = auVar19._0_8_;
        auVar19 = NEON_fcvtzs(*(undefined1 (*) [16])(pfVar5 + -6),0x10,4);
        pfVar5[-2] = (float)(int)(pfVar5[-2] * 65536.0);
        pfVar5[-1] = (float)(int)(pfVar5[-1] * 65536.0);
        *(long *)(pfVar5 + -4) = auVar19._8_8_;
        *(long *)(pfVar5 + -6) = auVar19._0_8_;
        *pfVar5 = (float)(int)(*pfVar5 * 65536.0);
        pfVar5 = pfVar5 + 0x2c;
                    /* try { // try from 0060eb84 to 0070eb8f has its CatchHandler @ 0060e918 */
      } while (uVar3 < *(uint *)(param_1 + 0x68));
    }
                    /* catch() { ... } // from try @ 0060eac4 with catch @ 0060eb8c */
    if (*(int *)(param_1 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 0060eba4 with catch @ 0060eb90 */
      uVar3 = 0;
      pauVar6 = (undefined1 (*) [16])(*(long *)(param_1 + 0x40) + 0x134);
      do {
        auVar19 = *pauVar6;
                    /* try { // try from 0060eba0 to 0070eba3 has its CatchHandler @ 0060ebb4 */
        auVar23 = pauVar6[-2];
        auVar24 = pauVar6[-1];
                    /* try { // try from 0060eba4 to 0070ebc7 has its CatchHandler @ 0060eb90 */
        uVar3 = uVar3 + 1;
        auVar20 = NEON_fcvtzs(pauVar6[1],0x10,4);
        *(long *)(pauVar6[1] + 8) = auVar20._8_8_;
        *(long *)pauVar6[1] = auVar20._0_8_;
        auVar19 = NEON_fcvtzs(auVar19,0x10,4);
                    /* catch() { ... } // from try @ 0060eba0 with catch @ 0060ebb4 */
        *(long *)(*pauVar6 + 8) = auVar19._8_8_;
        *(long *)*pauVar6 = auVar19._0_8_;
        auVar19 = NEON_fcvtzs(auVar24,0x10,4);
        *(long *)(pauVar6[-1] + 8) = auVar19._8_8_;
        *(long *)pauVar6[-1] = auVar19._0_8_;
        auVar19 = NEON_fcvtzs(auVar23,0x10,4);
        *(long *)(pauVar6[-2] + 8) = auVar19._8_8_;
        *(long *)pauVar6[-2] = auVar19._0_8_;
        pauVar6 = (undefined1 (*) [16])(pauVar6[0x15] + 8);
      } while (uVar3 < *(uint *)(param_1 + 0x38));
    }
    auVar19 = NEON_fcvtzs(*(undefined1 (*) [16])param_1,0x10,4);
                    /* catch() { ... } // from try @ 0060ec5c with catch @ 0060ebec
                       catch() { ... } // from try @ 0060ed00 with catch @ 0060ebec */
    *(int *)(param_1 + 0x10) = (int)(*(float *)(param_1 + 0x10) * 65536.0);
    *(int *)(param_1 + 0x14) = (int)(*(float *)(param_1 + 0x14) * 65536.0);
    *(long *)(param_1 + 8) = auVar19._8_8_;
    *(long *)param_1 = auVar19._0_8_;
  }
  else {
    if (uVar17 != 0) {
      iVar25 = *(int *)(param_1 + 0x78);
      lVar4 = *(long *)(param_1 + 0x20);
      uVar3 = 0;
      do {
        lVar7 = lVar4 + uVar3 * 0x18;
        uVar18 = NEON_scvtf(*(undefined8 *)(lVar7 + 4),4);
        *(ulong *)(lVar7 + 4) =
             CONCAT44((float)((ulong)uVar18 >> 0x20) * 1.5258789e-05,(float)uVar18 * 1.5258789e-05);
        *(float *)(lVar7 + 0xc) = (float)*(int *)(lVar7 + 0xc) * fVar15;
        if ((*(long *)(lVar7 + 0x10) != 0) && (iVar25 != 0)) {
          pfVar5 = (float *)(*(long *)(lVar7 + 0x10) + (ulong)(iVar25 - 1) * 4);
          iVar2 = iVar25;
          do {
                    /* try { // try from 0060ec58 to 0070ec5b has its CatchHandler @ 0060ecb8 */
                    /* try { // try from 0060ec5c to 0070ecd7 has its CatchHandler @ 0060ebec */
            iVar2 = iVar2 + -1;
            *pfVar5 = (float)(int)*pfVar5 * fVar15;
            pfVar5 = pfVar5 + -1;
          } while (iVar2 != 0);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar17);
    }
    fVar15 = DAT_0069b3ec;
    uVar17 = *(uint *)(param_1 + 0x28);
    if (uVar17 != 0) {
      uVar3 = 0;
      pauVar6 = (undefined1 (*) [16])(*(long *)(param_1 + 0x30) + 0x14);
      do {
        uVar18 = *(undefined8 *)pauVar6[-1];
        uVar3 = uVar3 + 1;
                    /* catch() { ... } // from try @ 0060ec58 with catch @ 0060ecb8 */
        *(float *)(pauVar6[-1] + 8) = (float)*(int *)(pauVar6[-1] + 8) * fVar15;
        auVar19 = *pauVar6;
        uVar18 = NEON_scvtf(uVar18,4);
        *(ulong *)pauVar6[-1] =
             CONCAT44((float)((ulong)uVar18 >> 0x20) * 1.5258789e-05,(float)uVar18 * 1.5258789e-05);
        iVar25 = *(int *)pauVar6[1];
        auVar19 = NEON_scvtf(auVar19,4);
                    /* try { // try from 0060ecd8 to 0070ecff has its CatchHandler @ 0060ed08 */
        *(float *)(*pauVar6 + 8) = auVar19._8_4_ * 1.5258789e-05;
        *(float *)(*pauVar6 + 0xc) = auVar19._12_4_ * 1.5258789e-05;
        *(float *)*pauVar6 = auVar19._0_4_ * 1.5258789e-05;
        *(float *)(*pauVar6 + 4) = auVar19._4_4_ * 1.5258789e-05;
        *(float *)pauVar6[1] = (float)iVar25 * fVar15;
        pauVar6 = (undefined1 (*) [16])(pauVar6[2] + 8);
      } while (uVar3 < uVar17);
    }
    fVar15 = DAT_0069b3ec;
    uVar17 = *(uint *)(param_1 + 0x48);
    if (uVar17 != 0) {
                    /* try { // try from 0060ed00 to 0070ed0b has its CatchHandler @ 0060ebec */
      uVar3 = 0;
                    /* catch() { ... } // from try @ 0060ecd8 with catch @ 0060ed08 */
      do {
                    /* try { // try from 0060ed0c to 0070ed8f has its CatchHandler @ 0060ed0c
                       catch() { ... } // from try @ 0060ed0c with catch @ 0060ed0c
                       catch() { ... } // from try @ 0060edb0 with catch @ 0060ed0c
                       catch() { ... } // from try @ 0060f02c with catch @ 0060ed0c */
        lVar4 = *(long *)(param_1 + 0x50);
        uVar16 = *(uint *)(lVar4 + uVar3 * 0x60 + 0x18);
        if ((uVar16 & 1) == 0) {
          iVar25 = 3;
LAB_0060edd4:
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x28);
          if (lVar7 != 0) {
            pfVar5 = (float *)(lVar7 + (ulong)(iVar25 - 1) * 4);
            do {
              iVar25 = iVar25 + -1;
              *pfVar5 = (float)(int)*pfVar5 * fVar15;
              pfVar5 = pfVar5 + -1;
            } while (iVar25 != 0);
          }
        }
        else {
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x20);
          uVar22 = *(uint *)(param_1 + 0x78);
          uVar9 = (ulong)uVar22;
          if (lVar7 == 0) {
            iVar25 = uVar22 * 3;
          }
          else {
            if (uVar22 == 0) {
              iVar25 = 3;
              goto LAB_0060edd4;
            }
            if (uVar22 < 8) {
              uVar12 = 0;
              uVar22 = 0;
LAB_0060edb0:
                    /* try { // try from 0060edb0 to 0070eebb has its CatchHandler @ 0060ed0c */
              lVar10 = uVar9 - uVar12;
              puVar8 = (uint *)(lVar7 + uVar12 * 4);
              uVar14 = uVar22;
              do {
                uVar22 = *puVar8;
                if (*puVar8 <= uVar14) {
                  uVar22 = uVar14;
                }
                lVar10 = lVar10 + -1;
                puVar8 = puVar8 + 1;
                uVar14 = uVar22;
              } while (lVar10 != 0);
            }
            else {
              uVar12 = uVar9 & 0xfffffff8;
              pauVar6 = (undefined1 (*) [16])(lVar7 + 0x10);
              auVar19 = ZEXT816(0);
              auVar23 = ZEXT816(0);
              uVar13 = uVar12;
              do {
                pauVar1 = pauVar6 + -1;
                auVar24 = *pauVar6;
                uVar13 = uVar13 - 8;
                pauVar6 = pauVar6 + 2;
                    /* try { // try from 0060ed90 to 0070eda3 has its CatchHandler @ 0060ee94 */
                auVar19 = NEON_umax(auVar19,*pauVar1,4);
                auVar23 = NEON_umax(auVar23,auVar24,4);
              } while (uVar13 != 0);
              auVar19 = NEON_umax(auVar19,auVar23,4);
              uVar22 = NEON_umaxv(auVar19,4);
                    /* try { // try from 0060eda8 to 0070edaf has its CatchHandler @ 0060ee2c */
              if (uVar12 != uVar9) goto LAB_0060edb0;
            }
            iVar25 = uVar22 + 3;
          }
          if (iVar25 != 0) goto LAB_0060edd4;
        }
        if ((uVar16 >> 1 & 1) == 0) {
          iVar25 = 4;
LAB_0060eeb8:
                    /* try { // try from 0060eebc to 0070f02b has its CatchHandler @ 0060f04c */
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x38);
          if (lVar7 != 0) {
            pfVar5 = (float *)(lVar7 + (ulong)(iVar25 - 1) * 4);
            do {
              iVar25 = iVar25 + -1;
              *pfVar5 = (float)(int)*pfVar5 * fVar15;
              pfVar5 = pfVar5 + -1;
            } while (iVar25 != 0);
          }
        }
        else {
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x30);
          uVar22 = *(uint *)(param_1 + 0x78);
          uVar9 = (ulong)uVar22;
          if (lVar7 == 0) {
            iVar25 = uVar22 << 2;
          }
          else {
            if (uVar22 == 0) {
              iVar25 = 4;
              goto LAB_0060eeb8;
            }
            if (uVar22 < 8) {
                    /* catch() { ... } // from try @ 0060eda8 with catch @ 0060ee2c */
              uVar12 = 0;
              uVar22 = 0;
LAB_0060ee94:
                    /* catch() { ... } // from try @ 0060ed90 with catch @ 0060ee94 */
              lVar10 = uVar9 - uVar12;
              puVar8 = (uint *)(lVar7 + uVar12 * 4);
              uVar14 = uVar22;
              do {
                uVar22 = *puVar8;
                if (*puVar8 <= uVar14) {
                  uVar22 = uVar14;
                }
                lVar10 = lVar10 + -1;
                puVar8 = puVar8 + 1;
                uVar14 = uVar22;
              } while (lVar10 != 0);
            }
            else {
              uVar12 = uVar9 & 0xfffffff8;
              pauVar6 = (undefined1 (*) [16])(lVar7 + 0x10);
              auVar19 = ZEXT816(0);
              auVar23 = ZEXT816(0);
              uVar13 = uVar12;
              do {
                pauVar1 = pauVar6 + -1;
                auVar24 = *pauVar6;
                uVar13 = uVar13 - 8;
                pauVar6 = pauVar6 + 2;
                auVar19 = NEON_umax(auVar19,*pauVar1,4);
                auVar23 = NEON_umax(auVar23,auVar24,4);
              } while (uVar13 != 0);
              auVar19 = NEON_umax(auVar19,auVar23,4);
              uVar22 = NEON_umaxv(auVar19,4);
              if (uVar12 != uVar9) goto LAB_0060ee94;
            }
            iVar25 = uVar22 + 4;
          }
          if (iVar25 != 0) goto LAB_0060eeb8;
        }
        if ((uVar16 >> 2 & 1) == 0) {
          iVar25 = 7;
LAB_0060efa0:
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x48);
          if (lVar7 != 0) {
            pfVar5 = (float *)(lVar7 + (ulong)(iVar25 - 1) * 4);
            do {
              iVar25 = iVar25 + -1;
              *pfVar5 = (float)(int)*pfVar5 * fVar15;
              pfVar5 = pfVar5 + -1;
            } while (iVar25 != 0);
          }
        }
        else {
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x40);
          uVar22 = *(uint *)(param_1 + 0x78);
          uVar9 = (ulong)uVar22;
          if (lVar7 == 0) {
            iVar25 = uVar22 * 7;
          }
          else {
            if (uVar22 == 0) {
              iVar25 = 7;
              goto LAB_0060efa0;
            }
            if (uVar22 < 8) {
              uVar12 = 0;
              uVar22 = 0;
LAB_0060ef7c:
              lVar10 = uVar9 - uVar12;
              puVar8 = (uint *)(lVar7 + uVar12 * 4);
              uVar14 = uVar22;
              do {
                uVar22 = *puVar8;
                if (*puVar8 <= uVar14) {
                  uVar22 = uVar14;
                }
                lVar10 = lVar10 + -1;
                puVar8 = puVar8 + 1;
                uVar14 = uVar22;
              } while (lVar10 != 0);
            }
            else {
              uVar12 = uVar9 & 0xfffffff8;
              pauVar6 = (undefined1 (*) [16])(lVar7 + 0x10);
              auVar19 = ZEXT816(0);
              auVar23 = ZEXT816(0);
              uVar13 = uVar12;
              do {
                pauVar1 = pauVar6 + -1;
                auVar24 = *pauVar6;
                uVar13 = uVar13 - 8;
                pauVar6 = pauVar6 + 2;
                auVar19 = NEON_umax(auVar19,*pauVar1,4);
                auVar23 = NEON_umax(auVar23,auVar24,4);
              } while (uVar13 != 0);
              auVar19 = NEON_umax(auVar19,auVar23,4);
              uVar22 = NEON_umaxv(auVar19,4);
              if (uVar12 != uVar9) goto LAB_0060ef7c;
            }
            iVar25 = uVar22 + 7;
          }
          if (iVar25 != 0) goto LAB_0060efa0;
        }
        if ((uVar16 >> 3 & 1) == 0) {
          iVar25 = 0x10;
LAB_0060f084:
          lVar4 = *(long *)(lVar4 + uVar3 * 0x60 + 0x58);
          if (lVar4 != 0) {
            pfVar5 = (float *)(lVar4 + (ulong)(iVar25 - 1) * 4);
            do {
              iVar25 = iVar25 + -1;
              *pfVar5 = (float)(int)*pfVar5 * fVar15;
              pfVar5 = pfVar5 + -1;
            } while (iVar25 != 0);
          }
        }
        else {
          lVar7 = *(long *)(lVar4 + uVar3 * 0x60 + 0x50);
          uVar16 = *(uint *)(param_1 + 0x78);
          uVar9 = (ulong)uVar16;
          if (lVar7 == 0) {
            iVar25 = uVar16 << 4;
          }
          else {
            if (uVar16 == 0) {
              iVar25 = 0x10;
              goto LAB_0060f084;
            }
            if (uVar16 < 8) {
              uVar12 = 0;
              uVar16 = 0;
LAB_0060f060:
              lVar10 = uVar9 - uVar12;
              puVar8 = (uint *)(lVar7 + uVar12 * 4);
              uVar22 = uVar16;
              do {
                uVar16 = *puVar8;
                if (*puVar8 <= uVar22) {
                  uVar16 = uVar22;
                }
                lVar10 = lVar10 + -1;
                puVar8 = puVar8 + 1;
                uVar22 = uVar16;
              } while (lVar10 != 0);
            }
            else {
              uVar12 = uVar9 & 0xfffffff8;
              pauVar6 = (undefined1 (*) [16])(lVar7 + 0x10);
              auVar19 = ZEXT816(0);
                    /* try { // try from 0060f02c to 0070f04f has its CatchHandler @ 0060ed0c */
              auVar23 = ZEXT816(0);
              uVar13 = uVar12;
              do {
                pauVar1 = pauVar6 + -1;
                auVar24 = *pauVar6;
                uVar13 = uVar13 - 8;
                pauVar6 = pauVar6 + 2;
                auVar19 = NEON_umax(auVar19,*pauVar1,4);
                auVar23 = NEON_umax(auVar23,auVar24,4);
              } while (uVar13 != 0);
                    /* catch() { ... } // from try @ 0060eebc with catch @ 0060f04c */
              auVar19 = NEON_umax(auVar19,auVar23,4);
                    /* try { // try from 0060f050 to 0070f14b has its CatchHandler @ 0060f050
                       catch() { ... } // from try @ 0060f050 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f150 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f204 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f29c with catch @ 0060f050
                       catch() { ... } // from try @ 0060f314 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f394 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f40c with catch @ 0060f050
                       catch() { ... } // from try @ 0060f494 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f50c with catch @ 0060f050
                       catch() { ... } // from try @ 0060f768 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f820 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f850 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f964 with catch @ 0060f050
                       catch() { ... } // from try @ 0060f9b8 with catch @ 0060f050
                       catch() { ... } // from try @ 0060fa10 with catch @ 0060f050
                       catch() { ... } // from try @ 0060fb00 with catch @ 0060f050
                       catch() { ... } // from try @ 0060fc44 with catch @ 0060f050
                       catch() { ... } // from try @ 0060fce0 with catch @ 0060f050
                       catch() { ... } // from try @ 0060fe2c with catch @ 0060f050
                       catch() { ... } // from try @ 0060feb4 with catch @ 0060f050
                       catch() { ... } // from try @ 00610064 with catch @ 0060f050
                       catch() { ... } // from try @ 006100c8 with catch @ 0060f050
                       catch() { ... } // from try @ 006108d8 with catch @ 0060f050
                       catch() { ... } // from try @ 00610b0c with catch @ 0060f050
                       catch() { ... } // from try @ 00610c48 with catch @ 0060f050
                       catch() { ... } // from try @ 00611144 with catch @ 0060f050
                       catch() { ... } // from try @ 006112c8 with catch @ 0060f050
                       catch() { ... } // from try @ 00611424 with catch @ 0060f050 */
              uVar16 = NEON_umaxv(auVar19,4);
              if (uVar12 != uVar9) goto LAB_0060f060;
            }
            iVar25 = uVar16 + 0x10;
          }
          if (iVar25 != 0) goto LAB_0060f084;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar17);
    }
    fVar15 = DAT_0069b3ec;
    uVar17 = *(uint *)(param_1 + 0x68);
    if (uVar17 != 0) {
      uVar3 = 0;
      pfVar5 = (float *)(*(long *)(param_1 + 0x70) + 0x58);
      do {
        uVar3 = uVar3 + 1;
        auVar19 = NEON_scvtf(*(undefined1 (*) [16])(pfVar5 + -10),4);
        pfVar5[-8] = auVar19._8_4_ * 1.5258789e-05;
        pfVar5[-7] = auVar19._12_4_ * 1.5258789e-05;
        pfVar5[-10] = auVar19._0_4_ * 1.5258789e-05;
        pfVar5[-9] = auVar19._4_4_ * 1.5258789e-05;
        pfVar5[-1] = (float)(int)pfVar5[-1] * fVar15;
        pfVar5[-2] = (float)(int)pfVar5[-2] * fVar15;
        auVar19 = NEON_scvtf(*(undefined1 (*) [16])(pfVar5 + -6),4);
        pfVar5[-4] = auVar19._8_4_ * 1.5258789e-05;
        pfVar5[-3] = auVar19._12_4_ * 1.5258789e-05;
        pfVar5[-6] = auVar19._0_4_ * 1.5258789e-05;
        pfVar5[-5] = auVar19._4_4_ * 1.5258789e-05;
        *pfVar5 = (float)(int)*pfVar5 * fVar15;
        pfVar5 = pfVar5 + 0x2c;
      } while (uVar3 < uVar17);
    }
    uVar17 = *(uint *)(param_1 + 0x38);
    if (uVar17 != 0) {
      uVar3 = 0;
                    /* try { // try from 0060f14c to 0070f14f has its CatchHandler @ 00611430 */
                    /* try { // try from 0060f150 to 0070f1f7 has its CatchHandler @ 0060f050 */
      pauVar6 = (undefined1 (*) [16])(*(long *)(param_1 + 0x40) + 0x134);
      do {
        auVar19 = *pauVar6;
        uVar3 = uVar3 + 1;
        auVar23 = NEON_scvtf(pauVar6[1],4);
        *(float *)(pauVar6[1] + 8) = auVar23._8_4_ * 1.5258789e-05;
        *(float *)(pauVar6[1] + 0xc) = auVar23._12_4_ * 1.5258789e-05;
        *(float *)pauVar6[1] = auVar23._0_4_ * 1.5258789e-05;
        *(float *)(pauVar6[1] + 4) = auVar23._4_4_ * 1.5258789e-05;
        auVar23 = pauVar6[-2];
        auVar24 = pauVar6[-1];
        auVar19 = NEON_scvtf(auVar19,4);
        *(float *)(*pauVar6 + 8) = auVar19._8_4_ * 1.5258789e-05;
        *(float *)(*pauVar6 + 0xc) = auVar19._12_4_ * 1.5258789e-05;
        *(float *)*pauVar6 = auVar19._0_4_ * 1.5258789e-05;
        *(float *)(*pauVar6 + 4) = auVar19._4_4_ * 1.5258789e-05;
        auVar24 = NEON_scvtf(auVar24,4);
        auVar19 = NEON_scvtf(auVar23,4);
        *(float *)(pauVar6[-2] + 8) = auVar19._8_4_ * 1.5258789e-05;
        *(float *)(pauVar6[-2] + 0xc) = auVar19._12_4_ * 1.5258789e-05;
        *(float *)pauVar6[-2] = auVar19._0_4_ * 1.5258789e-05;
        *(float *)(pauVar6[-2] + 4) = auVar19._4_4_ * 1.5258789e-05;
        *(float *)(pauVar6[-1] + 8) = auVar24._8_4_ * 1.5258789e-05;
        *(float *)(pauVar6[-1] + 0xc) = auVar24._12_4_ * 1.5258789e-05;
        *(float *)pauVar6[-1] = auVar24._0_4_ * 1.5258789e-05;
        *(float *)(pauVar6[-1] + 4) = auVar24._4_4_ * 1.5258789e-05;
        pauVar6 = (undefined1 (*) [16])(pauVar6[0x15] + 8);
      } while (uVar3 < uVar17);
    }
    fVar15 = (float)*(int *)(param_1 + 0x14) * DAT_0069b3ec;
    auVar19 = NEON_scvtf(*(undefined1 (*) [16])param_1,4);
    *(float *)(param_1 + 0x10) = (float)*(int *)(param_1 + 0x10) * DAT_0069b3ec;
    *(float *)(param_1 + 0x14) = fVar15;
    *(float *)(param_1 + 8) = auVar19._8_4_ * 1.5258789e-05;
    *(float *)(param_1 + 0xc) = auVar19._12_4_ * 1.5258789e-05;
    *(float *)param_1 = auVar19._0_4_ * 1.5258789e-05;
    *(float *)(param_1 + 4) = auVar19._4_4_ * 1.5258789e-05;
  }
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) ^ 1;
  return;
}


