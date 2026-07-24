/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032a960
 * Function: Caver::ObjectLinkControllerComponent::UpdateLink
 * Signature: undefined __cdecl UpdateLink(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ObjectLinkControllerComponent::UpdateLink(float) */

void Caver::ObjectLinkControllerComponent::UpdateLink(float param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  ObjectLinkControllerComponent *pOVar3;
  undefined4 *puVar4;
  ObjectLinkControllerComponent *pOVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  ObjectLinkControllerComponent *in_x0;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ObjectLinkControllerComponent *pOVar12;
  ObjectLinkControllerComponent *pOVar13;
  undefined8 *puVar14;
  ObjectLinkControllerComponent *pOVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  Vector2 *pVVar20;
  SceneObject *pSVar21;
  float fVar22;
  float fVar23;
  undefined4 in_register_00005004;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  Vector2 aVStack_1b8 [8];
  Vector2 aVStack_1b0 [16];
  float afStack_1a0 [16];
  undefined8 local_160;
  undefined8 uStack_158;
  float afStack_120 [16];
  undefined8 local_e0;
  float fStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 auStack_98 [6];
  undefined8 local_68;
  
  uVar24 = CONCAT44(in_register_00005004,param_1);
  lVar6 = tpidr_el0;
  lVar9 = *(long *)(lVar6 + 0x28);
  if (*(long *)(in_x0 + 0x78) != 0) {
    if (*(long *)(*(long *)(in_x0 + 0x78) + 0x20) == 0) {
LAB_0032a9f4:
      uVar24 = DestroyLink(in_x0);
LAB_0032aabc:
      bVar8 = false;
      pVVar20 = *(Vector2 **)(in_x0 + 0x78);
    }
    else {
      if ((*(long *)(in_x0 + 0x88) == 0) || (*(long *)(in_x0 + 0x98) == 0)) {
        if (*(long *)(in_x0 + 0xa0) == 0) goto LAB_0032aabc;
        bVar8 = false;
        if (*(long *)(*(long *)(in_x0 + 0xa0) + 0x28) != 0) {
          TransformComponent::WorldMatrix();
          goto LAB_0032aa18;
        }
      }
      else {
        if (*(long *)(*(long *)(in_x0 + 0x88) + 0x28) == 0) goto LAB_0032a9f4;
        SceneObject::WorldMatrix();
        ModelComponent::WorldMatrix();
        C_Matrix4Mul(afStack_120,(float *)&local_160,afStack_1a0);
        C_Matrix4Mul(afStack_1a0,(float *)(*(long *)(in_x0 + 0x98) + 0x5c),(float *)&local_e0);
LAB_0032aa18:
        bVar8 = true;
        local_a0 = local_e0;
        auStack_98[2] = uStack_c8;
        auStack_98[1] = uStack_d0;
        auStack_98[4] = uStack_b8;
        auStack_98[3] = local_c0;
        local_68 = uStack_a8;
        auStack_98[5] = uStack_b0;
        uVar24 = local_e0;
      }
      pVVar20 = *(Vector2 **)(in_x0 + 0x78);
    }
    if (pVVar20 != (Vector2 *)0x0) {
      if (bVar8) {
        Matrix4::PostTranslate((Matrix4 *)&local_a0,(Vector3 *)(in_x0 + 0xec));
        if (in_x0[0xe8] != (ObjectLinkControllerComponent)0x0) {
          C_Matrix4Mul((float *)&local_a0,(float *)(in_x0 + 0xa8),(float *)&local_a0);
        }
        fVar23 = (float)local_68;
        pSVar21 = *(SceneObject **)(in_x0 + 0x28);
        fStack_d8 = (float)local_68 + *(float *)(in_x0 + 0x10c);
        fVar27 = (float)auStack_98[5];
        fVar28 = (float)((ulong)auStack_98[5] >> 0x20);
        local_e0 = CONCAT44(fVar28 + (float)((ulong)*(undefined8 *)(in_x0 + 0x104) >> 0x20),
                            fVar27 + (float)*(undefined8 *)(in_x0 + 0x104));
        Vector2::Vector2((Vector2 *)&local_160,(Vector3 *)&local_e0);
        fVar22 = DAT_00683488;
        if ((DAT_00683488 < ABS((float)local_160 - *(float *)(pSVar21 + 0x70))) ||
           (DAT_00683488 < ABS(local_160._4_4_ - *(float *)(pSVar21 + 0x74)))) {
          *(float *)(pSVar21 + 0x70) = (float)local_160;
          *(float *)(pSVar21 + 0x74) = local_160._4_4_;
          if (pSVar21[0xb4] == (SceneObject)0x0) {
            SceneObject::RegisterForWorldBoundsUpdate(pSVar21);
            pSVar21[0xb4] = (SceneObject)0x1;
          }
        }
        local_e0 = CONCAT44(-fVar28,-fVar27);
        *(float *)(pSVar21 + 0x78) = fStack_d8;
        fStack_d8 = -fVar23;
        Matrix4::PreTranslate((Matrix4 *)&local_a0,(Vector3 *)&local_e0);
        lVar16 = *(long *)(in_x0 + 0x120);
        if (lVar16 != 0) {
          puVar1 = (undefined4 *)(lVar16 + 0xb0);
          puVar11 = (undefined4 *)(lVar16 + 0x74);
          puVar10 = puVar1;
          if (puVar1 <= puVar11) {
            puVar10 = puVar11;
          }
          uVar2 = ((ulong)((long)puVar10 + (-0x71 - lVar16)) >> 2) + 1;
          puVar10 = (undefined4 *)(lVar16 + 0x70);
          puVar14 = &local_a0;
          if (7 < uVar2) {
            puVar4 = puVar1;
            if (puVar1 <= puVar11) {
              puVar4 = puVar11;
            }
            uVar19 = (long)puVar4 + (-0x71 - lVar16);
            if (((undefined4 *)((long)&local_a0 + (uVar19 & 0xfffffffffffffffc) + 4) <= puVar10) ||
               ((undefined8 *)(lVar16 + (uVar19 + 0x74 & 0xfffffffffffffffc)) <= &local_a0)) {
              uVar18 = uVar2 & 0x7ffffffffffffff8;
              puVar14 = (undefined8 *)(lVar16 + 0x80);
              puVar17 = auStack_98 + 1;
              uVar19 = uVar18;
              do {
                puVar7 = puVar17 + -1;
                uVar24 = puVar17[-2];
                uVar26 = puVar17[1];
                uVar25 = *puVar17;
                uVar19 = uVar19 - 8;
                puVar17 = puVar17 + 4;
                puVar14[-1] = *puVar7;
                puVar14[-2] = uVar24;
                puVar14[1] = uVar26;
                *puVar14 = uVar25;
                puVar14 = puVar14 + 4;
              } while (uVar19 != 0);
              puVar10 = (undefined4 *)(lVar16 + uVar18 * 4 + 0x70);
              puVar14 = (undefined8 *)((long)&local_a0 + uVar18 * 4);
              if (uVar2 == uVar18) goto LAB_0032ac94;
            }
          }
          do {
            puVar11 = puVar10 + 1;
            *puVar10 = *(undefined4 *)puVar14;
            puVar10 = puVar11;
            puVar14 = (undefined8 *)((long)puVar14 + 4);
          } while (puVar11 < puVar1);
        }
LAB_0032ac94:
        uStack_158 = _UNK_00683498;
        local_160 = _DAT_00683490;
        C_Matrix4Vector4Mul((float *)&local_a0,(float *)&local_160,(float *)&local_e0);
        Vector3::Vector3((Vector3 *)aVStack_1b0,(Vector4 *)&local_e0);
        pSVar21 = *(SceneObject **)(in_x0 + 0x28);
        Vector2::Vector2(aVStack_1b8,(Vector3 *)aVStack_1b0);
        fVar23 = (float)Vector2::Angle(aVStack_1b8);
      }
      else {
        Vector2::Vector2(aVStack_1b0,(Vector3 *)(in_x0 + 0xec));
        SceneObject::WorldPointFromLocalPoint(pVVar20);
        fVar22 = *(float *)(in_x0 + 0xf4);
        if (*(char *)(*(long *)(in_x0 + 0x78) + 0x90) != '\0') {
          fVar22 = -fVar22;
        }
        local_e0 = CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x104) >> 0x20) +
                            (float)((ulong)local_160 >> 0x20),
                            (float)*(undefined8 *)(in_x0 + 0x104) + (float)local_160);
        fStack_d8 = *(float *)(*(long *)(in_x0 + 0x78) + 0x78) + fVar22 + *(float *)(in_x0 + 0x10c);
        pSVar21 = *(SceneObject **)(in_x0 + 0x28);
        Vector2::Vector2((Vector2 *)&local_160,(Vector3 *)&local_e0);
        fVar22 = DAT_00683488;
        if ((DAT_00683488 < ABS((float)local_160 - *(float *)(pSVar21 + 0x70))) ||
           (DAT_00683488 < ABS(local_160._4_4_ - *(float *)(pSVar21 + 0x74)))) {
          *(float *)(pSVar21 + 0x70) = (float)local_160;
          *(float *)(pSVar21 + 0x74) = local_160._4_4_;
          if (pSVar21[0xb4] == (SceneObject)0x0) {
            SceneObject::RegisterForWorldBoundsUpdate(pSVar21);
            pSVar21[0xb4] = (SceneObject)0x1;
          }
        }
        *(float *)(pSVar21 + 0x78) = fStack_d8;
        lVar16 = *(long *)(in_x0 + 0x78);
        pSVar21 = *(SceneObject **)(in_x0 + 0x28);
        pSVar21[0x90] = *(SceneObject *)(lVar16 + 0x90);
        fVar23 = *(float *)(lVar16 + 0x80);
      }
      if ((fVar22 < ABS(fVar23 - *(float *)(pSVar21 + 0x80))) &&
         (*(float *)(pSVar21 + 0x80) = fVar23, pSVar21[0xb4] == (SceneObject)0x0)) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar21);
        pSVar21[0xb4] = (SceneObject)0x1;
      }
      lVar16 = *(long *)(in_x0 + 0x28);
      local_e0 = *(undefined8 *)(*(long *)(in_x0 + 0x78) + 0x68);
      fStack_d8 = *(float *)(*(long *)(in_x0 + 0x78) + 0x7c);
      uVar24 = Vector2::Vector2((Vector2 *)&local_160,(Vector3 *)&local_e0);
      *(undefined8 *)(lVar16 + 0x68) = local_160;
      *(float *)(lVar16 + 0x7c) = fStack_d8;
      if (*(long *)(in_x0 + 0x78) != 0) goto LAB_0032ae68;
    }
  }
  if ((in_x0[0xe8] != (ObjectLinkControllerComponent)0x0) &&
     (lVar16 = *(long *)(in_x0 + 0x120), lVar16 != 0)) {
    pOVar3 = (ObjectLinkControllerComponent *)(lVar16 + 0xb0);
    pOVar13 = (ObjectLinkControllerComponent *)(lVar16 + 0x74);
    pOVar12 = pOVar3;
    if (pOVar3 <= pOVar13) {
      pOVar12 = pOVar13;
    }
    uVar2 = ((ulong)(pOVar12 + (-0x71 - lVar16)) >> 2) + 1;
    pOVar12 = (ObjectLinkControllerComponent *)(lVar16 + 0x70);
    pOVar15 = in_x0 + 0xa8;
    if (7 < uVar2) {
      pOVar5 = pOVar3;
      if (pOVar3 <= pOVar13) {
        pOVar5 = pOVar13;
      }
      if ((in_x0 + ((ulong)(pOVar5 + (-0x71 - lVar16)) & 0xfffffffffffffffc) + 0xac <= pOVar12) ||
         ((ObjectLinkControllerComponent *)
          (lVar16 + ((ulong)(pOVar5 + (-0x71 - lVar16)) & 0xfffffffffffffffc) + 0x74) <= pOVar15)) {
        uVar18 = uVar2 & 0x7ffffffffffffff8;
        puVar14 = (undefined8 *)(lVar16 + 0x80);
        pOVar13 = in_x0 + 0xb8;
        uVar19 = uVar18;
        do {
          pOVar12 = pOVar13 + -8;
          uVar24 = *(undefined8 *)(pOVar13 + -0x10);
          uVar26 = *(undefined8 *)(pOVar13 + 8);
          uVar25 = *(undefined8 *)pOVar13;
          uVar19 = uVar19 - 8;
          pOVar13 = pOVar13 + 0x20;
          puVar14[-1] = *(undefined8 *)pOVar12;
          puVar14[-2] = uVar24;
          puVar14[1] = uVar26;
          *puVar14 = uVar25;
          puVar14 = puVar14 + 4;
        } while (uVar19 != 0);
        pOVar12 = (ObjectLinkControllerComponent *)(lVar16 + uVar18 * 4 + 0x70);
        pOVar15 = in_x0 + uVar18 * 4 + 0xa8;
        if (uVar2 == uVar18) goto LAB_0032ae68;
      }
    }
    do {
      pOVar13 = pOVar12 + 4;
      *(undefined4 *)pOVar12 = *(undefined4 *)pOVar15;
      pOVar12 = pOVar13;
      pOVar15 = pOVar15 + 4;
    } while (pOVar13 < pOVar3);
  }
LAB_0032ae68:
  if (*(long *)(lVar6 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar24);
}


