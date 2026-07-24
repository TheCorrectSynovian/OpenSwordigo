/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2a00
 * Function: Caver::Image::ConvertToPixelFormat
 * Signature: undefined __thiscall ConvertToPixelFormat(Image * this, PixelFormat param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::ConvertToPixelFormat(Caver::PixelFormat, bool) */

void __thiscall Caver::Image::ConvertToPixelFormat(Image *this,int param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  
                    /* catch() { ... } // from try @ 005d1994 with catch @ 005d2a28 */
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
                    /* catch() { ... } // from try @ 005d18f4 with catch @ 005d2a38 */
                    /* catch() { ... } // from try @ 005d1898 with catch @ 005d2a3c */
  iVar15 = *(int *)(this + 4);
  iVar14 = *(int *)(this + 8);
  uVar3 = iVar15 * iVar14;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (long)(int)uVar3;
  uVar10 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4;
  if (SUB168(auVar4 * ZEXT816(0x10),8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  pvVar7 = operator_new__(uVar10);
  if (0 < iVar14) {
    iVar13 = 0;
    do {
      if (0 < iVar15) {
        iVar14 = 0;
        do {
                    /* catch() { ... } // from try @ 005d17ec with catch @ 005d2a8c */
                    /* catch() { ... } // from try @ 005d1790 with catch @ 005d2a90 */
          GetPixel((int)this,iVar14);
          iVar15 = *(int *)(this + 4);
          iVar11 = iVar14 + iVar13 * iVar15;
          iVar14 = iVar14 + 1;
          puVar5 = (undefined8 *)((long)pvVar7 + (long)iVar11 * 0x10);
          puVar5[1] = uStack_90;
          *puVar5 = local_98;
        } while (iVar14 < iVar15);
        iVar14 = *(int *)(this + 8);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar14);
  }
  *(int *)(this + 0xc) = param_2;
  if (param_2 - 1U < 8) {
    iVar13 = *(int *)(&DAT_00698170 + (long)(int)(param_2 - 1U) * 4);
  }
  else {
                    /* catch() { ... } // from try @ 005d16ec with catch @ 005d2ae0 */
    iVar13 = 0;
  }
                    /* catch() { ... } // from try @ 005d16d8 with catch @ 005d2ae4 */
                    /* catch() { ... } // from try @ 005d15a4 with catch @ 005d2ae8 */
  iVar15 = iVar15 * iVar14 * iVar13;
  *(int *)(this + 0x10) = iVar13;
  *(int *)(this + 0x14) = iVar15;
  uVar10 = (ulong)iVar15;
  if ((long)uVar10 < 0) {
    uVar10 = 0xffffffffffffffff;
  }
  pvVar8 = operator_new__(uVar10);
  pvVar9 = *(void **)(this + 0x18);
  *(void **)(this + 0x18) = pvVar8;
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
    iVar14 = *(int *)(this + 8);
  }
  if ((param_3 & 1) == 0) {
                    /* catch() { ... } // from try @ 005d0a80 with catch @ 005d2c78 */
    if (0 < iVar14) {
      iVar13 = *(int *)(this + 4);
      iVar15 = 0;
      do {
        if (0 < iVar13) {
          iVar14 = 0;
          do {
            SetPixel(this,iVar14,iVar15,
                     (FloatColor *)((long)pvVar7 + (long)(iVar14 + iVar15 * iVar13) * 0x10));
            iVar13 = *(int *)(this + 4);
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar13);
          iVar14 = *(int *)(this + 8);
        }
        iVar15 = iVar15 + 1;
                    /* catch() { ... } // from try @ 005d0968 with catch @ 005d2cc8 */
      } while (iVar15 < iVar14);
    }
  }
  else if (0 < iVar14) {
    iVar13 = *(int *)(this + 4);
    iVar15 = 1;
    uVar20 = NEON_fmov(0x3ee00000,4);
                    /* catch() { ... } // from try @ 005d1508 with catch @ 005d2b38 */
    uVar22 = NEON_fmov(0x3ea00000,4);
                    /* catch() { ... } // from try @ 005d14ac with catch @ 005d2b3c */
    uVar23 = NEON_fmov(0x3e400000,4);
    iVar11 = 0;
    do {
      iVar1 = iVar11 + 1;
      if (0 < iVar13) {
        iVar12 = 0;
        do {
          puVar5 = (undefined8 *)((long)pvVar7 + (long)(iVar12 + iVar11 * iVar13) * 0x10);
          uVar24 = *puVar5;
          uVar25 = puVar5[1];
          local_98 = uVar24;
          uStack_90 = uVar25;
          SetPixel(this,iVar12,iVar11,(FloatColor *)&local_98);
          GetPixel((int)this,iVar12);
                    /* catch() { ... } // from try @ 005d1410 with catch @ 005d2b8c */
          iVar13 = *(int *)(this + 4);
                    /* catch() { ... } // from try @ 005d1330 with catch @ 005d2b90 */
                    /* catch() { ... } // from try @ 005d12d0 with catch @ 005d2b94 */
          fVar16 = (float)uVar24 - (float)local_a8;
          fVar17 = (float)((ulong)uVar24 >> 0x20) - (float)((ulong)local_a8 >> 0x20);
          fVar18 = (float)uVar25 - (float)uStack_a0;
          fVar19 = (float)((ulong)uVar25 >> 0x20) - (float)((ulong)uStack_a0 >> 0x20);
          if (iVar12 < iVar13 + -1) {
            puVar5 = (undefined8 *)((long)pvVar7 + (long)(iVar12 + iVar11 * iVar13 + 1) * 0x10);
            fVar21 = (float)((ulong)uVar20 >> 0x20);
            *puVar5 = CONCAT44(fVar17 * fVar21 + (float)((ulong)*puVar5 >> 0x20),
                               fVar16 * (float)uVar20 + (float)*puVar5);
            puVar5[1] = CONCAT44(fVar19 * fVar21 + (float)((ulong)puVar5[1] >> 0x20),
                                 fVar18 * (float)uVar20 + (float)puVar5[1]);
          }
          iVar14 = *(int *)(this + 8);
          if (iVar11 < iVar14 + -1) {
            if (iVar12 != 0) {
                    /* catch() { ... } // from try @ 005d1264 with catch @ 005d2be4 */
              puVar5 = (undefined8 *)((long)pvVar7 + (long)(iVar12 + iVar15 * iVar13 + -1) * 0x10);
              fVar21 = (float)((ulong)uVar23 >> 0x20);
              *puVar5 = CONCAT44(fVar17 * fVar21 + (float)((ulong)*puVar5 >> 0x20),
                                 fVar16 * (float)uVar23 + (float)*puVar5);
              puVar5[1] = CONCAT44(fVar19 * fVar21 + (float)((ulong)puVar5[1] >> 0x20),
                                   fVar18 * (float)uVar23 + (float)puVar5[1]);
            }
            iVar2 = iVar13 * iVar1 + iVar12;
            puVar5 = (undefined8 *)((long)pvVar7 + (long)iVar2 * 0x10);
                    /* catch() { ... } // from try @ 005d11ac with catch @ 005d2c18 */
            fVar21 = (float)((ulong)uVar22 >> 0x20);
                    /* catch() { ... } // from try @ 005d0b78 with catch @ 005d2c28 */
            *puVar5 = CONCAT44(fVar17 * fVar21 + (float)((ulong)*puVar5 >> 0x20),
                               fVar16 * (float)uVar22 + (float)*puVar5);
            puVar5[1] = CONCAT44(fVar19 * fVar21 + (float)((ulong)puVar5[1] >> 0x20),
                                 fVar18 * (float)uVar22 + (float)puVar5[1]);
            if (iVar12 < iVar13 + -1) {
              puVar5 = (undefined8 *)((long)pvVar7 + (long)(iVar2 + 1) * 0x10);
              *puVar5 = CONCAT44(fVar17 * 0.0625 + (float)((ulong)*puVar5 >> 0x20),
                                 fVar16 * 0.0625 + (float)*puVar5);
              puVar5[1] = CONCAT44(fVar19 * 0.0625 + (float)((ulong)puVar5[1] >> 0x20),
                                   fVar18 * 0.0625 + (float)puVar5[1]);
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar13);
      }
      iVar15 = iVar15 + 1;
      iVar11 = iVar1;
    } while (iVar1 < iVar14);
  }
  operator_delete__(pvVar7);
  if (*(long *)(lVar6 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


