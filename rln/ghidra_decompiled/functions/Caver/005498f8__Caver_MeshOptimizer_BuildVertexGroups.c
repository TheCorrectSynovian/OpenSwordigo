/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005498f8
 * Function: Caver::MeshOptimizer::BuildVertexGroups
 * Signature: undefined __thiscall BuildVertexGroups(MeshOptimizer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MeshOptimizer::BuildVertexGroups() */

void __thiscall Caver::MeshOptimizer::BuildVertexGroups(MeshOptimizer *this)

{
  uint uVar1;
  MeshOptimizer *pMVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  MeshOptimizer *pMVar6;
  MeshOptimizer *pMVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  MeshOptimizer *pMVar12;
  uint uVar13;
  MeshOptimizer *pMVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  long lVar19;
  long lVar20;
  MeshOptimizer *pMVar21;
  MeshOptimizer *pMVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int local_bc;
  float local_b4;
  float local_b0;
  
                    /* try { // try from 00549910 to 006499d7 has its CatchHandler @ 005499e0 */
  *(undefined4 *)(this + 0x48) = 0x3a83126f;
                    /* catch() { ... } // from try @ 00549714 with catch @ 0054993c */
  local_bc = *(int *)(this + 0x10);
  fVar25 = *(float *)(this + 0x3c) / _DAT_00689b20;
  if (*(float *)(this + 0x3c) / _DAT_00689b20 <= DAT_00694f8c) {
    fVar25 = DAT_00694f8c;
  }
  local_b0 = *(float *)(this + 0x40) / _DAT_00689b20;
  if (*(float *)(this + 0x40) / _DAT_00689b20 <= DAT_00694f8c) {
    local_b0 = DAT_00694f8c;
  }
  local_b4 = *(float *)(this + 0x44) / _DAT_00689b20;
  if (*(float *)(this + 0x44) / _DAT_00689b20 <= DAT_00694f8c) {
    local_b4 = DAT_00694f8c;
  }
  *(float *)(this + 0x4c) = fVar25;
  *(float *)(this + 0x50) = local_b0;
  *(float *)(this + 0x54) = local_b4;
  if (local_bc < 1) {
                    /* catch() { ... } // from try @ 00549a54 with catch @ 00549d2c */
                    /* try { // try from 00549d50 to 00649d77 has its CatchHandler @ 00549d80 */
    return;
  }
                    /* catch() { ... } // from try @ 0054986c with catch @ 0054998c */
  lVar20 = 0;
  pMVar2 = this + 0x60;
  fVar24 = DAT_00683734;
  do {
    lVar19 = *(long *)(this + 0x18);
    fVar29 = *(float *)(this + 0x30);
    fVar30 = *(float *)(this + 0x34);
    fVar27 = *(float *)(this + 0x38);
    pfVar11 = (float *)(lVar19 + lVar20 * 0x28);
    fVar26 = *pfVar11;
    fVar31 = pfVar11[1];
    fVar28 = pfVar11[2];
                    /* try { // try from 005499d8 to 006499e3 has its CatchHandler @ 0054965c */
                    /* catch() { ... } // from try @ 00549910 with catch @ 005499e0 */
    uVar23 = (uint)(((fVar26 - fVar24) - fVar29) / fVar25);
                    /* try { // try from 005499e4 to 00649a53 has its CatchHandler @ 005499e4
                       catch() { ... } // from try @ 005499e4 with catch @ 005499e4
                       catch() { ... } // from try @ 00549a60 with catch @ 005499e4
                       catch() { ... } // from try @ 00549a94 with catch @ 005499e4
                       catch() { ... } // from try @ 00549bf8 with catch @ 005499e4
                       catch() { ... } // from try @ 00549cb8 with catch @ 005499e4
                       catch() { ... } // from try @ 00549d78 with catch @ 005499e4 */
    uVar9 = (uint)(((fVar24 + fVar26) - fVar29) / fVar25);
    if (uVar23 <= uVar9) {
      uVar13 = (uint)(((fVar31 - fVar24) - fVar30) / local_b0);
      uVar10 = (uint)(((fVar28 - fVar24) - fVar27) / local_b4);
      uVar15 = (uint)(((fVar24 + fVar31) - fVar30) / local_b0);
      uVar16 = (uint)(((fVar24 + fVar28) - fVar27) / local_b4);
      do {
        if (uVar13 <= uVar15) {
          uVar3 = uVar23 * 0x596f0ddf;
          uVar1 = uVar13;
          if (0xfffffffa < uVar3) {
            uVar3 = uVar3 + 5;
          }
          do {
            if (uVar10 <= uVar16) {
              uVar4 = uVar1 * 0x2f632d69;
              if (0xfffffffa < uVar4) {
                uVar4 = uVar4 + 5;
              }
              pMVar21 = *(MeshOptimizer **)(this + 0x68);
              uVar17 = uVar10;
              do {
                uVar5 = uVar17 * -0x4ee6db1f;
                if (0xfffffffa < uVar5) {
                  uVar5 = uVar5 + 5;
                }
                if (pMVar21 != (MeshOptimizer *)0x0) {
                  uVar5 = uVar4 + uVar3 + uVar5;
                  pMVar14 = pMVar21;
                  pMVar22 = pMVar2;
LAB_00549b80:
                  do {
                    pMVar7 = pMVar14;
                    if ((uVar5 & 0xff) <= (uint)(byte)pMVar7[0x20]) {
                      pMVar14 = *(MeshOptimizer **)(pMVar7 + 0x10);
                      if ((uint)(byte)pMVar7[0x20] != (uVar5 & 0xff)) goto code_r0x00549ba4;
                      pMVar12 = *(MeshOptimizer **)(pMVar7 + 0x18);
                      while (pMVar14 != (MeshOptimizer *)0x0) {
                        pMVar6 = pMVar14 + 0x18;
                        if ((uVar5 & 0xff) <= (uint)(byte)pMVar14[0x20]) {
                          pMVar7 = pMVar14;
                          pMVar6 = pMVar14 + 0x10;
                        }
                        pMVar14 = *(MeshOptimizer **)pMVar6;
                    /* try { // try from 00549bec to 00649bf7 has its CatchHandler @ 00549c6c */
                      }
                      while (pMVar12 != (MeshOptimizer *)0x0) {
                    /* try { // try from 00549bf8 to 00649c8f has its CatchHandler @ 005499e4 */
                        pMVar14 = pMVar12;
                        pMVar6 = pMVar12 + 0x10;
                        if ((uint)(byte)pMVar12[0x20] <= (uVar5 & 0xff)) {
                          pMVar14 = pMVar22;
                          pMVar6 = pMVar12 + 0x18;
                        }
                        pMVar22 = pMVar14;
                        pMVar12 = *(MeshOptimizer **)pMVar6;
                      }
                      while( true ) {
                        if (pMVar7 == pMVar22) goto LAB_00549c64;
                        pfVar11 = (float *)(lVar19 + (long)*(int *)(pMVar7 + 0x24) * 0x28);
                        if ((*pfVar11 - fVar26) * (*pfVar11 - fVar26) +
                            (pfVar11[1] - fVar31) * (pfVar11[1] - fVar31) +
                            (pfVar11[2] - fVar28) * (pfVar11[2] - fVar28) < fVar24 * fVar24) break;
                        pMVar7 = (MeshOptimizer *)FUN_0064c640();
                      }
                      *(int *)(lVar19 + lVar20 * 0x28 + 0xc) = *(int *)(pMVar7 + 0x24);
                    /* try { // try from 00549cb8 to 00649d4f has its CatchHandler @ 005499e4 */
                    /* catch() { ... } // from try @ 00549a84 with catch @ 00549cbc */
                      goto LAB_00549d20;
                    }
                    pMVar14 = *(MeshOptimizer **)(pMVar7 + 0x18);
                  } while (*(MeshOptimizer **)(pMVar7 + 0x18) != (MeshOptimizer *)0x0);
                }
LAB_00549c64:
                uVar17 = uVar17 + 1;
                    /* catch() { ... } // from try @ 00549bec with catch @ 00549c6c */
              } while (uVar17 <= uVar16);
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 <= uVar15);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 <= uVar9);
    }
    *(int *)(lVar19 + lVar20 * 0x28 + 0xc) = (int)lVar20;
    uVar23 = (int)((fVar26 - fVar29) / fVar25) * 0x596f0ddf;
    uVar9 = (int)((fVar31 - fVar30) / local_b0) * 0x2f632d69;
                    /* try { // try from 00549a54 to 00649a5f has its CatchHandler @ 00549d2c */
    if (0xfffffffa < uVar23) {
      uVar23 = uVar23 + 5;
    }
                    /* try { // try from 00549a60 to 00649a83 has its CatchHandler @ 005499e4 */
    if (0xfffffffa < uVar9) {
      uVar9 = uVar9 + 5;
    }
    uVar10 = (int)((fVar28 - fVar27) / local_b4) * -0x4ee6db1f;
    if (0xfffffffa < uVar10) {
      uVar10 = uVar10 + 5;
    }
                    /* try { // try from 00549a84 to 00649a93 has its CatchHandler @ 00549cbc */
    uVar10 = uVar9 + uVar23 + uVar10;
    pMVar21 = pMVar2;
    pMVar14 = *(MeshOptimizer **)(this + 0x68);
    while (pMVar14 != (MeshOptimizer *)0x0) {
                    /* try { // try from 00549a94 to 00649beb has its CatchHandler @ 005499e4 */
      pMVar22 = pMVar14 + 0x10;
      if ((uint)(byte)pMVar14[0x20] <= (uVar10 & 0xff)) {
        pMVar22 = pMVar14 + 0x18;
      }
      pMVar21 = pMVar14;
      pMVar14 = *(MeshOptimizer **)pMVar22;
    }
    if (pMVar2 == pMVar21) {
      bVar18 = true;
    }
    else {
      bVar18 = (uVar10 & 0xff) < (uint)(byte)pMVar21[0x20];
    }
    pvVar8 = operator_new(0x28);
    *(ulong *)((long)pvVar8 + 0x20) = (ulong)(uVar10 & 0xff) | lVar20 << 0x20;
    FUN_0064c8a0(bVar18,pvVar8,pMVar21,pMVar2);
    local_bc = *(int *)(this + 0x10);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
LAB_00549d20:
    lVar20 = lVar20 + 1;
    if (local_bc <= lVar20) {
      return;
    }
    local_b0 = *(float *)(this + 0x50);
    fVar24 = *(float *)(this + 0x48);
    fVar25 = *(float *)(this + 0x4c);
    local_b4 = *(float *)(this + 0x54);
  } while( true );
code_r0x00549ba4:
  pMVar22 = pMVar7;
  if (pMVar14 == (MeshOptimizer *)0x0) goto LAB_00549c64;
  goto LAB_00549b80;
}


