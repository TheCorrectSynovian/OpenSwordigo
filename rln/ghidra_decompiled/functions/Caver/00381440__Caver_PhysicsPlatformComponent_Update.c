/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381440
 * Function: Caver::PhysicsPlatformComponent::Update
 * Signature: undefined __thiscall Update(PhysicsPlatformComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PhysicsPlatformComponent::Update(float) */

void __thiscall
Caver::PhysicsPlatformComponent::Update(PhysicsPlatformComponent *this,float param_1)

{
  SceneObject SVar1;
  float fVar2;
  SceneObject *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = DAT_00683488;
  if (param_1 <= DAT_00683734) {
    return;
  }
  if (*(int *)(this + 0x70) == 1) {
    this_00 = *(SceneObject **)(this + 0x28);
    fVar6 = *(float *)(this_00 + 0x80);
    fVar4 = (*(float *)(this + 0x90) - fVar6) * *(float *)(this + 0x98);
    fVar5 = *(float *)(this_00 + 0x84) + (fVar4 + *(float *)(this + 0x80)) * param_1;
    fVar5 = fVar5 - *(float *)(this + 0x9c) * fVar5 * param_1;
    fVar3 = fVar5;
    if (((ABS(fVar4) < DAT_0068798c) && (fVar4 = *(float *)(this + 0xa0), ABS(fVar5) < fVar4)) &&
       (fVar3 = -fVar4, 0.0 <= fVar5)) {
      fVar3 = fVar4;
    }
    fVar4 = fVar6 + fVar3 * param_1;
    *(float *)(this_00 + 0x84) = fVar3;
    if (ABS(fVar4 - fVar6) <= fVar2) goto LAB_003815a4;
    SVar1 = this_00[0xb4];
    *(float *)(this_00 + 0x80) = fVar4;
  }
  else {
    if (*(int *)(this + 0x70) != 0) goto LAB_003815a4;
    this_00 = *(SceneObject **)(this + 0x28);
    uVar7 = NEON_fmov(0x41a00000,4);
    fVar9 = (float)*(undefined8 *)(this_00 + 0x70);
    fVar10 = (float)((ulong)*(undefined8 *)(this_00 + 0x70) >> 0x20);
    uVar8 = NEON_fmov(0x41200000,4);
    fVar3 = (float)*(undefined8 *)(this_00 + 0x68) +
            (((float)*(undefined8 *)(this + 0x88) - fVar9) * (float)uVar7 +
            (float)*(undefined8 *)(this + 0x74)) * param_1;
    fVar5 = (float)((ulong)*(undefined8 *)(this_00 + 0x68) >> 0x20) +
            (((float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20) - fVar10) *
             (float)((ulong)uVar7 >> 0x20) + (float)((ulong)*(undefined8 *)(this + 0x74) >> 0x20)) *
            param_1;
    fVar3 = fVar3 - fVar3 * (float)uVar8 * param_1;
    fVar5 = fVar5 - fVar5 * (float)((ulong)uVar8 >> 0x20) * param_1;
    fVar4 = fVar9 + fVar3 * param_1;
    fVar6 = fVar10 + fVar5 * param_1;
    *(ulong *)(this_00 + 0x68) = CONCAT44(fVar5,fVar3);
    if ((ABS(fVar4 - fVar9) <= fVar2) && (ABS(fVar6 - fVar10) <= fVar2)) goto LAB_003815a4;
    SVar1 = this_00[0xb4];
    *(ulong *)(this_00 + 0x70) = CONCAT44(fVar6,fVar4);
  }
  if (SVar1 == (SceneObject)0x0) {
    SceneObject::RegisterForWorldBoundsUpdate(this_00);
    this_00[0xb4] = (SceneObject)0x1;
  }
LAB_003815a4:
  fVar2 = _DAT_00684434;
  fVar3 = *(float *)(this + 0x7c);
  *(float *)(this + 0x7c) = fVar3 + param_1;
  if (fVar2 < fVar3 + param_1) {
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x80) = 0;
  }
  return;
}


