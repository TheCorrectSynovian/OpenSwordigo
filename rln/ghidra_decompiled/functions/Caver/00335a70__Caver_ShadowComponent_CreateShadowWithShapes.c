/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00335a70
 * Function: Caver::ShadowComponent::CreateShadowWithShapes
 * Signature: undefined __thiscall CreateShadowWithShapes(ShadowComponent * this, CollisionShapeComponent * * param_1, int param_2, FastVector * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent**, int,
   Caver::FastVector<Caver::ShadowVertex>*) */

void __thiscall
Caver::ShadowComponent::CreateShadowWithShapes
          (ShadowComponent *this,CollisionShapeComponent **param_1,int param_2,FastVector *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  SceneObject *this_00;
  ulong uVar5;
  CollisionShape *this_01;
  Vector2 *pVVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  CollisionShape *unaff_x21;
  float unaff_w22;
  CollisionShapeComponent *this_02;
  ulong uVar11;
  float unaff_w27;
  int *piVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s11;
  float unaff_s12;
  float fVar23;
  float fVar24;
  float unaff_s15;
  float local_f0;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  local_b8 = *(float *)(this + 0x90) + *(float *)(this + 0x98) * 0.5 + *(float *)(this + 0x84);
  fStack_b4 = *(float *)(this + 0x94) + *(float *)(this + 0x9c) * 0.5 + 0.0;
  local_b0 = local_b8 + 0.0;
  fStack_ac = fStack_b4 + (*(float *)(this + 0x9c) * -0.5 - *(float *)(this + 0xa8));
  if (0 < param_2) {
    bVar4 = false;
    uVar11 = (ulong)(uint)param_2;
    fVar15 = DAT_0068431c;
    do {
      this_02 = *param_1;
      if (((((this_02[0x17a] != (CollisionShapeComponent)0x0) && (*(int *)(this_02 + 0x70) == 3)) &&
           (this_00 = *(SceneObject **)(this_02 + 0x28), this_00 != (SceneObject *)0x0)) &&
          ((*(float *)(this_00 + 0x78) + *(float *)(this_00 + 0xb8) <= *(float *)(this + 0xa4) &&
           (*(float *)(this + 0xa0) <= *(float *)(this_00 + 0x78) + *(float *)(this_00 + 0xbc)))))
         && ((this_02[0x178] != (CollisionShapeComponent)0x0 &&
             (uVar5 = SceneObject::isHidden(this_00), (uVar5 & 1) == 0)))) {
        this_01 = (CollisionShape *)CollisionShapeComponent::collisionShape(this_02);
        piVar12 = *(int **)(this_01 + 8);
        uVar5 = CollisionShape::IntersectsWithLineSegment
                          (this_01,(LineSegment *)&local_b8,(Vector2 *)&local_c0,(Vector2 *)0x0,
                           (int *)&local_c8);
        if ((((uVar5 & 1) != 0) &&
            (fVar17 = (local_b8 - local_c0) * (local_b8 - local_c0) +
                      (fStack_b4 - local_bc) * (fStack_b4 - local_bc), fVar17 < fVar15)) &&
           ((*(char *)((long)piVar12 + 0x21) != '\0' ||
            ((local_c8 != 0.0 && (local_c8 != (float)(*piVar12 - 2U))))))) {
          bVar4 = true;
          local_f0 = local_c0;
          unaff_x21 = this_01;
          fVar15 = fVar17;
          unaff_w27 = local_bc;
          unaff_s15 = local_c0;
          unaff_s11 = local_c0;
          unaff_s12 = local_bc;
          unaff_w22 = local_c8;
        }
      }
      uVar11 = uVar11 - 1;
      param_1 = param_1 + 1;
    } while (uVar11 != 0);
    if (bVar4) {
      fVar17 = SQRT(fVar15);
      this[0xbc] = (ShadowComponent)0x1;
      *(float *)(this + 0xc0) = unaff_s15;
      *(float *)(this + 0xc4) = unaff_s12;
      if (NAN(fVar17)) {
        fVar17 = sqrtf(fVar15);
      }
      fVar15 = DAT_00683944;
      fVar17 = fVar17 + *(float *)(this + 0x9c) * -0.5 * DAT_00684430;
      *(undefined4 *)(this + 0xd0) = 0x3f800000;
      if (fVar17 <= fVar15) {
        fVar17 = 1.0;
      }
      else {
        fVar17 = 1.0 - fVar17 / *(float *)(this + 0xa8);
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        *(float *)(this + 0xd0) = fVar17;
      }
      fVar22 = *(float *)(this + 0x7c);
      if (fVar22 <= fVar15) {
        fVar15 = *(float *)(this + 0xa0);
        fVar18 = *(float *)(this + 0xa4);
        fVar20 = (*(float *)(this + 0x98) * 0.5 + (fVar18 - fVar15) * 0.5) * DAT_006846c0;
        fVar22 = 1.0;
      }
      else {
        fVar15 = *(float *)(this + 0xa0);
        fVar18 = *(float *)(this + 0xa4);
        fVar20 = fVar22 * *(float *)(*(long *)(this + 0x28) + 0x8c);
        fVar22 = *(float *)(this + 0x80) / fVar22;
      }
      piVar12 = *(int **)(unaff_x21 + 8);
      uVar8 = (int)unaff_w22 + 1;
      fVar20 = fVar20 * DAT_006846c8 + (fVar20 * DAT_006846c4 - fVar20 * DAT_006846c8) * fVar17;
      fVar21 = 1.0 / fVar20;
      *(float *)(this + 200) = fVar20;
      *(float *)(this + 0xcc) = fVar21;
      fVar20 = DAT_006846cc;
      if (*piVar12 <= (int)uVar8) {
        uVar8 = *(byte *)((long)piVar12 + 0x21) - 1;
      }
      local_c8 = local_f0;
      iVar2 = *(int *)param_3;
      iVar9 = iVar2;
      fStack_c4 = unaff_w27;
      local_c0 = unaff_s11;
      local_bc = unaff_w27;
      if (-1 < (int)(uVar8 & (uint)unaff_w22)) {
        bVar4 = true;
        fVar13 = (fVar15 + fVar18) * 0.5;
        fVar17 = unaff_s15;
        fVar15 = unaff_s11;
        fVar18 = unaff_s11;
        fVar21 = unaff_s12;
        do {
          while (-1 < (int)unaff_w22) {
            unaff_w22 = (float)((int)unaff_w22 + 1);
            if (*piVar12 <= (int)unaff_w22) {
              unaff_w22 = (float)(*(byte *)((long)piVar12 + 0x21) - 1);
            }
            if (-1 < (int)uVar8) goto LAB_00335df0;
LAB_00335e38:
            uVar8 = 0xffffffff;
joined_r0x00335e3c:
            if (-1 < (int)unaff_w22) goto LAB_00335e40;
LAB_00335dfc:
            unaff_w22 = -NAN;
            if ((int)uVar8 < 0) goto LAB_00335e04;
LAB_00335f34:
            CollisionShape::TransformedPolygonVertexAtIndex(unaff_x21,uVar8);
            fVar16 = local_d0 - fVar17;
            if (fVar16 <= 0.0) {
LAB_00336018:
              uVar8 = 0xffffffff;
              bVar1 = bVar4;
            }
            else {
              fVar23 = ABS(fVar16);
              if (fVar23 + fVar23 <= ABS(local_cc - unaff_s12)) goto LAB_00336018;
              fVar14 = *(float *)(this + 200);
              fVar24 = ABS(local_d0 - unaff_s11);
              fVar19 = fVar14 + fVar20;
              if (fVar19 < fVar24) {
                local_e0 = fVar16;
                fStack_dc = local_cc - unaff_s12;
                Vector2::Normalize((Vector2 *)&local_e0);
                fVar14 = *(float *)(this + 200);
                fVar23 = fVar23 - (fVar24 - fVar14);
                local_d0 = fVar17 + local_e0 * fVar23;
                local_cc = unaff_s12 + fStack_dc * fVar23;
              }
              if (bVar4) {
                pVVar6 = (Vector2 *)&local_c0;
              }
              else {
                pVVar6 = (Vector2 *)&local_c8;
              }
              AddShadowSegment(this,pVVar6,(Vector2 *)&local_d0,fVar13 - fVar22 * fVar14,
                               fVar13 + fVar22 * fVar14,param_3);
              bVar4 = false;
              local_c8 = local_d0;
              fStack_c4 = local_cc;
              fVar17 = local_d0;
              unaff_s12 = local_cc;
              bVar1 = false;
              if (fVar19 < fVar24) goto LAB_00336018;
            }
            bVar4 = bVar1;
            if ((int)(uVar8 & (uint)unaff_w22) < 0) goto LAB_0033602c;
          }
          unaff_w22 = -NAN;
          if ((int)uVar8 < 0) goto LAB_00335e38;
LAB_00335df0:
          if (uVar8 != 0) {
            uVar8 = uVar8 - 1;
            goto joined_r0x00335e3c;
          }
          if (*(char *)((long)piVar12 + 0x21) == '\0') goto LAB_00335e38;
          uVar8 = *piVar12 - 1;
          if ((int)unaff_w22 < 0) goto LAB_00335dfc;
LAB_00335e40:
          CollisionShape::TransformedPolygonVertexAtIndex(unaff_x21,(int)unaff_w22);
          fVar16 = local_d0 - fVar18;
          if (0.0 <= fVar16) {
LAB_00335f1c:
            unaff_w22 = -NAN;
          }
          else {
            fVar23 = ABS(fVar16);
            if (fVar23 + fVar23 <= ABS(local_cc - fVar21)) goto LAB_00335f1c;
            fVar15 = *(float *)(this + 200);
            fVar14 = ABS(local_d0 - unaff_s15);
            bVar1 = fVar15 + fVar20 < fVar14;
            if (bVar1) {
              local_d8 = fVar16;
              fStack_d4 = local_cc - fVar21;
              Vector2::Normalize((Vector2 *)&local_d8);
              fVar15 = *(float *)(this + 200);
              fVar23 = fVar23 - (fVar14 - fVar15);
              local_d0 = fVar18 + local_d8 * fVar23;
              local_cc = fVar21 + fStack_d4 * fVar23;
            }
            if (!bVar4) {
              AddShadowSegment(this,(Vector2 *)&local_d0,(Vector2 *)&local_c0,
                               fVar13 - fVar22 * fVar15,fVar13 + fVar22 * fVar15,param_3);
            }
            local_c0 = local_d0;
            local_bc = local_cc;
            fVar18 = local_d0;
            fVar15 = local_d0;
            fVar21 = local_cc;
            if (bVar1) goto LAB_00335f1c;
          }
          if (-1 < (int)uVar8) goto LAB_00335f34;
LAB_00335e04:
          uVar8 = 0xffffffff;
        } while (-1 < (int)unaff_w22);
LAB_0033602c:
        unaff_s15 = fVar17;
        unaff_s11 = fVar15;
        fVar21 = *(float *)(this + 0xcc);
        fVar17 = *(float *)(this + 0xd0);
        iVar9 = *(int *)param_3;
      }
      fVar15 = (*(float *)(this + 0xc0) - unaff_s11) * fVar21;
      fVar21 = fVar21 * (unaff_s15 - *(float *)(this + 0xc0));
      if (fVar21 <= fVar15) {
        fVar15 = fVar21;
      }
      if (iVar2 < iVar9) {
        fVar15 = fVar15 + 0.5;
        if (1.0 < fVar15) {
          fVar15 = 1.0;
        }
        fVar15 = fVar17 * _DAT_006846d0 * fVar15;
        iVar9 = (int)(fVar15 * DAT_00683ffc);
        uVar8 = (uint)(fVar15 * 0.0);
        if (0xfe < iVar9) {
          iVar9 = 0xff;
        }
        if (0xfe < (int)uVar8) {
          uVar8 = 0xff;
        }
        uVar8 = uVar8 & 0xff;
        lVar7 = (long)iVar2;
        lVar10 = lVar7 * 0x18 + 0x14;
        do {
          lVar7 = lVar7 + 1;
          *(uint *)(*(long *)(param_3 + 8) + lVar10) =
               iVar9 << 0x18 | uVar8 << 0x10 | uVar8 | uVar8 << 8;
          lVar10 = lVar10 + 0x18;
        } while (lVar7 < *(int *)param_3);
      }
      goto LAB_00335ca8;
    }
  }
  this[0xbc] = (ShadowComponent)0x0;
LAB_00335ca8:
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


