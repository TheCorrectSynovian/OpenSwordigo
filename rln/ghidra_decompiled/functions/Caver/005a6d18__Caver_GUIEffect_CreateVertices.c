/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a6d18
 * Function: Caver::GUIEffect::CreateVertices
 * Signature: undefined __thiscall CreateVertices(GUIEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffect::CreateVertices() */

void __thiscall Caver::GUIEffect::CreateVertices(GUIEffect *this)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(int *)(this + 0x3c) == 1) {
                    /* try { // try from 005a6e54 to 006a6e5f has its CatchHandler @ 005a707c */
    if (*(int *)(this + 0x60) != 0x18) {
                    /* try { // try from 005a6e60 to 006a6e8f has its CatchHandler @ 005a6e14 */
      *(undefined4 *)(this + 0x60) = 0x18;
      pvVar2 = operator_new__(0x180);
      pvVar3 = *(void **)(this + 0x68);
      *(void **)(this + 0x68) = pvVar2;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
    fVar10 = DAT_00684320;
    fVar11 = *(float *)(this + 0x50);
    fVar13 = *(float *)(this + 0x54);
    pfVar4 = *(float **)(this + 0x68);
                    /* try { // try from 005a6e90 to 006a6e9b has its CatchHandler @ 005a7044 */
    *pfVar4 = fVar11;
    pfVar4[1] = fVar13;
                    /* try { // try from 005a6e9c to 006a6ec3 has its CatchHandler @ 005a6e14 */
    pfVar4[2] = 0.0;
    fVar15 = fVar11 + 0.0;
    fVar12 = fVar13 + fVar10;
    fVar10 = fVar11 + fVar10;
    fVar14 = *(float *)(this + 0x58) + fVar11;
    fVar17 = fVar14 + 0.0;
    pfVar4[5] = fVar13;
    pfVar4[6] = 0.0;
                    /* try { // try from 005a6ec4 to 006a6f2f has its CatchHandler @ 005a70bc */
    pfVar4[10] = 0.0;
    pfVar4[0xe] = 0.0;
    pfVar4[0x11] = fVar13;
    pfVar4[0x12] = 0.0;
    pfVar4[0x16] = 0.0;
    pfVar4[0x19] = fVar13;
    pfVar4[0x1a] = 0.0;
    pfVar4[8] = fVar15;
    pfVar4[9] = fVar12;
    pfVar4[0xc] = fVar15;
    pfVar4[0xd] = fVar12;
    pfVar4[4] = fVar14;
    pfVar4[0x10] = fVar14;
    pfVar4[0x18] = fVar14;
    pfVar4[0x14] = fVar17;
    pfVar4[0x15] = fVar12;
    fVar12 = DAT_00684324;
    fVar18 = *(float *)(this + 0x5c);
    pfVar4[0x50] = fVar10;
    pfVar4[0x54] = fVar10;
    pfVar4[0x5c] = fVar10;
    fVar18 = fVar18 + fVar13;
    fVar16 = fVar13 + 0.0;
    fVar19 = fVar14 + fVar12;
    fVar10 = fVar18 + 0.0;
    fVar12 = fVar18 + fVar12;
    lVar5 = 0;
    pfVar4[0x1e] = 0.0;
    pfVar4[0x20] = fVar19;
    pfVar4[0x21] = fVar16;
    pfVar4[0x22] = 0.0;
    pfVar4[0x24] = fVar19;
    pfVar4[0x25] = fVar16;
                    /* try { // try from 005a6f30 to 006a7123 has its CatchHandler @ 005a6e14 */
    pfVar4[0x26] = 0.0;
    pfVar4[0x2a] = 0.0;
    pfVar4[0x2e] = 0.0;
    pfVar4[0x32] = 0.0;
    pfVar4[0x34] = fVar11;
    pfVar4[0x36] = 0.0;
    pfVar4[0x3a] = 0.0;
    pfVar4[0x3e] = 0.0;
    pfVar4[0x40] = fVar11;
    pfVar4[0x42] = 0.0;
    pfVar4[0x44] = fVar15;
    pfVar4[0x46] = 0.0;
    pfVar4[0x48] = fVar11;
    pfVar4[0x4a] = 0.0;
    pfVar4[0x4c] = fVar11;
    pfVar4[0x4d] = fVar13;
    pfVar4[0x4e] = 0.0;
    pfVar4[0x52] = 0.0;
    pfVar4[0x56] = 0.0;
    pfVar4[0x58] = fVar11;
    pfVar4[0x59] = fVar13;
    pfVar4[0x5a] = 0.0;
    pfVar4[0x5d] = fVar16;
    pfVar4[0x5e] = 0.0;
    pfVar4[0x1c] = fVar14;
    pfVar4[0x1d] = fVar18;
    pfVar4[0x28] = fVar14;
    pfVar4[0x29] = fVar18;
    pfVar4[0x30] = fVar14;
    pfVar4[0x31] = fVar18;
    pfVar4[0x35] = fVar18;
    pfVar4[0x41] = fVar18;
    pfVar4[0x49] = fVar18;
    pfVar4[0x2c] = fVar19;
    pfVar4[0x2d] = fVar10;
    pfVar4[0x38] = fVar17;
    pfVar4[0x39] = fVar12;
    pfVar4[0x3c] = fVar17;
    pfVar4[0x3d] = fVar12;
    pfVar4[0x45] = fVar12;
    pfVar4[0x51] = fVar10;
    pfVar4[0x55] = fVar10;
    do {
      fVar11 = *(float *)(this + 0x4c);
      fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x48]);
      fVar10 = (float)NEON_ucvtf((uint)(byte)this[0x49]);
      fVar12 = (float)NEON_ucvtf((uint)(byte)this[0x4a]);
      uVar6 = (uint)(fVar11 * fVar13);
      fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x4b]);
      uVar7 = (uint)(fVar11 * fVar10);
      uVar8 = (uint)(fVar11 * fVar12);
      if (0xfe < (int)uVar6) {
        uVar6 = 0xff;
      }
      iVar9 = (int)(fVar11 * fVar13);
      if (0xfe < (int)uVar7) {
        uVar7 = 0xff;
      }
      if (0xfe < (int)uVar8) {
        uVar8 = 0xff;
      }
      if (0xfe < iVar9) {
        iVar9 = 0xff;
      }
      *(uint *)(*(long *)(this + 0x68) + lVar5 + 0xc) =
           uVar6 & 0xff | (uVar7 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | iVar9 << 0x18;
                    /* catch() { ... } // from try @ 005a6e90 with catch @ 005a7044 */
      fVar11 = *(float *)(this + 0x4c);
      fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x48]);
      fVar10 = (float)NEON_ucvtf((uint)(byte)this[0x49]);
      fVar12 = (float)NEON_ucvtf((uint)(byte)this[0x4a]);
      uVar6 = (uint)(fVar11 * fVar13);
      fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x4b]);
      uVar7 = (uint)(fVar11 * fVar10);
                    /* catch() { ... } // from try @ 005a6e54 with catch @ 005a707c */
      uVar8 = (uint)(fVar11 * fVar12);
      if (0xfe < (int)uVar6) {
        uVar6 = 0xff;
      }
      iVar9 = (int)(fVar11 * fVar13);
      if (0xfe < (int)uVar7) {
        uVar7 = 0xff;
      }
      if (0xfe < (int)uVar8) {
        uVar8 = 0xff;
      }
      if (0xfe < iVar9) {
        iVar9 = 0xff;
      }
      *(uint *)(*(long *)(this + 0x68) + lVar5 + 0x1c) =
           uVar6 & 0xff | (uVar7 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | iVar9 << 0x18;
                    /* catch() { ... } // from try @ 005a6ec4 with catch @ 005a70bc */
      *(undefined4 *)(*(long *)(this + 0x68) + lVar5 + 0x2c) = 0;
      *(undefined4 *)(*(long *)(this + 0x68) + lVar5 + 0x3c) = 0;
      fVar11 = *(float *)(this + 0x4c);
      fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x48]);
      fVar10 = (float)NEON_ucvtf((uint)(byte)this[0x49]);
      fVar12 = (float)NEON_ucvtf((uint)(byte)this[0x4a]);
      uVar6 = (uint)(fVar11 * fVar13);
      fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x4b]);
      uVar7 = (uint)(fVar11 * fVar10);
      uVar8 = (uint)(fVar11 * fVar12);
      if (0xfe < (int)uVar6) {
        uVar6 = 0xff;
      }
                    /* try { // try from 005a7124 to 006a7177 has its CatchHandler @ 005a7124
                       catch(type#1 @ 00000000) { ... } // from try @ 005a7124 with catch @ 005a7124
                       catch(type#1 @ 00000000) { ... } // from try @ 005a71a8 with catch @ 005a7124
                       catch(type#1 @ 00000000) { ... } // from try @ 005a7274 with catch @ 005a7124
                        */
      iVar9 = (int)(fVar11 * fVar13);
      if (0xfe < (int)uVar7) {
        uVar7 = 0xff;
      }
      if (0xfe < (int)uVar8) {
        uVar8 = 0xff;
      }
      if (0xfe < iVar9) {
        iVar9 = 0xff;
      }
      *(uint *)(*(long *)(this + 0x68) + lVar5 + 0x4c) =
           uVar6 & 0xff | (uVar7 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | iVar9 << 0x18;
      lVar1 = *(long *)(this + 0x68) + lVar5;
      lVar5 = lVar5 + 0x60;
      *(undefined4 *)(lVar1 + 0x5c) = 0;
    } while (lVar5 != 0x180);
  }
  else if (*(int *)(this + 0x3c) == 0) {
                    /* try { // try from 005a6d38 to 006a6e13 has its CatchHandler @ 005a69d0 */
    if (*(int *)(this + 0x60) != 6) {
      *(undefined4 *)(this + 0x60) = 6;
      pvVar2 = operator_new__(0x60);
      pvVar3 = *(void **)(this + 0x68);
      *(void **)(this + 0x68) = pvVar2;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
    pfVar4 = *(float **)(this + 0x68);
    fVar11 = *(float *)(this + 0x50);
    fVar13 = *(float *)(this + 0x54);
    pfVar4[2] = 0.0;
    *pfVar4 = fVar11;
    pfVar4[1] = fVar13;
    fVar10 = *(float *)(this + 0x58);
    pfVar4[5] = fVar13;
    pfVar4[6] = 0.0;
    fVar10 = fVar10 + fVar11;
    pfVar4[4] = fVar10;
    fVar12 = *(float *)(this + 0x5c);
    pfVar4[0x11] = fVar13;
    pfVar4[0x12] = 0.0;
    lVar5 = 0xc;
    pfVar4[8] = fVar11;
    pfVar4[0xc] = fVar11;
                    /* catch() { ... } // from try @ 005a6d10 with catch @ 005a6da4 */
    fVar12 = fVar12 + fVar13;
    pfVar4[10] = 0.0;
    pfVar4[0xe] = 0.0;
    pfVar4[0x10] = fVar10;
    pfVar4[0x16] = 0.0;
    pfVar4[9] = fVar12;
    pfVar4[0xd] = fVar12;
    pfVar4[0x14] = fVar10;
    pfVar4[0x15] = fVar12;
    while( true ) {
      fVar11 = *(float *)(this + 0x4c);
      fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x48]);
      fVar10 = (float)NEON_ucvtf((uint)(byte)this[0x49]);
      fVar12 = (float)NEON_ucvtf((uint)(byte)this[0x4a]);
      uVar6 = (uint)(fVar11 * fVar13);
      fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x4b]);
      uVar7 = (uint)(fVar11 * fVar10);
                    /* try { // try from 005a6e14 to 006a6e53 has its CatchHandler @ 005a6e14
                       catch() { ... } // from try @ 005a6e14 with catch @ 005a6e14
                       catch() { ... } // from try @ 005a6e60 with catch @ 005a6e14
                       catch() { ... } // from try @ 005a6e9c with catch @ 005a6e14
                       catch() { ... } // from try @ 005a6f30 with catch @ 005a6e14 */
      uVar8 = (uint)(fVar11 * fVar12);
      if (0xfe < (int)uVar6) {
        uVar6 = 0xff;
      }
      iVar9 = (int)(fVar11 * fVar13);
      if (0xfe < (int)uVar7) {
        uVar7 = 0xff;
      }
      if (0xfe < (int)uVar8) {
        uVar8 = 0xff;
      }
      if (0xfe < iVar9) {
        iVar9 = 0xff;
      }
      *(uint *)((long)pfVar4 + lVar5) =
           uVar6 & 0xff | (uVar7 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | iVar9 << 0x18;
      if (lVar5 == 0x5c) break;
      pfVar4 = *(float **)(this + 0x68);
      lVar5 = lVar5 + 0x10;
    }
  }
  return;
}


