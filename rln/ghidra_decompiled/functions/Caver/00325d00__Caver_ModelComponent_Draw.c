/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00325d00
 * Function: Caver::ModelComponent::Draw
 * Signature: undefined __thiscall Draw(ModelComponent * this, RenderingContext * param_1, Matrix4 * param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&, bool) const */

void __thiscall
Caver::ModelComponent::Draw
          (ModelComponent *this,RenderingContext *param_1,Matrix4 *param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + 0x88);
  if ((lVar4 == 0) || (this[0x134] != (ModelComponent)0x0)) goto LAB_003260d0;
  fVar11 = (float)*(undefined8 *)(this + 0xb0) * (float)*(undefined8 *)(this + 0xa0);
  fVar13 = (float)((ulong)*(undefined8 *)(this + 0xb0) >> 0x20) *
           (float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20);
  fVar6 = (float)*(undefined8 *)(this + 0xb8) * (float)*(undefined8 *)(this + 0xa8);
  fVar9 = (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) *
          (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
  if ((this[0x135] == (ModelComponent)0x0) || (!param_3)) {
    if (*(int *)param_1 != 0) goto LAB_00325f80;
    bVar3 = false;
    *(ulong *)(lVar4 + 0x34) = CONCAT44(fVar13,fVar11);
    *(ulong *)(lVar4 + 0x3c) = CONCAT44(fVar9,fVar6);
  }
  else if (*(int *)param_1 == 0) {
    glActiveTexture(0x84c1);
    glEnable(0xde1);
    lVar4 = **(long **)(this + 0x88);
    plVar1 = (long *)(*(long **)(this + 0x88))[1];
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    lVar4 = *(long *)(**(long **)(lVar4 + 8) + 0xd8);
    if ((plVar1 != (long *)0x0) && (lVar5 = plVar1[1], plVar1[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar5 = plVar1[2];
      plVar1[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    if (lVar4 != 0) {
      lVar4 = **(long **)(this + 0x88);
      plVar1 = (long *)(*(long **)(this + 0x88))[1];
      if (plVar1 != (long *)0x0) {
        plVar1[1] = plVar1[1] + 1;
      }
      glBindTexture(0xde1,*(undefined4 *)(*(long *)(**(long **)(lVar4 + 8) + 0xd8) + 0x38));
      if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[1], plVar1[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar4 = plVar1[2];
        plVar1[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
    }
    glTexEnvi(0x2300,0x2200,0x8570);
    glTexEnvi(0x2300,0x8571,0x104);
    glTexEnvi(0x2300,0x8580,0x8578);
    glTexEnvi(0x2300,0x8590,0x300);
    glTexEnvi(0x2300,0x8581,0x8576);
    glTexEnvi(0x2300,0x8591,0x300);
    fVar7 = (float)NEON_ucvtf((uint)(byte)this[0x136]);
    fVar10 = (float)NEON_ucvtf((uint)(byte)this[0x137]);
    fVar12 = (float)NEON_ucvtf((uint)(byte)this[0x138]);
    fVar14 = (float)NEON_ucvtf((uint)(byte)this[0x139]);
    local_b0._0_4_ = (fVar7 / DAT_00683ffc) * fVar11;
    local_b0._4_4_ = (fVar10 / DAT_00683ffc) * fVar13;
    uStack_a8._0_4_ = (fVar12 / DAT_00683ffc) * fVar6;
    uStack_a8._4_4_ = (fVar14 / DAT_00683ffc) * fVar9;
    glTexEnvfv(0x2300,0x2201,&local_b0);
    glActiveTexture(0x84c0);
    lVar4 = *(long *)(this + 0x88);
    fVar7 = 1.0 - uStack_a8._4_4_;
    *(ulong *)(lVar4 + 0x34) =
         CONCAT44(fVar13 * fVar7 + fVar13 * local_b0._4_4_,fVar11 * fVar7 + fVar11 * (float)local_b0
                 );
    *(ulong *)(lVar4 + 0x3c) =
         CONCAT44(fVar9 * uStack_a8._4_4_ + fVar9 * fVar7,fVar6 * fVar7 + fVar6 * (float)uStack_a8);
    bVar3 = true;
  }
  else {
LAB_00325f80:
    bVar3 = false;
  }
  uVar8 = 0;
  if (param_3) {
    uVar8 = *(undefined4 *)(this + 0x98);
  }
  *(undefined4 *)(*(long *)(this + 0x88) + 0x30) = uVar8;
  uStack_78 = *(undefined8 *)(param_2 + 0x38);
  local_80 = *(undefined8 *)(param_2 + 0x30);
  uStack_88 = *(undefined8 *)(param_2 + 0x28);
  local_90 = *(undefined8 *)(param_2 + 0x20);
  uStack_98 = *(undefined8 *)(param_2 + 0x18);
  local_a0 = *(undefined8 *)(param_2 + 0x10);
  uStack_a8 = *(undefined8 *)(param_2 + 8);
  local_b0 = *(undefined8 *)param_2;
  if (*(long *)(this + 0x90) == 0) {
    SceneObject::WorldMatrix();
    C_Matrix4Mul((float *)&local_b0,(float *)&local_f0,(float *)&local_b0);
    WorldMatrix();
  }
  else {
    TransformComponent::WorldMatrix();
  }
  C_Matrix4Mul((float *)&local_b0,(float *)&local_f0,(float *)&local_b0);
  if (*(long *)(*(ModelInstance **)(this + 0x88) + 0x18) != 0) {
    uStack_c8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
    local_d0 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
    uStack_b8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
    uStack_c0 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
    uStack_e8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
    local_f0 = *(undefined8 *)PTR_identityMatrix_007e74c8;
    uStack_d8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
    uStack_e0 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
    ModelInstance::SkinMeshes(*(ModelInstance **)(this + 0x88),(Matrix4 *)&local_f0);
  }
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_b0);
  fVar6 = ABS(*(float *)(*(long *)(this + 0x28) + 0x8c) + -1.0);
  if ((*(int *)param_1 == 0) && (DAT_00683734 < fVar6)) {
    glEnable(0x803a);
  }
  ModelInstance::Draw(*(ModelInstance **)(this + 0x88),param_1);
  if ((DAT_00683734 < fVar6) && (*(int *)param_1 == 0)) {
    glDisable(0x803a);
  }
  if ((bVar3) && (*(int *)param_1 == 0)) {
    glActiveTexture(0x84c1);
    glDisable(0xde1);
    glActiveTexture(0x84c0);
  }
LAB_003260d0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


