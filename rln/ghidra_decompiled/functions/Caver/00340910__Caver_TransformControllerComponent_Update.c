/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00340910
 * Function: Caver::TransformControllerComponent::Update
 * Signature: undefined __thiscall Update(TransformControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::Update(float) */

void __thiscall
Caver::TransformControllerComponent::Update(TransformControllerComponent *this,float param_1)

{
  TransformControllerComponent TVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  Vector2 *pVVar5;
  SceneObject *pSVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 unaff_d9;
  float unaff_s10;
  float fVar11;
  float fVar12;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  float local_7c;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  fVar8 = DAT_00683488;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (this[0x7c] != (TransformControllerComponent)0x0) {
    local_78 = 0;
    local_70 = 0.0;
    uVar3 = Vector3::IsClose((Vector3 *)(this + 0x70),(Vector3 *)&local_78,DAT_00683488);
    if ((uVar3 & 1) == 0) {
      pVVar5 = *(Vector2 **)(this + 0x28);
      local_78 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20),
                          -(float)*(undefined8 *)(this + 0x70));
      local_70 = -*(float *)(this + 0x78);
      Vector2::Vector2((Vector2 *)&local_a0,(Vector3 *)&local_78);
      SceneObject::WorldPointFromLocalPoint(pVVar5);
      unaff_s10 = *(float *)(this + 0x78);
      unaff_d9 = CONCAT44((float)((ulong)local_88 >> 0x20) -
                          (float)((ulong)*(undefined8 *)(*(long *)(this + 0x28) + 0x70) >> 0x20),
                          (float)local_88 - (float)*(undefined8 *)(*(long *)(this + 0x28) + 0x70));
    }
    fVar7 = *(float *)(this + 0x88);
    if (param_1 + DAT_00683734 <= fVar7) {
      pSVar6 = *(SceneObject **)(this + 0x28);
      fVar10 = *(float *)(this + 0x84);
      fVar11 = (1.0 / fVar7) * fVar10;
      fVar12 = fVar11 * param_1;
      fVar9 = *(float *)(pSVar6 + 0x80) + fVar12;
      if ((fVar8 < ABS(fVar9 - *(float *)(pSVar6 + 0x80))) &&
         (*(float *)(pSVar6 + 0x80) = fVar9, pSVar6[0xb4] == (SceneObject)0x0)) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
        pSVar6[0xb4] = (SceneObject)0x1;
        pSVar6 = *(SceneObject **)(this + 0x28);
        fVar10 = *(float *)(this + 0x84);
        fVar7 = *(float *)(this + 0x88);
      }
      *(float *)(this + 0x84) = fVar10 - fVar12;
      *(float *)(pSVar6 + 0x84) = fVar11;
      *(float *)(this + 0x88) = fVar7 - param_1;
    }
    else {
      pSVar6 = *(SceneObject **)(this + 0x28);
      if ((fVar8 < ABS(*(float *)(this + 0x80) - *(float *)(pSVar6 + 0x80))) &&
         (*(float *)(pSVar6 + 0x80) = *(float *)(this + 0x80), pSVar6[0xb4] == (SceneObject)0x0)) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
        pSVar6[0xb4] = (SceneObject)0x1;
        pSVar6 = *(SceneObject **)(this + 0x28);
      }
      *(undefined4 *)(pSVar6 + 0x84) = 0;
      *(undefined4 *)(this + 0x88) = 0;
      this[0x7c] = (TransformControllerComponent)0x0;
    }
    local_78 = 0;
    local_70 = 0.0;
    uVar3 = Vector3::IsClose((Vector3 *)(this + 0x70),(Vector3 *)&local_78,fVar8);
    if ((uVar3 & 1) == 0) {
      pVVar5 = *(Vector2 **)(this + 0x28);
      local_78 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20),
                          -(float)*(undefined8 *)(this + 0x70));
      local_70 = -*(float *)(this + 0x78);
      Vector2::Vector2((Vector2 *)&local_a0,(Vector3 *)&local_78);
      SceneObject::WorldPointFromLocalPoint(pVVar5);
      pSVar6 = *(SceneObject **)(this + 0x28);
      fVar7 = (float)*(undefined8 *)(pSVar6 + 0x70);
      fVar10 = (float)((ulong)*(undefined8 *)(pSVar6 + 0x70) >> 0x20);
      local_70 = (*(float *)(this + 0x78) - unaff_s10) + *(float *)(pSVar6 + 0x78);
      local_78 = CONCAT44((((float)((ulong)local_90 >> 0x20) - fVar10) -
                          (float)((ulong)unaff_d9 >> 0x20)) + fVar10,
                          (((float)local_90 - fVar7) - (float)unaff_d9) + fVar7);
      Vector2::Vector2((Vector2 *)&local_a0,(Vector3 *)&local_78);
      if ((fVar8 < ABS((float)local_a0 - *(float *)(pSVar6 + 0x70))) ||
         (fVar8 < ABS(local_a0._4_4_ - *(float *)(pSVar6 + 0x74)))) {
        *(float *)(pSVar6 + 0x70) = (float)local_a0;
        *(float *)(pSVar6 + 0x74) = local_a0._4_4_;
        if (pSVar6[0xb4] == (SceneObject)0x0) {
          SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
          pSVar6[0xb4] = (SceneObject)0x1;
        }
      }
      *(float *)(pSVar6 + 0x78) = local_70;
    }
  }
  fVar8 = DAT_00683488;
  if (this[0x8c] != (TransformControllerComponent)0x0) {
    if (*(float *)(this + 0xa8) < param_1 + DAT_00683734) {
      local_78 = 0;
      local_70 = 0.0;
      uVar3 = Vector3::IsClose((Vector3 *)(this + 0x70),(Vector3 *)&local_78,DAT_00683488);
      pSVar6 = *(SceneObject **)(this + 0x28);
      if ((uVar3 & 1) == 0) {
        local_78 = CONCAT44((float)((ulong)*(undefined8 *)(pSVar6 + 0x70) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(this + 0x9c) >> 0x20),
                            (float)*(undefined8 *)(pSVar6 + 0x70) +
                            (float)*(undefined8 *)(this + 0x9c));
        local_70 = *(float *)(pSVar6 + 0x78) + *(float *)(this + 0xa4);
        Vector2::Vector2((Vector2 *)&local_a0,(Vector3 *)&local_78);
        fVar7 = local_70;
        if ((fVar8 < ABS((float)local_a0 - *(float *)(pSVar6 + 0x70))) ||
           (fVar8 < ABS(local_a0._4_4_ - *(float *)(pSVar6 + 0x74)))) {
          *(float *)(pSVar6 + 0x70) = (float)local_a0;
          *(float *)(pSVar6 + 0x74) = local_a0._4_4_;
          if (pSVar6[0xb4] == (SceneObject)0x0) {
            SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
            pSVar6[0xb4] = (SceneObject)0x1;
            fVar7 = local_70;
          }
        }
      }
      else {
        Vector2::Vector2((Vector2 *)&local_78,(Vector3 *)(this + 0x90));
        if ((fVar8 < ABS((float)local_78 - *(float *)(pSVar6 + 0x70))) ||
           (fVar8 < ABS(local_78._4_4_ - *(float *)(pSVar6 + 0x74)))) {
          *(float *)(pSVar6 + 0x70) = (float)local_78;
          *(float *)(pSVar6 + 0x74) = local_78._4_4_;
          if (pSVar6[0xb4] == (SceneObject)0x0) {
            SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
            pSVar6[0xb4] = (SceneObject)0x1;
          }
        }
        fVar7 = *(float *)(this + 0x98);
      }
      *(float *)(pSVar6 + 0x78) = fVar7;
      *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = 0;
      *(undefined4 *)(this + 0xa8) = 0;
      this[0x8c] = (TransformControllerComponent)0x0;
      TVar1 = this[0xac];
      fVar8 = DAT_00683488;
      goto joined_r0x00340d58;
    }
    local_70 = 1.0 / *(float *)(this + 0xa8);
    fVar8 = (float)*(undefined8 *)(this + 0x9c) * local_70;
    fVar7 = (float)((ulong)*(undefined8 *)(this + 0x9c) >> 0x20) * local_70;
    local_78 = CONCAT44(fVar7,fVar8);
    local_70 = local_70 * *(float *)(this + 0xa4);
    pSVar6 = *(SceneObject **)(this + 0x28);
    fVar8 = fVar8 * param_1;
    fVar7 = fVar7 * param_1;
    fVar10 = local_70 * param_1;
    local_a0 = CONCAT44(fVar7 + (float)((ulong)*(undefined8 *)(pSVar6 + 0x70) >> 0x20),
                        fVar8 + (float)*(undefined8 *)(pSVar6 + 0x70));
    local_98 = fVar10 + *(float *)(pSVar6 + 0x78);
    Vector2::Vector2((Vector2 *)&local_80,(Vector3 *)&local_a0);
    if ((DAT_00683488 < ABS(local_80 - *(float *)(pSVar6 + 0x70))) ||
       (DAT_00683488 < ABS(local_7c - *(float *)(pSVar6 + 0x74)))) {
      *(float *)(pSVar6 + 0x70) = local_80;
      *(float *)(pSVar6 + 0x74) = local_7c;
      if (pSVar6[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
        pSVar6[0xb4] = (SceneObject)0x1;
      }
    }
    *(float *)(pSVar6 + 0x78) = local_98;
    lVar4 = *(long *)(this + 0x28);
    Vector2::Vector2((Vector2 *)&local_a0,(Vector3 *)&local_78);
    *(undefined8 *)(lVar4 + 0x68) = local_a0;
    *(ulong *)(this + 0xa4) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa4) >> 0x20) - param_1,
                  (float)*(undefined8 *)(this + 0xa4) - fVar10);
    *(ulong *)(this + 0x9c) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x9c) >> 0x20) - fVar7,
                  (float)*(undefined8 *)(this + 0x9c) - fVar8);
  }
  TVar1 = this[0xac];
  fVar8 = DAT_00683488;
joined_r0x00340d58:
  DAT_00683488 = fVar8;
  if (TVar1 != (TransformControllerComponent)0x0) {
    local_78 = 0;
    local_70 = 0.0;
    uVar3 = Vector3::IsClose((Vector3 *)(this + 0x70),(Vector3 *)&local_78,fVar8);
    pSVar6 = *(SceneObject **)(this + 0x28);
    if ((uVar3 & 1) == 0) {
      local_78 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20),
                          -(float)*(undefined8 *)(this + 0x70));
      local_70 = -*(float *)(this + 0x78);
      Vector2::Vector2((Vector2 *)&local_a0,(Vector3 *)&local_78);
      SceneObject::WorldPointFromLocalPoint((Vector2 *)pSVar6);
      pSVar6 = *(SceneObject **)(this + 0x28);
      unaff_s10 = *(float *)(this + 0x78);
      unaff_d9 = CONCAT44((float)((ulong)local_a8 >> 0x20) -
                          (float)((ulong)*(undefined8 *)(pSVar6 + 0x70) >> 0x20),
                          (float)local_a8 - (float)*(undefined8 *)(pSVar6 + 0x70));
    }
    if (param_1 + DAT_00683734 <= *(float *)(this + 0xb4)) {
      SceneObject::SetInstanceScaling
                (pSVar6,*(float *)(pSVar6 + 0x88) +
                        (param_1 / *(float *)(this + 0xb4)) *
                        (*(float *)(this + 0xb0) - *(float *)(pSVar6 + 0x88)));
      *(float *)(this + 0xb4) = *(float *)(this + 0xb4) - param_1;
    }
    else {
      SceneObject::SetInstanceScaling(pSVar6,*(float *)(this + 0xb0));
      *(undefined4 *)(this + 0xb4) = 0;
      this[0xac] = (TransformControllerComponent)0x0;
    }
    local_78 = 0;
    local_70 = 0.0;
    uVar3 = Vector3::IsClose((Vector3 *)(this + 0x70),(Vector3 *)&local_78,fVar8);
    if ((uVar3 & 1) == 0) {
      pVVar5 = *(Vector2 **)(this + 0x28);
      local_78 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20),
                          -(float)*(undefined8 *)(this + 0x70));
      local_70 = -*(float *)(this + 0x78);
      Vector2::Vector2((Vector2 *)&local_a0,(Vector3 *)&local_78);
      SceneObject::WorldPointFromLocalPoint(pVVar5);
      pSVar6 = *(SceneObject **)(this + 0x28);
      fVar7 = (float)*(undefined8 *)(pSVar6 + 0x70);
      fVar10 = (float)((ulong)*(undefined8 *)(pSVar6 + 0x70) >> 0x20);
      local_70 = (*(float *)(this + 0x78) - unaff_s10) + *(float *)(pSVar6 + 0x78);
      local_78 = CONCAT44((((float)((ulong)local_b0 >> 0x20) - fVar10) -
                          (float)((ulong)unaff_d9 >> 0x20)) + fVar10,
                          (((float)local_b0 - fVar7) - (float)unaff_d9) + fVar7);
      Vector2::Vector2((Vector2 *)&local_a0,(Vector3 *)&local_78);
      if ((fVar8 < ABS((float)local_a0 - *(float *)(pSVar6 + 0x70))) ||
         (fVar8 < ABS(local_a0._4_4_ - *(float *)(pSVar6 + 0x74)))) {
        *(float *)(pSVar6 + 0x70) = (float)local_a0;
        *(float *)(pSVar6 + 0x74) = local_a0._4_4_;
        if (pSVar6[0xb4] == (SceneObject)0x0) {
          SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
          pSVar6[0xb4] = (SceneObject)0x1;
        }
      }
      *(float *)(pSVar6 + 0x78) = local_70;
    }
  }
  lVar4 = *(long *)(this + 0xb8);
  if (lVar4 != 0) {
    local_78 = *(undefined8 *)(lVar4 + 0x70);
    local_70 = *(float *)(lVar4 + 0x78);
    pSVar6 = *(SceneObject **)(this + 0x28);
    Vector2::Vector2((Vector2 *)&local_a0,(Vector3 *)&local_78);
    if ((DAT_00683488 < ABS((float)local_a0 - *(float *)(pSVar6 + 0x70))) ||
       (DAT_00683488 < ABS(local_a0._4_4_ - *(float *)(pSVar6 + 0x74)))) {
      *(float *)(pSVar6 + 0x70) = (float)local_a0;
      *(float *)(pSVar6 + 0x74) = local_a0._4_4_;
      if (pSVar6[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
        pSVar6[0xb4] = (SceneObject)0x1;
      }
    }
    *(float *)(pSVar6 + 0x78) = local_70;
    *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = *(undefined8 *)(*(long *)(this + 0xb8) + 0x68);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


