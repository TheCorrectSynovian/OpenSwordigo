/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003800cc
 * Function: Caver::PhysicsObjectState::UpdateSpeedComponents
 * Signature: undefined __thiscall UpdateSpeedComponents(PhysicsObjectState * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PhysicsObjectState::UpdateSpeedComponents(float) */

void __thiscall
Caver::PhysicsObjectState::UpdateSpeedComponents(PhysicsObjectState *this,float param_1)

{
  PhysicsObjectState PVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (this[0x74] == (PhysicsObjectState)0x0) {
    return;
  }
  if ((this[100] != (PhysicsObjectState)0x0) &&
     (fVar6 = *(float *)(*(long *)this + 0x68), fVar8 = *(float *)(*(long *)this + 0x6c),
     DAT_00683734 < fVar6 * fVar6 + fVar8 * fVar8)) {
    this[100] = (PhysicsObjectState)0x0;
  }
  uVar4 = _UNK_006888e8;
  uVar3 = _DAT_006888e0;
  fVar6 = _DAT_00684434;
  if (((_DAT_00684434 <= *(float *)(this + 8)) || (fVar8 = *(float *)(this + 0x14), fVar8 <= 0.0))
     || (this[0x18] != (PhysicsObjectState)0x0)) {
    plVar5 = *(long **)(this + 0x20);
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x54) = uVar4;
    *(undefined8 *)(this + 0x4c) = uVar3;
    if ((plVar5 != (long *)0x0) &&
       (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  else {
    *(float *)(this + 0x50) = fVar8;
    *(float *)(this + 0x54) = fVar8;
    *(uint *)(this + 0x4c) = *(uint *)(this + 0x10);
    *(uint *)(this + 0x58) = *(uint *)(this + 0x10) ^ 0x80000000;
  }
  fVar8 = 0.0;
  fVar7 = 0.0;
  if (this[0x65] == (PhysicsObjectState)0x0) {
    if (((DAT_00683944 <= *(float *)(this + 8)) || (this[0x18] != (PhysicsObjectState)0x0)) ||
       ((this[0x75] != (PhysicsObjectState)0x0 ||
        (((DAT_00683944 < ABS(*(float *)(this + 0x68)) ||
          (DAT_00683944 < ABS(*(float *)(this + 0x6c) + 1.0))) ||
         (*(float *)(this + 0x30) <= DAT_0068493c)))))) {
      fVar8 = (float)*(undefined8 *)(this + 0x68) * *(float *)(this + 0x70);
      fVar7 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20) * *(float *)(this + 0x70);
    }
    else {
      fVar8 = -((float)*(undefined8 *)(this + 0x10) * *(float *)(this + 0x70));
      fVar7 = -((float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * *(float *)(this + 0x70));
    }
  }
  fVar9 = param_1 * fVar8 + *(float *)(*(long *)this + 0x68);
  fVar8 = param_1 * fVar7 + *(float *)(*(long *)this + 0x6c);
  fVar7 = fVar9 * *(float *)(this + 0x54) + fVar8 * *(float *)(this + 0x58);
  *(float *)(this + 0x5c) = fVar7;
  *(float *)(this + 0x60) = fVar9 * *(float *)(this + 0x4c) + fVar8 * *(float *)(this + 0x50);
  if (this[0x7c] == (PhysicsObjectState)0x0) {
    if ((fVar6 <= *(float *)(this + 8)) || (*(float *)(this + 0x14) <= 0.0)) {
      fVar6 = *(float *)(this + 0x30);
      if (fVar6 < 1.0) {
        fVar6 = param_1 * 0.5 + fVar6;
        *(float *)(this + 0x30) = fVar6;
        if (1.0 < fVar6) {
          fVar6 = 1.0;
          *(undefined4 *)(this + 0x30) = 0x3f800000;
        }
      }
    }
    else {
      fVar6 = *(float *)(this + 0x30);
    }
    fVar8 = *(float *)(this + 0x38);
    if (*(float *)(this + 0x3c) * fVar6 * param_1 < ABS(fVar7 - fVar8)) {
      fVar9 = 1.0;
      if (fVar8 - fVar7 <= 0.0) {
        fVar9 = -1.0;
      }
      fVar8 = fVar7 + *(float *)(this + 0x3c) * fVar6 * fVar9 * param_1;
    }
    *(float *)(this + 0x5c) = fVar8;
    PVar1 = this[0x44];
    goto joined_r0x00380340;
  }
  fVar6 = *(float *)(this + 0x80);
  if (0.0 <= fVar6) {
    if (fVar7 < fVar6) goto LAB_003802a4;
  }
  else if (fVar6 < fVar7) {
LAB_003802a4:
    *(float *)(this + 0x5c) = fVar6;
  }
  PVar1 = this[0x44];
joined_r0x00380340:
  if (PVar1 != (PhysicsObjectState)0x0) {
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x40);
  }
  return;
}


