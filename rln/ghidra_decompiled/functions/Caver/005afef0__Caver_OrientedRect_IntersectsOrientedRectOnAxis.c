/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005afef0
 * Function: Caver::OrientedRect::IntersectsOrientedRectOnAxis
 * Signature: undefined __thiscall IntersectsOrientedRectOnAxis(OrientedRect * this, OrientedRect * param_1, Vector2 * param_2, float * param_3, float * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrientedRect::IntersectsOrientedRectOnAxis(Caver::OrientedRect const&, Caver::Vector2
   const&, float*, float*) const */

undefined8 __thiscall
Caver::OrientedRect::IntersectsOrientedRectOnAxis
          (OrientedRect *this,OrientedRect *param_1,Vector2 *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
                    /* try { // try from 005aff44 to 006b0037 has its CatchHandler @ 005afea0 */
  fVar2 = *(float *)this * fVar4 + *(float *)(this + 4) * fVar5;
  fVar6 = *(float *)(this + 0x18) *
          ABS(fVar4 * *(float *)(this + 8) + fVar5 * *(float *)(this + 0xc)) +
          *(float *)(this + 0x1c) *
          ABS(fVar4 * *(float *)(this + 0x10) + fVar5 * *(float *)(this + 0x14));
  fVar3 = fVar4 * *(float *)param_1 + fVar5 * *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_1 + 0x18) *
          ABS(fVar4 * *(float *)(param_1 + 8) + fVar5 * *(float *)(param_1 + 0xc)) +
          *(float *)(param_1 + 0x1c) *
          ABS(fVar4 * *(float *)(param_1 + 0x10) + fVar5 * *(float *)(param_1 + 0x14));
  fVar4 = fVar2 + fVar6;
  fVar5 = fVar3 - fVar7;
  uVar1 = 0;
  if (fVar5 <= fVar4 + DAT_006837a4) {
    fVar2 = fVar2 - fVar6;
    fVar3 = fVar3 + fVar7;
    if (fVar2 + DAT_00683734 <= fVar3) {
      if (param_3 != (float *)0x0) {
                    /* catch() { ... } // from try @ 005afed8 with catch @ 005affc8 */
        *param_3 = fVar3 - fVar2;
      }
      if (param_4 != (float *)0x0) {
        *param_4 = fVar5 - fVar4;
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}


