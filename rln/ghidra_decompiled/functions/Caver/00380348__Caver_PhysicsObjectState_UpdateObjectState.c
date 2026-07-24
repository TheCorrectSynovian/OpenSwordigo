/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00380348
 * Function: Caver::PhysicsObjectState::UpdateObjectState
 * Signature: undefined __thiscall UpdateObjectState(PhysicsObjectState * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PhysicsObjectState::UpdateObjectState(float) */

void __thiscall Caver::PhysicsObjectState::UpdateObjectState(PhysicsObjectState *this,float param_1)

{
  PhysicsObjectState PVar1;
  long lVar2;
  long lVar3;
  SceneObject *this_00;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float local_40;
  float local_3c;
  undefined8 uVar8;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (this[0x74] != (PhysicsObjectState)0x0) {
    fVar4 = *(float *)(this + 0x48);
    fVar7 = (float)*(undefined8 *)(this + 0x54) * *(float *)(this + 0x5c) +
            (float)*(undefined8 *)(this + 0x4c) * *(float *)(this + 0x60);
    fVar9 = (float)((ulong)*(undefined8 *)(this + 0x54) >> 0x20) * *(float *)(this + 0x5c) +
            (float)((ulong)*(undefined8 *)(this + 0x4c) >> 0x20) * *(float *)(this + 0x60);
    uVar8 = CONCAT44(fVar9,fVar7);
    if (_LAB_00688900 < fVar4) {
      uVar8 = CONCAT44(fVar9 - fVar9 * fVar4 * param_1,fVar7 - fVar7 * fVar4 * param_1);
    }
    fVar10 = *(float *)(this + 0x34);
    fVar7 = (float)uVar8;
    fVar9 = (float)((ulong)uVar8 >> 0x20);
    fVar4 = fVar7 * fVar7 + fVar9 * fVar9;
    if (fVar10 * fVar10 < fVar4) {
      fVar6 = SQRT(fVar4);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar4);
      }
      uVar8 = CONCAT44(fVar9 * (fVar10 / fVar6),fVar7 * (fVar10 / fVar6));
    }
    if (*(Vector2 **)(this + 0x20) == (Vector2 *)0x0) {
      uVar5 = *(undefined8 *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar5 >> 0x20),
                       (float)uVar8 + (float)uVar5);
    }
    else {
      SceneObject::VelocityAtWorldPoint(*(Vector2 **)(this + 0x20));
      fVar4 = local_3c + -1.0;
      if (-1.0 <= local_3c) {
        fVar4 = local_3c;
      }
      *(float *)(this + 0x2c) = fVar4;
      fVar4 = *(float *)(this + 0x28);
      fVar7 = *(float *)(this + 0x3c) * 4.0 * *(float *)(this + 0x30);
      if (fVar7 * param_1 < ABS(fVar4 - local_40)) {
        fVar9 = 1.0;
        if (local_40 - fVar4 <= 0.0) {
          fVar9 = -1.0;
        }
        local_40 = fVar4 + fVar7 * fVar9 * param_1;
      }
      *(float *)(this + 0x28) = local_40;
    }
    fVar4 = DAT_00683488;
    this_00 = *(SceneObject **)this;
    *(undefined8 *)(this_00 + 0x68) = uVar8;
    fVar7 = *(float *)(this_00 + 0x70) + ((float)uVar8 + *(float *)(this + 0x28)) * param_1;
    fVar9 = *(float *)(this_00 + 0x74) +
            ((float)((ulong)uVar8 >> 0x20) + *(float *)(this + 0x2c)) * param_1;
    if ((fVar4 < ABS(fVar7 - *(float *)(this_00 + 0x70))) ||
       (fVar4 < ABS(fVar9 - *(float *)(this_00 + 0x74)))) {
      *(float *)(this_00 + 0x70) = fVar7;
      *(float *)(this_00 + 0x74) = fVar9;
      if (this_00[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(this_00);
        this_00[0xb4] = (SceneObject)0x1;
        this_00 = *(SceneObject **)this;
      }
    }
    fVar7 = *(float *)(this_00 + 0x80) + *(float *)(this_00 + 0x84) * param_1;
    if ((fVar4 < ABS(fVar7 - *(float *)(this_00 + 0x80))) &&
       (*(float *)(this_00 + 0x80) = fVar7, this_00[0xb4] == (SceneObject)0x0)) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
      PVar1 = this[0x65];
      goto joined_r0x0038053c;
    }
  }
  PVar1 = this[0x65];
joined_r0x0038053c:
  if (PVar1 == (PhysicsObjectState)0x0) {
    *(ulong *)(this + 8) =
         CONCAT44(param_1 + (float)((ulong)*(undefined8 *)(this + 8) >> 0x20),
                  param_1 + (float)*(undefined8 *)(this + 8));
  }
  else {
    this[0x65] = (PhysicsObjectState)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


