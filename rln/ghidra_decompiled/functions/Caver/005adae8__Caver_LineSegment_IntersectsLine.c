/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005adae8
 * Function: Caver::LineSegment::IntersectsLine
 * Signature: undefined __thiscall IntersectsLine(LineSegment * this, LineSegment * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::LineSegment::IntersectsLine(Caver::LineSegment const&, float*, float*) const */

undefined8 __thiscall
Caver::LineSegment::IntersectsLine
          (LineSegment *this,LineSegment *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 4);
  fVar3 = *(float *)(this + 8) - *(float *)this;
  fVar8 = *(float *)(param_1 + 8) - *(float *)param_1;
  fVar4 = *(float *)(this + 0xc) - *(float *)(this + 4);
  fVar2 = fVar7 * fVar3 - fVar8 * fVar4;
  if ((DAT_00689310 < fVar2) && ((double)fVar2 < _LAB_006972f8)) {
    return 0;
  }
  fVar5 = *(float *)(this + 4) - *(float *)(param_1 + 4);
  fVar6 = *(float *)this - *(float *)param_1;
  fVar7 = (fVar8 * fVar5 - fVar7 * fVar6) / fVar2;
  uVar1 = 0;
  if ((_LAB_00688900 <= fVar7) && (fVar7 <= DAT_006972e0)) {
    if (param_2 != (float *)0x0) {
      *param_2 = fVar7;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = (fVar3 * fVar5 - fVar6 * fVar4) / fVar2;
    }
    uVar1 = 1;
  }
  return uVar1;
}


