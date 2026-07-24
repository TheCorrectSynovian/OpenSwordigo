/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00389c5c
 * Function: Caver::MagicHookshotComponent::FindGrabbableObject
 * Signature: undefined __cdecl FindGrabbableObject(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::FindGrabbableObject() */

void Caver::MagicHookshotComponent::FindGrabbableObject(void)

{
  Scene *pSVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined *puVar10;
  long in_x0;
  Scene *this;
  ulong uVar11;
  long lVar12;
  undefined8 *in_x8;
  long *plVar13;
  long lVar14;
  byte bVar15;
  Scene *pSVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  long *local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  Vector2 aVStack_b8 [8];
  undefined8 local_b0;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  *in_x8 = 0;
  puVar10 = PTR_Interface_007e5b08;
  fVar9 = DAT_00688c88;
  dVar8 = DAT_00688c80;
  fVar7 = DAT_00684318;
  fVar6 = DAT_00684314;
  this = *(Scene **)(*(long *)(in_x0 + 0x28) + 0x20);
  pSVar16 = *(Scene **)(this + 0x110);
  pSVar1 = this + 0x110;
  if (pSVar1 != pSVar16) {
    local_e8 = (long *)0x0;
    bVar5 = false;
    fVar20 = DAT_0068431c;
    do {
      uVar11 = Scene::IsObjectVisible(this,*(SceneObject **)(pSVar16 + 0x10));
      if ((uVar11 & 1) != 0) {
        plVar2 = *(long **)(*(long *)(pSVar16 + 0x10) + 200);
        for (plVar13 = *(long **)(*(long *)(pSVar16 + 0x10) + 0xc0); plVar13 != plVar2;
            plVar13 = plVar13 + 1) {
          uVar11 = (**(code **)(*(long *)*plVar13 + 0xa0))((long *)*plVar13,puVar10);
          if ((uVar11 & 1) != 0) {
            lVar14 = *plVar13;
            if (*(int *)(lVar14 + 0x180) == 7) {
              bVar15 = 1;
            }
            else {
              if ((*(char *)(lVar14 + 0x17b) == '\0') ||
                 (lVar12 = SceneObject::ComponentWithInterface
                                     (*(SceneObject **)(lVar14 + 0x28),(long)PTR_Interface_007e4d78)
                 , bVar5 || lVar12 == 0)) goto LAB_00389e2c;
              bVar15 = 0;
            }
            uVar19 = *(undefined8 *)(*(long *)(in_x0 + 0x28) + 0x70);
            local_b0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar14 + 0x168) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar14 + 0x170) >> 0x20) * 0.5) -
                                (float)((ulong)uVar19 >> 0x20),
                                ((float)*(undefined8 *)(lVar14 + 0x168) +
                                (float)*(undefined8 *)(lVar14 + 0x170) * 0.5) - (float)uVar19);
            fVar17 = (float)Vector2::Angle((Vector2 *)&local_b0);
            local_c8 = *(undefined8 *)(in_x0 + 0x84);
            local_c0 = *(float *)(in_x0 + 0x8c);
            Vector2::Vector2(aVStack_b8,(Vector3 *)&local_c8);
            fVar18 = (float)Vector2::Angle(aVStack_b8);
            fVar17 = (float)AngleDifference(fVar17,fVar18);
            fVar17 = (float)((double)ABS(fVar17) / dVar8 + 1.0);
            if (0.0 <= fVar17) {
              fVar17 = ((float)local_b0 * (float)local_b0 + local_b0._4_4_ * local_b0._4_4_) /
                       (fVar17 * fVar6 + fVar7);
              if ((fVar17 <= fVar9) && ((fVar17 < fVar20 || (local_e8 == (long *)0x0)))) {
                lVar14 = *(long *)(in_x0 + 0x28);
                local_c0 = *(float *)(lVar14 + 0x70);
                fStack_bc = *(float *)(lVar14 + 0x74);
                local_c8 = CONCAT44(local_b0._4_4_ + fStack_bc,(float)local_b0 + local_c0);
                uVar11 = Scene::LineSegmentIntersectsGround
                                   (*(Scene **)(lVar14 + 0x20),(LineSegment *)&local_c8,
                                    *(float *)(lVar14 + 0x78) + *(float *)(lVar14 + 0xb8),
                                    *(float *)(lVar14 + 0x78) + *(float *)(lVar14 + 0xbc),
                                    (Vector2 *)0x0);
                if ((uVar11 & 1) == 0) {
                  plVar13 = *(long **)(*plVar13 + 0x28);
                  if (plVar13 != (long *)0x0) {
                    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  }
                  *in_x8 = plVar13;
                  if ((local_e8 != (long *)0x0) &&
                     (iVar3 = (int)local_e8[1] + -1, *(int *)(local_e8 + 1) = iVar3, iVar3 == 0)) {
                    (**(code **)(*local_e8 + 8))();
                  }
                  local_d0 = local_b0;
                  Vector2::Normalize((Vector2 *)&local_d0);
                  *(undefined4 *)(in_x0 + 0x8c) = 0;
                  *(undefined8 *)(in_x0 + 0x84) = local_d0;
                  bVar5 = (bool)(bVar5 | bVar15);
                  fVar20 = fVar17;
                  local_e8 = plVar13;
                }
                break;
              }
            }
          }
LAB_00389e2c:
        }
      }
      pSVar16 = *(Scene **)pSVar16;
      if (pSVar1 == pSVar16) break;
      this = *(Scene **)(*(long *)(in_x0 + 0x28) + 0x20);
    } while( true );
  }
  if (*(long *)(lVar4 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


