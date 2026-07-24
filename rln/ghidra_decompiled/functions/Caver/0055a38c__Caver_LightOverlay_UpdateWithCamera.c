/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055a38c
 * Function: Caver::LightOverlay::UpdateWithCamera
 * Signature: undefined __thiscall UpdateWithCamera(LightOverlay * this, Camera * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightOverlay::UpdateWithCamera(Caver::Camera*) */

void __thiscall Caver::LightOverlay::UpdateWithCamera(LightOverlay *this,Camera *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  Vector2 *pVVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float local_bc;
  undefined8 local_b8;
  
                    /* catch() { ... } // from try @ 00559ed8 with catch @ 0055a3a8 */
                    /* catch() { ... } // from try @ 0055a10c with catch @ 0055a3ac */
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0055a3d0 to 0065a4db has its CatchHandler @ 0055a4e0 */
  iVar16 = *(int *)(this + 0x94);
  uVar20 = (ulong)iVar16;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar20;
  uVar7 = uVar20 * 0x14;
  if (SUB168(auVar1 * ZEXT816(0x14),8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new__(uVar7);
  if (0 < iVar16) {
    lVar19 = 0;
    lVar21 = 0;
    lVar22 = 0;
    do {
      Camera::ViewPointFromWorldPosition
                ((Vector3 *)param_1,(float *)(*(long *)(this + 0x98) + lVar21));
      pVVar18 = (Vector2 *)((long)pvVar3 + lVar19 + 4);
      *(undefined8 *)pVVar18 = local_b8;
                    /* catch() { ... } // from try @ 0055a070 with catch @ 0055a444 */
      uVar30 = *(undefined8 *)((float *)(*(long *)(this + 0x98) + lVar21) + 1);
                    /* catch() { ... } // from try @ 0055a00c with catch @ 0055a448 */
      fVar23 = *(float *)(param_1 + 0x10) - *(float *)(*(long *)(this + 0x98) + lVar21);
      fVar26 = (float)*(undefined8 *)(param_1 + 0x14) - (float)uVar30;
      fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) -
               (float)((ulong)uVar30 >> 0x20);
      fVar26 = fVar23 * fVar23 + fVar26 * fVar26 + fVar28 * fVar28;
      fVar23 = SQRT(fVar26);
      if (NAN(fVar23)) {
        fVar23 = sqrtf(fVar26);
      }
      Camera::VisibleAreaSizeAtDistance(fVar23);
      lVar6 = *(long *)(this + 0x98);
      *(float *)((long)pvVar3 + lVar19 + 0xc) =
           (*(float *)(lVar6 + lVar21 + 0x30) / local_bc) * *(float *)(param_1 + 0xc);
      *(undefined4 *)((long)pvVar3 + lVar19 + 0x10) = *(undefined4 *)(lVar6 + lVar21 + 0x2c);
      fVar23 = (float)Rectangle::DistanceFromPointSquared((Rectangle *)this,pVVar18);
      fVar26 = *(float *)((long)pvVar3 + lVar19 + 0xc);
      lVar22 = lVar22 + 1;
      lVar21 = lVar21 + 0x3c;
      *(bool *)((long)pvVar3 + lVar19) = fVar23 < fVar26 * fVar26;
      uVar20 = (ulong)*(int *)(this + 0x94);
                    /* try { // try from 0055a4dc to 0065a5e3 has its CatchHandler @ 00559e6c */
      lVar19 = lVar19 + 0x14;
                    /* catch() { ... } // from try @ 0055a3d0 with catch @ 0055a4e0 */
                    /* catch() { ... } // from try @ 00559fd4 with catch @ 0055a4e4 */
    } while (lVar22 < (long)uVar20);
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  if ((int)uVar20 < 1) {
    fVar23 = 0.0;
  }
  else {
                    /* catch() { ... } // from try @ 00559fa8 with catch @ 0055a4f8 */
    lVar22 = 0;
    uVar30 = 0;
    fVar23 = 0.0;
    uVar29 = 0;
    do {
      if (*(char *)((long)pvVar3 + lVar22 * 0x14) != '\0') {
        iVar4 = *(int *)(this + 0x18);
        fVar26 = *(float *)((long)pvVar3 + lVar22 * 0x14 + 8);
        fVar28 = *(float *)((long)pvVar3 + lVar22 * 0x14 + 0xc);
        iVar14 = (int)((fVar26 + fVar28) / (float)iVar4);
        uVar12 = (uint)((fVar26 - fVar28) / (float)iVar4);
        uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
        iVar16 = *(int *)(this + 0x10) + -1;
        if (iVar14 <= *(int *)(this + 0x10) + -1) {
          iVar16 = iVar14;
        }
        fVar33 = 0.0;
        if ((int)uVar12 <= iVar16) {
                    /* catch() { ... } // from try @ 00559f90 with catch @ 0055a568 */
          fVar23 = *(float *)((long)pvVar3 + lVar22 * 0x14 + 4);
          fVar34 = *(float *)((long)pvVar3 + lVar22 * 0x14 + 0x10);
                    /* catch() { ... } // from try @ 00559f28 with catch @ 0055a574 */
          fVar33 = 0.0;
          while( true ) {
            fVar24 = (float)(int)(iVar4 * uVar12) - fVar26;
            fVar24 = fVar24 * fVar24;
            fVar27 = ABS(fVar28 * fVar28 - fVar24);
            fVar25 = SQRT(fVar27);
            if (NAN(fVar25)) {
              fVar25 = sqrtf(fVar27);
            }
            iVar14 = *(int *)(this + 0x1c);
            iVar4 = *(int *)(this + 0x14) + -1;
            iVar15 = (int)((fVar23 + fVar25) / (float)iVar14);
            uVar13 = (uint)((fVar23 - fVar25) / (float)iVar14);
                    /* catch() { ... } // from try @ 0055a694 with catch @ 0055a5e4 */
            uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
            if (iVar15 <= iVar4) {
              iVar4 = iVar15;
            }
            if ((int)uVar13 <= iVar4) {
                    /* try { // try from 0055a5fc to 0065a603 has its CatchHandler @ 0055a6a0 */
              pfVar8 = (float *)(*(long *)(this + 0x28) +
                                (long)(int)(uVar13 + *(int *)(this + 0x14) * uVar12) * 4);
              while( true ) {
                fVar25 = (float)(int)(iVar14 * uVar13) - fVar23;
                fVar27 = fVar24 + fVar25 * fVar25;
                fVar25 = SQRT(fVar27);
                if (NAN(fVar25)) {
                    /* try { // try from 0055a630 to 0065a63b has its CatchHandler @ 0055a648 */
                  fVar25 = sqrtf(fVar27);
                }
                    /* catch() { ... } // from try @ 0055a630 with catch @ 0055a648 */
                fVar25 = fVar34 * (1.0 - fVar25 / fVar28);
                fVar33 = fVar33 + fVar25;
                *pfVar8 = *pfVar8 + fVar25;
                if (iVar4 <= (int)uVar13) break;
                iVar14 = *(int *)(this + 0x1c);
                uVar13 = uVar13 + 1;
                pfVar8 = pfVar8 + 1;
              }
            }
            if (iVar16 <= (int)uVar12) break;
            iVar4 = *(int *)(this + 0x18);
            uVar12 = uVar12 + 1;
          }
                    /* try { // try from 0055a66c to 0065a693 has its CatchHandler @ 0055a69c */
          uVar30 = *(undefined8 *)(this + 0xa0);
          uVar29 = *(undefined8 *)(this + 0xa8);
          fVar23 = *(float *)(this + 0xb0);
          uVar20 = (ulong)*(uint *)(this + 0x94);
        }
        fVar23 = fVar33 + fVar23;
        lVar21 = *(long *)(this + 0x98) + lVar22 * 0x3c;
        uVar31 = *(undefined8 *)(lVar21 + 0xc);
        uVar32 = *(undefined8 *)(lVar21 + 0x14);
        *(float *)(this + 0xb0) = fVar23;
                    /* try { // try from 0055a694 to 0065a6af has its CatchHandler @ 0055a5e4 */
        uVar30 = CONCAT44((float)((ulong)uVar31 >> 0x20) * fVar33 + (float)((ulong)uVar30 >> 0x20),
                          (float)uVar31 * fVar33 + (float)uVar30);
                    /* catch() { ... } // from try @ 0055a66c with catch @ 0055a69c */
        uVar29 = CONCAT44((float)((ulong)uVar32 >> 0x20) * fVar33 + (float)((ulong)uVar29 >> 0x20),
                          (float)uVar32 * fVar33 + (float)uVar29);
                    /* catch() { ... } // from try @ 0055a5fc with catch @ 0055a6a0 */
        *(undefined8 *)(this + 0xa0) = uVar30;
        *(undefined8 *)(this + 0xa8) = uVar29;
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)uVar20);
  }
  iVar16 = *(int *)(this + 0x10);
                    /* catch() { ... } // from try @ 0055a6b0 with catch @ 0055a6bc */
                    /* try { // try from 0055a6c0 to 0065a6c3 has its CatchHandler @ 0055a6c8 */
  if (0 < iVar16) {
                    /* catch() { ... } // from try @ 0055a6c0 with catch @ 0055a6c8 */
    pfVar8 = *(float **)(this + 0x28);
    iVar14 = *(int *)(this + 0x14);
                    /* try { // try from 0055a6d4 to 0065a71b has its CatchHandler @ 0055a6d4
                       catch(type#1 @ 00000000) { ... } // from try @ 0055a6d4 with catch @ 0055a6d4
                       catch(type#1 @ 00000000) { ... } // from try @ 0055a730 with catch @ 0055a6d4
                       catch(type#1 @ 00000000) { ... } // from try @ 0055a7ac with catch @ 0055a6d4
                        */
    iVar4 = 0;
    puVar11 = (uint *)(*(long *)(this + 0x38) + 0xc);
    do {
      if (0 < iVar14) {
        iVar16 = 0;
        pfVar9 = pfVar8;
        puVar10 = puVar11;
        do {
          fVar23 = *pfVar9;
          pfVar8 = pfVar9 + 1;
          *pfVar9 = 0.0;
          fVar23 = (1.0 - fVar23) * *(float *)(this + 0x20);
          fVar26 = (float)NEON_ucvtf((uint)(byte)this[0x24]);
                    /* try { // try from 0055a71c to 0065a72f has its CatchHandler @ 0055a780 */
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          fVar28 = (float)NEON_ucvtf((uint)(byte)this[0x25]);
          fVar33 = (float)NEON_ucvtf((uint)(byte)this[0x26]);
                    /* try { // try from 0055a730 to 0065a7a3 has its CatchHandler @ 0055a6d4 */
          uVar12 = (uint)(fVar23 * fVar26);
          fVar26 = (float)NEON_ucvtf((uint)(byte)this[0x27]);
          uVar13 = (uint)(fVar23 * fVar28);
          uVar17 = (uint)(fVar23 * fVar33);
          if (0xfe < (int)uVar12) {
            uVar12 = 0xff;
          }
          iVar14 = (int)(fVar23 * fVar26);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          if (0xfe < (int)uVar17) {
            uVar17 = 0xff;
          }
          if (0xfe < iVar14) {
            iVar14 = 0xff;
          }
          puVar11 = puVar10 + 4;
          *puVar10 = uVar12 & 0xff | (uVar13 & 0xff) << 8 | (uVar17 & 0xff) << 0x10 | iVar14 << 0x18
          ;
          iVar14 = *(int *)(this + 0x14);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0055a71c with catch @ 0055a780
                        */
          iVar16 = iVar16 + 1;
          pfVar9 = pfVar8;
          puVar10 = puVar11;
        } while (iVar16 < iVar14);
        iVar16 = *(int *)(this + 0x10);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar16);
    fVar23 = *(float *)(this + 0xb0);
  }
                    /* try { // try from 0055a7ac to 0065a7b7 has its CatchHandler @ 0055a6d4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0055a7a4 with catch @ 0055a7b4
                        */
  if (DAT_00683944 < fVar23) {
    fVar26 = 1.0 / fVar23;
                    /* catch() { ... } // from try @ 0055a878 with catch @ 0055a7c8 */
    *(ulong *)(this + 0xa8) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20) * fVar26,
                  (float)*(undefined8 *)(this + 0xa8) * fVar26);
    *(ulong *)(this + 0xa0) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20) * fVar26,
                  (float)*(undefined8 *)(this + 0xa0) * fVar26);
                    /* try { // try from 0055a7e0 to 0065a7e7 has its CatchHandler @ 0055a884 */
    *(float *)(this + 0xb0) = fVar23 * (1.0 / ((float)iVar16 * (float)*(int *)(this + 0x14)));
  }
  operator_delete__(pvVar3);
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0055a814 to 0065a81f has its CatchHandler @ 0055a82c */
                    /* catch() { ... } // from try @ 0055a814 with catch @ 0055a82c */
  return;
}


