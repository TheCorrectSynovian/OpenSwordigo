/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00380658
 * Function: Caver::PhysicsObjectState::HandleGroundCollision
 * Signature: undefined __thiscall HandleGroundCollision(PhysicsObjectState * this, CollisionMessageData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&) */

void __thiscall
Caver::PhysicsObjectState::HandleGroundCollision
          (PhysicsObjectState *this,CollisionMessageData *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  long *plVar5;
  long lVar6;
  SceneObject *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar4 = DAT_00684430;
  fVar3 = DAT_00683734;
  if (this[0x74] != (PhysicsObjectState)0x0) {
    fVar7 = *(float *)(param_1 + 0x28);
    fVar9 = *(float *)(param_1 + 0x2c);
    fVar8 = *(float *)(param_1 + 0x30);
    if (*(float *)(param_1 + 0x18) * DAT_00688904 * fVar7 +
        *(float *)(param_1 + 0x1c) * DAT_00688904 * fVar9 <= fVar8 + DAT_00683944) {
      if (*(float *)(this + 8) <= DAT_00683734) {
        fVar10 = *(float *)(this + 0x10);
        fVar11 = *(float *)(this + 0x14);
        fVar12 = fVar10 * fVar7 + fVar11 * fVar9;
        if ((fVar12 <= DAT_006837a4) && (DAT_00687f40 <= fVar12)) {
          fVar12 = -fVar10;
          if (0.0 <= fVar10 * fVar9 - fVar7 * fVar11) {
            fVar12 = fVar10;
            fVar11 = -fVar11;
          }
          fVar10 = fVar7;
          fVar13 = fVar11;
          if (DAT_00683734 <= ABS(fVar9)) {
            fVar10 = fVar9 - (fVar7 / -fVar9) * fVar7;
            fVar13 = fVar12 - (fVar7 / -fVar9) * fVar11;
          }
          if (DAT_00683734 <= ABS(fVar13)) {
            fVar8 = (fVar10 * fVar8) / fVar13;
            fVar7 = fVar11;
            fVar9 = fVar12;
          }
        }
      }
      this_00 = *(SceneObject **)this;
      fVar11 = (float)NEON_fminnm(-*(float *)(this + 0x78),DAT_006846cc);
      if (DAT_00684430 <= fVar9) {
        fVar11 = -*(float *)(this + 0x78);
      }
      fVar12 = *(float *)(this_00 + 0x68) * fVar7 + *(float *)(this_00 + 0x6c) * fVar9;
      fVar10 = *(float *)(this_00 + 0x6c) * fVar7 - *(float *)(this_00 + 0x68) * fVar9;
      fVar11 = fVar11 * fVar12;
      if (DAT_00683944 <= fVar12) {
        fVar11 = fVar12;
      }
      if (this[0x75] != (PhysicsObjectState)0x0) {
        *(float *)(this_00 + 0x84) = fVar10 / (*(float *)(*(long *)param_1 + 0x170) * 0.5);
      }
      *(float *)(this_00 + 0x68) = fVar10 * -fVar9 + fVar11 * fVar7;
      *(float *)(this_00 + 0x6c) = fVar10 * fVar7 + fVar11 * fVar9;
      fVar7 = fVar7 * fVar8 + *(float *)(this_00 + 0x70);
      fVar8 = fVar9 * fVar8 + *(float *)(this_00 + 0x74);
      if ((DAT_00683488 < ABS(fVar7 - *(float *)(this_00 + 0x70))) ||
         (DAT_00683488 < ABS(fVar8 - *(float *)(this_00 + 0x74)))) {
        *(float *)(this_00 + 0x70) = fVar7;
        *(float *)(this_00 + 0x74) = fVar8;
        if (this_00[0xb4] == (SceneObject)0x0) {
          SceneObject::RegisterForWorldBoundsUpdate(this_00);
          this_00[0xb4] = (SceneObject)0x1;
        }
      }
      lVar6 = *(long *)(param_1 + 8);
      this[0x19] = *(PhysicsObjectState *)(lVar6 + 0x188);
      if (*(char *)(lVar6 + 0x17a) != '\0') {
        lVar6 = *(long *)(lVar6 + 0x28);
        if (lVar6 != 0) {
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        }
        plVar5 = *(long **)(this + 0x20);
        *(long *)(this + 0x20) = lVar6;
        if ((plVar5 != (long *)0x0) &&
           (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      fVar8 = *(float *)(param_1 + 0x2c);
      if ((fVar3 < *(float *)(this + 8)) || (*(float *)(this + 0x14) < fVar8)) {
        uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x184);
        this[0x18] = (PhysicsObjectState)(fVar8 < fVar4);
        *(undefined4 *)(this + 8) = 0;
        *(undefined4 *)(this + 0x30) = uVar1;
        if (fVar8 >= fVar4) {
          *(undefined4 *)(this + 0xc) = 0;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x28);
        *(float *)(this + 0x14) = fVar8;
        *(undefined4 *)(this + 0x10) = uVar1;
        fVar8 = *(float *)(param_1 + 0x2c);
      }
      if (((0.0 < fVar8) &&
          (lVar6 = *(long *)this,
          *(float *)(lVar6 + 0x68) * *(float *)(lVar6 + 0x68) +
          *(float *)(lVar6 + 0x6c) * *(float *)(lVar6 + 0x6c) < fVar3)) &&
         (*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
          *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) < fVar3)) {
        *(undefined2 *)(this + 100) = 0x101;
        *(undefined8 *)(lVar6 + 0x68) = 0;
      }
    }
  }
  return;
}


