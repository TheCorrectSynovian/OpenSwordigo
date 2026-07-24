/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003805a0
 * Function: Caver::PhysicsObjectState::AdjustGroundCollisionVector
 * Signature: undefined __thiscall AdjustGroundCollisionVector(PhysicsObjectState * this, Vector2 * param_1, float * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectState::AdjustGroundCollisionVector(Caver::Vector2*, float*) */

void __thiscall
Caver::PhysicsObjectState::AdjustGroundCollisionVector
          (PhysicsObjectState *this,Vector2 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(float *)(this + 8) <= DAT_00683734) {
    fVar1 = *(float *)param_1;
    fVar2 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(this + 0x10);
    fVar6 = *(float *)(this + 0x14);
    fVar3 = fVar1 * fVar5 + fVar2 * fVar6;
    if ((fVar3 <= DAT_006837a4) && (DAT_00687f40 <= fVar3)) {
      fVar4 = *param_2;
      fVar3 = -fVar5;
      if (0.0 <= fVar2 * fVar5 - fVar1 * fVar6) {
        fVar3 = fVar5;
        fVar6 = -fVar6;
      }
      fVar5 = fVar6;
      if (DAT_00683734 <= ABS(fVar2)) {
        fVar5 = fVar1 / -fVar2;
        fVar1 = fVar2 - fVar1 * fVar5;
        fVar5 = fVar3 - fVar5 * fVar6;
      }
      if (DAT_00683734 <= ABS(fVar5)) {
        *(float *)param_1 = fVar6;
        *(float *)(param_1 + 4) = fVar3;
        *param_2 = (fVar4 * fVar1) / fVar5;
      }
    }
  }
  return;
}


