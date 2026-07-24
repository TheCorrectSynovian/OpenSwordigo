/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4644
 * Function: Caver::OrbitControllerComponent::Update
 * Signature: undefined __thiscall Update(OrbitControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OrbitControllerComponent::Update(float) */

void __thiscall
Caver::OrbitControllerComponent::Update(OrbitControllerComponent *this,float param_1)

{
  long lVar1;
  float fVar2;
  double dVar3;
  Matrix4 *this_00;
  undefined4 uVar4;
  long lVar5;
  SceneObject *this_01;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_f0;
  float local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  float local_d8;
  Vector3 local_d0 [8];
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b0;
  float afStack_a8 [16];
  long local_68;
  
  fVar2 = DAT_00683734;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (DAT_00683734 < param_1) {
    lVar5 = *(long *)(this + 0x70);
    fVar6 = *(float *)(this + 0x8c);
    if (lVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(this + 0x28) + 0x68);
      Vector2::Vector2((Vector2 *)&local_e0,(Vector3 *)(this + 0x90));
      uVar7 = *(undefined8 *)(lVar5 + 0x70);
      fVar11 = (float)uVar7 - (float)local_e0;
      fVar12 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)local_e0 >> 0x20);
      fVar9 = fVar11 * fVar11 + fVar12 * fVar12;
      fVar8 = SQRT(fVar9);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar9);
      }
      if (1.0 < fVar9) {
        local_b0 = CONCAT44(fVar12,fVar11);
        Vector2::Normalize((Vector2 *)&local_b0);
        fVar11 = fVar8 * 27.0 * param_1;
        uVar10 = CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar11 + (float)((ulong)uVar10 >> 0x20)
                          ,(float)local_b0 * fVar11 + (float)uVar10);
      }
      fVar12 = (float)((ulong)uVar10 >> 0x20);
      fVar11 = (float)uVar10 - (float)uVar10 * param_1 * 5.0;
      fVar12 = fVar12 - fVar12 * param_1 * 5.0;
      uVar7 = CONCAT44(fVar12,fVar11);
      fVar11 = fVar11 * param_1;
      fVar12 = fVar12 * param_1;
      if (fVar11 * fVar11 + fVar12 * fVar12 <= fVar9) {
        *(ulong *)(this + 0x90) =
             CONCAT44(fVar12 + (float)((ulong)*(undefined8 *)(this + 0x90) >> 0x20),
                      fVar11 + (float)*(undefined8 *)(this + 0x90));
        uVar4 = *(undefined4 *)(*(long *)(this + 0x70) + 0x78);
      }
      else {
        uVar4 = *(undefined4 *)(*(long *)(this + 0x70) + 0x78);
        *(undefined8 *)(this + 0x90) = *(undefined8 *)(*(long *)(this + 0x70) + 0x70);
      }
      *(undefined4 *)(this + 0x98) = uVar4;
      fVar8 = fVar8 / DAT_00683f70 + 1.0;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      fVar6 = fVar6 * fVar8;
    }
    *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = uVar7;
    local_c0 = *(float *)(this + 0x7c);
    local_b8 = *(float *)(this + 0x84);
    local_bc = *(float *)(this + 0x80);
    fVar8 = *(float *)(this + 0x78) + param_1;
    fVar12 = local_bc - local_b8 * 0.0;
    fVar11 = local_b8 * 0.0 - local_c0;
    fVar9 = local_c0 * 0.0 - local_bc * 0.0;
    *(float *)(this + 0x78) = fVar8;
    *(float *)(this + 0x9c) = *(float *)(this + 0x9c) + *(float *)(this + 0x88) * param_1;
    if (fVar12 * fVar12 + fVar11 * fVar11 + fVar9 * fVar9 <= fVar2) {
      local_e8 = 0.0;
      local_f0 = _DAT_00683948;
    }
    else {
      local_e0 = CONCAT44(fVar11,fVar12);
      local_d8 = fVar9;
      Vector3::Normalize((Vector3 *)&local_e0);
      fVar8 = *(float *)(this + 0x78);
      local_c0 = *(float *)(this + 0x7c);
      local_bc = *(float *)(this + 0x80);
      local_b8 = *(float *)(this + 0x84);
      local_f0 = local_e0;
      local_e8 = local_d8;
    }
    dVar3 = DAT_00684790;
    fVar8 = sinf((float)((double)(*(float *)(this + 0xa4) + *(float *)(this + 0xb0) * fVar8) *
                        DAT_00684790));
    fVar2 = DAT_00683484;
    local_c0 = local_c0 + fVar8 * DAT_00683484;
    fVar8 = sinf((float)((double)(*(float *)(this + 0xa8) +
                                 *(float *)(this + 0xb4) * *(float *)(this + 0x78)) * dVar3));
    local_bc = local_bc + fVar8 * fVar2;
    fVar8 = sinf((float)((double)(*(float *)(this + 0xac) +
                                 *(float *)(this + 0xb8) * *(float *)(this + 0x78)) * dVar3));
    local_b8 = local_b8 + fVar8 * fVar2;
    this_00 = (Matrix4 *)Vector3::Normalize((Vector3 *)&local_c0);
    Matrix4::RotationAxis(this_00,*(float *)(this + 0x9c),local_c0,local_bc,local_b8);
    uStack_e4 = 0;
    C_Matrix4Vector4Mul(afStack_a8,(float *)&local_f0,(float *)&local_e0);
    Vector3::Vector3(local_d0,(Vector4 *)&local_e0);
    this_01 = *(SceneObject **)(this + 0x28);
    local_e0 = CONCAT44(local_d0._4_4_ * fVar6 +
                        (float)((ulong)*(undefined8 *)(this + 0x90) >> 0x20),
                        local_d0._0_4_ * fVar6 + (float)*(undefined8 *)(this + 0x90));
    local_d8 = fVar6 * local_c8 + *(float *)(this + 0x98);
    Vector2::Vector2((Vector2 *)&local_f0,(Vector3 *)&local_e0);
    if ((DAT_00683488 < ABS((float)local_f0 - *(float *)(this_01 + 0x70))) ||
       (DAT_00683488 < ABS(local_f0._4_4_ - *(float *)(this_01 + 0x74)))) {
      *(float *)(this_01 + 0x70) = (float)local_f0;
      *(float *)(this_01 + 0x74) = local_f0._4_4_;
      if (this_01[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(this_01);
        this_01[0xb4] = (SceneObject)0x1;
      }
    }
    *(float *)(this_01 + 0x78) = local_d8;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


