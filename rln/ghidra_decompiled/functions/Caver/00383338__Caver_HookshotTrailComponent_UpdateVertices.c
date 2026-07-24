/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00383338
 * Function: Caver::HookshotTrailComponent::UpdateVertices
 * Signature: undefined __thiscall UpdateVertices(HookshotTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HookshotTrailComponent::UpdateVertices() */

void __thiscall Caver::HookshotTrailComponent::UpdateVertices(HookshotTrailComponent *this)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  FloatColor *extraout_x1;
  int iVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  byte local_70;
  byte local_6f;
  byte local_6e;
  byte local_6d;
  float local_68;
  float fStack_64;
  float local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_68 = (float)*(undefined8 *)(this + 0xac) - (float)*(undefined8 *)(this + 0xa4);
  fStack_64 = (float)((ulong)*(undefined8 *)(this + 0xac) >> 0x20) -
              (float)((ulong)*(undefined8 *)(this + 0xa4) >> 0x20);
  Vector2::Normalize((Vector2 *)&local_68);
  fVar5 = fStack_64;
  local_60[0] = *(float *)(this + 0xa4);
  fVar27 = *(float *)(this + 0xa8);
  uVar21 = NEON_fmov(0x41700000,4);
  local_58 = *(undefined8 *)(this + 0xac);
  fVar26 = -local_68;
  local_50 = CONCAT44(fStack_64 * (float)((ulong)uVar21 >> 0x20) + (float)((ulong)local_58 >> 0x20),
                      local_68 * (float)uVar21 + (float)local_58);
  uVar2 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
  local_60[1] = fVar27;
  Color::FromFloatColor((Color *)(this + 0xb4),extraout_x1);
  fVar4 = DAT_00683f68;
  fVar22 = (float)NEON_ucvtf((uint)local_70);
  uVar12 = (uint)(fVar22 + fVar22);
  fVar23 = (float)NEON_ucvtf((uint)local_6f);
  if (0xfe < (int)uVar12) {
    uVar12 = 0xffffffff;
  }
  uVar13 = (uint)(fVar23 + fVar23);
  fVar24 = (float)NEON_ucvtf((uint)local_6e);
  if (0xfe < (int)uVar13) {
    uVar13 = 0xffffffff;
  }
  uVar14 = (uint)(fVar24 + fVar24);
  fVar25 = (float)NEON_ucvtf((uint)local_6d);
  if (0xfe < (int)uVar14) {
    uVar14 = 0xffffffff;
  }
  uVar15 = (uint)(fVar25 + fVar25);
  if (0xfe < (int)uVar15) {
    uVar15 = 0xffffffff;
  }
  lVar9 = 0;
  pfVar10 = local_60;
  lVar11 = 0x3c;
  while( true ) {
    fVar30 = *pfVar10;
    fVar31 = (float)(&DAT_00688af0)[lVar9];
    fVar28 = (float)(int)lVar9 * 0.5 + 4.0;
    fVar32 = fVar5 * fVar28;
    fVar29 = fVar28 * fVar26;
    lVar1 = *(long *)(this + 0x88) + lVar11;
    fVar33 = fVar5 * fVar28 * fVar4;
    fVar28 = fVar28 * fVar4 * fVar26;
    *(float *)(lVar1 + -0x3c) = fVar30 - fVar32;
    *(float *)(lVar1 + -0x38) = fVar27 - fVar29;
    uVar16 = (uint)(fVar31 * fVar22);
    *(float *)(lVar1 + -0xc) = fVar32 + fVar30;
    *(float *)(lVar1 + -8) = fVar29 + fVar27;
    uVar17 = (uint)(fVar31 * fVar23);
    uVar18 = (uint)(fVar31 * fVar24);
    if (0xfe < (int)uVar16) {
      uVar16 = 0xff;
    }
    iVar19 = (int)(fVar31 * fVar25);
    if (0xfe < (int)uVar17) {
      uVar17 = 0xff;
    }
    uVar20 = (uint)(fVar31 * (float)(uVar12 & 0xff));
    if (0xfe < (int)uVar18) {
      uVar18 = 0xff;
    }
    uVar6 = (uint)(fVar31 * (float)(uVar13 & 0xff));
    if (0xfe < iVar19) {
      iVar19 = 0xff;
    }
    uVar7 = (uint)(fVar31 * (float)(uVar14 & 0xff));
    if (0xfe < (int)uVar20) {
      uVar20 = 0xff;
    }
    iVar8 = (int)(fVar31 * (float)(uVar15 & 0xff));
    if (0xfe < (int)uVar6) {
      uVar6 = 0xff;
    }
    if (0xfe < (int)uVar7) {
      uVar7 = 0xff;
    }
    if (0xfe < iVar8) {
      iVar8 = 0xff;
    }
    uVar20 = uVar20 & 0xff | (uVar6 & 0xff) << 8 | (uVar7 & 0xff) << 0x10 | iVar8 << 0x18;
    *(undefined4 *)(lVar1 + -0x24) = uVar2;
    *(undefined4 *)(lVar1 + -0x14) = uVar2;
    *(undefined4 *)(lVar1 + -4) = uVar2;
    *(float *)(lVar1 + -0x2c) = fVar30 - fVar33;
    *(float *)(lVar1 + -0x28) = fVar27 - fVar28;
    *(float *)(lVar1 + -0x1c) = fVar33 + fVar30;
    *(float *)(lVar1 + -0x18) = fVar28 + fVar27;
    *(undefined4 *)(lVar1 + -0x34) = uVar2;
    *(uint *)(lVar1 + -0x30) = uVar20;
    uVar16 = uVar16 & 0xff | (uVar17 & 0xff) << 8 | (uVar18 & 0xff) << 0x10 | iVar19 << 0x18;
    *(uint *)(*(long *)(this + 0x88) + lVar11 + -0x20) = uVar16;
    *(uint *)(*(long *)(this + 0x88) + lVar11 + -0x10) = uVar16;
    *(uint *)(*(long *)(this + 0x88) + lVar11) = uVar20;
    if (lVar11 == 0xbc) break;
    fVar27 = pfVar10[3];
    lVar9 = lVar9 + 1;
    lVar11 = lVar11 + 0x40;
    pfVar10 = pfVar10 + 2;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


