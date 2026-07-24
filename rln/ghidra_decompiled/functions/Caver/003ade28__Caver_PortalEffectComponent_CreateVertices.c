/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ade28
 * Function: Caver::PortalEffectComponent::CreateVertices
 * Signature: undefined __thiscall CreateVertices(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::CreateVertices() */

void __thiscall Caver::PortalEffectComponent::CreateVertices(PortalEffectComponent *this)

{
  bool bVar1;
  FastVector<Caver::PortalEffectComponent::Vertex> *this_00;
  FastVector<unsigned_short> *this_01;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  double dVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  FloatColor *extraout_x1;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  float *pfVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  double dVar28;
  float fVar30;
  undefined8 uVar31;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  double dVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0 [2];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined2 local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  lVar23 = *(long *)(this + 0x98);
  if (lVar23 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar23 = *(long *)(this + 0x98);
  }
  local_b0[0] = *(int *)(lVar23 + 0x70);
  puVar13 = *(undefined8 **)(lVar23 + 0x78);
  puVar10 = *(undefined8 **)(lVar23 + 0x80);
  local_a8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  uVar12 = (long)puVar10 - (long)puVar13;
  puVar8 = (undefined8 *)0x0;
  if (uVar12 != 0) {
    if ((ulong)((long)uVar12 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar8 = operator_new(uVar12);
    puVar13 = *(undefined8 **)(lVar23 + 0x78);
    puVar10 = *(undefined8 **)(lVar23 + 0x80);
  }
  local_98 = puVar8 + ((long)uVar12 >> 3);
  local_a0 = puVar8;
  if ((long)puVar10 - (long)puVar13 != 0) {
    uVar18 = (long)puVar10 + (-8 - (long)puVar13);
    uVar12 = (uVar18 >> 3) + 1;
    puVar15 = puVar8;
    if (uVar12 < 8) {
LAB_003aded8:
      do {
        puVar22 = puVar13 + 1;
        *puVar15 = *puVar13;
        puVar13 = puVar22;
        puVar15 = puVar15 + 1;
      } while (puVar10 != puVar22);
    }
    else {
      uVar20 = ((long)puVar10 - (long)puVar13) - 8U & 0xfffffffffffffff8;
      if ((puVar8 < (undefined8 *)((long)puVar13 + uVar20 + 4) &&
           puVar13 < (undefined8 *)((long)puVar8 + uVar20 + 4)) ||
         ((long)puVar8 + 4U < (long)puVar13 + uVar20 + 8 &&
          (long)puVar13 + 4U < (long)puVar8 + uVar20 + 8)) goto LAB_003aded8;
      uVar21 = uVar12 & 0x3ffffffffffffff8;
      puVar15 = puVar13 + 4;
      puVar22 = puVar8 + 4;
      uVar20 = uVar21;
      do {
        uVar31 = puVar15[-4];
        uVar34 = puVar15[-1];
        uVar33 = puVar15[-2];
        uVar37 = puVar15[1];
        uVar36 = *puVar15;
        uVar39 = puVar15[3];
        uVar38 = puVar15[2];
        uVar20 = uVar20 - 8;
        puVar22[-3] = puVar15[-3];
        puVar22[-4] = uVar31;
        puVar22[-1] = uVar34;
        puVar22[-2] = uVar33;
        puVar22[1] = uVar37;
        *puVar22 = uVar36;
        puVar22[3] = uVar39;
        puVar22[2] = uVar38;
        puVar15 = puVar15 + 8;
        puVar22 = puVar22 + 8;
      } while (uVar20 != 0);
      puVar13 = puVar13 + uVar21;
      puVar15 = puVar8 + uVar21;
      if (uVar12 != uVar21) goto LAB_003aded8;
    }
    local_a0 = (undefined8 *)((long)puVar8 + (uVar18 & 0xfffffffffffffff8) + 8);
  }
  local_90 = *(undefined2 *)(lVar23 + 0x90);
  local_a8 = puVar8;
  Polygon::SplitEdgesToMaxLength((Polygon *)local_b0,10.0);
  this_00 = (FastVector<Caver::PortalEffectComponent::Vertex> *)(this + 0xd8);
  iVar9 = local_b0[0] * 2 + 2;
  if (*(int *)(this + 0xdc) < iVar9) {
    FastVector<Caver::PortalEffectComponent::Vertex>::Resize(this_00,iVar9);
  }
  this_01 = (FastVector<unsigned_short> *)(this + 0xe8);
  if (*(int *)(this + 0xec) < local_b0[0] * 6) {
    FastVector<unsigned_short>::Resize(this_01,local_b0[0] * 6);
  }
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)this_01 = 0;
  Polygon::Bounds();
  Color::FromFloatColor((Color *)(this + 0xb8),extraout_x1);
  dVar28 = DAT_00684790;
  if (-1 < local_b0[0]) {
    fVar24 = (float)local_c0 + (float)uStack_b8 * 0.5;
    fVar29 = (float)((ulong)local_c0 >> 0x20) + (float)((ulong)uStack_b8 >> 0x20) * 0.5;
    lVar23 = 0;
    fVar27 = DAT_00689974;
    do {
      uVar7 = local_c4;
      uVar31 = local_a8[lVar23];
      fVar30 = (float)((ulong)uVar31 >> 0x20);
      local_d0 = CONCAT44(fVar30 - fVar29,(float)uVar31 - fVar24);
      fVar25 = (float)Vector2::Angle((Vector2 *)&local_d0);
      fVar26 = fVar24 - (float)uVar31;
      fVar30 = fVar29 - fVar30;
      fVar30 = fVar26 * fVar26 + fVar30 * fVar30;
      fVar26 = SQRT(fVar30);
      if (NAN(fVar26)) {
        fVar26 = sqrtf(fVar30);
      }
      for (; fVar25 < fVar27; fVar25 = (float)((double)fVar25 + dVar28)) {
      }
      if (lVar23 < local_b0[0]) {
        iVar19 = *(int *)(this + 0xe8);
        iVar9 = *(int *)(this + 0xec);
        if (iVar9 <= iVar19) {
          iVar9 = iVar9 * 2;
          if (iVar9 < 0xb) {
            iVar9 = 10;
          }
          FastVector<unsigned_short>::Resize(this_01,iVar9);
          iVar19 = *(int *)(this + 0xe8);
          iVar9 = *(int *)(this + 0xec);
        }
        lVar14 = *(long *)(this + 0xf0);
        iVar17 = iVar19 + 1;
        uVar4 = (ushort)(lVar23 << 1);
        *(ushort *)(lVar14 + (long)iVar19 * 2) = uVar4;
        *(int *)(this + 0xe8) = iVar17;
        if (iVar9 <= iVar17) {
          iVar9 = iVar9 * 2;
          if (iVar9 < 0xb) {
            iVar9 = 10;
          }
          FastVector<unsigned_short>::Resize(this_01,iVar9);
          lVar14 = *(long *)(this + 0xf0);
          iVar17 = *(int *)(this + 0xe8);
          iVar9 = *(int *)(this + 0xec);
        }
        iVar19 = iVar17 + 1;
        *(ushort *)(lVar14 + (long)iVar17 * 2) = uVar4 | 1;
        *(int *)this_01 = iVar19;
        if (iVar9 <= iVar19) {
          iVar9 = iVar9 * 2;
          if (iVar9 < 0xb) {
            iVar9 = 10;
          }
          FastVector<unsigned_short>::Resize(this_01,iVar9);
          iVar19 = *(int *)(this + 0xe8);
          lVar14 = *(long *)(this + 0xf0);
        }
        *(ushort *)(lVar14 + (long)iVar19 * 2) = uVar4 + 3;
        *(int *)this_01 = iVar19 + 1;
      }
      iVar9 = *(int *)(this + 0xd8);
      if (*(int *)(this + 0xdc) <= iVar9) {
        iVar9 = *(int *)(this + 0xdc) * 2;
        if (iVar9 < 0xb) {
          iVar9 = 10;
        }
        FastVector<Caver::PortalEffectComponent::Vertex>::Resize(this_00,iVar9);
        iVar9 = *(int *)this_00;
      }
      puVar13 = (undefined8 *)(*(long *)(this + 0xe0) + (long)iVar9 * 0x20);
      *puVar13 = CONCAT44(fVar29,fVar24);
      *(undefined4 *)(puVar13 + 1) = 0;
      *(undefined4 *)((long)puVar13 + 0x14) = uVar7;
      *(float *)(puVar13 + 3) = fVar25;
      *(undefined4 *)((long)puVar13 + 0x1c) = 0;
      iVar9 = *(int *)(this + 0xd8) + 1;
      *(int *)(this + 0xd8) = iVar9;
      if (*(int *)(this + 0xdc) <= iVar9) {
        iVar9 = *(int *)(this + 0xdc) * 2;
        if (iVar9 < 0xb) {
          iVar9 = 10;
        }
        FastVector<Caver::PortalEffectComponent::Vertex>::Resize(this_00,iVar9);
        iVar9 = *(int *)this_00;
      }
      puVar13 = (undefined8 *)(*(long *)(this + 0xe0) + (long)iVar9 * 0x20);
      *puVar13 = uVar31;
      *(undefined4 *)(puVar13 + 1) = 0;
      *(undefined4 *)((long)puVar13 + 0x14) = uVar7;
      *(float *)(puVar13 + 3) = fVar25;
      *(float *)((long)puVar13 + 0x1c) = fVar26;
      *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
      bVar1 = lVar23 < local_b0[0];
      lVar23 = lVar23 + 1;
      fVar27 = fVar25;
    } while (bVar1);
    if (0 < local_b0[0]) {
      lVar11 = *(long *)(this + 0xe0);
      lVar14 = 0;
      iVar9 = 0;
      lVar23 = 0;
      do {
        fVar27 = (float)AngleDifference(*(float *)(lVar11 + (lVar14 >> 0x1b | 0x20U) + 0x18),
                                        *(float *)(lVar11 + (long)(iVar9 + 3) * 0x20 + 0x18));
        lVar11 = *(long *)(this + 0xe0);
        lVar23 = lVar23 + 1;
        lVar2 = lVar11 + (long)iVar9 * 0x20;
        iVar9 = iVar9 + 2;
        lVar14 = lVar14 + 0x200000000;
        *(float *)(lVar2 + 0x18) = fVar27 * 0.5 + *(float *)(lVar2 + 0x18);
      } while (lVar23 < local_b0[0]);
    }
  }
  lVar23 = *(long *)(this + 0xb0);
  if (lVar23 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
    lVar23 = *(long *)(this + 0xb0);
    if (lVar23 == 0) {
      dVar28 = 1.0;
      goto LAB_003ae234;
    }
  }
  dVar28 = (double)(1.0 / *(float *)(lVar23 + 0x80));
LAB_003ae234:
  uVar3 = *(uint *)(this + 0xd8);
  uVar12 = (ulong)(int)uVar3;
  if (0 < (int)uVar3) {
    lVar23 = *(long *)(this + 0xe0);
    dVar32 = (double)*(float *)(this + 0xfc);
    dVar35 = (double)*(float *)(this + 0xf8);
    if (uVar3 < 3) {
      lVar11 = 0;
    }
    else {
      uVar18 = 2;
      if ((uVar12 & 1) != 0) {
        uVar18 = uVar12 & 1;
      }
      lVar11 = uVar12 - uVar18;
      puVar13 = (undefined8 *)(lVar23 + 0x18);
      lVar14 = lVar11;
      do {
        lVar14 = lVar14 + -2;
        *(ulong *)((long)puVar13 + -0xc) =
             CONCAT44((float)(dVar28 * ((double)((float)((ulong)*puVar13 >> 0x20) * 0.01) /
                                       6.283185307179586) + dVar35),
                      (float)(dVar28 * ((double)(float)*puVar13 / 6.283185307179586) + dVar32));
        *(ulong *)((long)puVar13 + 0x14) =
             CONCAT44((float)(dVar28 * ((double)((float)((ulong)puVar13[4] >> 0x20) * 0.01) /
                                       6.283185307179586) + dVar35),
                      (float)(dVar28 * ((double)(float)puVar13[4] / 6.283185307179586) + dVar32));
        puVar13 = puVar13 + 8;
      } while (lVar14 != 0);
    }
    dVar6 = DAT_00684790;
    fVar27 = DAT_00683944;
    lVar14 = uVar12 - lVar11;
    pfVar16 = (float *)(lVar23 + lVar11 * 0x20 + 0x10);
    do {
      lVar14 = lVar14 + -1;
      pfVar16[-1] = (float)(dVar28 * ((double)pfVar16[2] / dVar6) + dVar32);
      *pfVar16 = (float)(dVar28 * ((double)(pfVar16[3] * fVar27) / dVar6) + dVar35);
      pfVar16 = pfVar16 + 8;
    } while (lVar14 != 0);
  }
  if (local_a8 != (undefined8 *)0x0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


