/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b12dc
 * Function: Caver::Quaternion::FromRotationMatrix
 * Signature: undefined __thiscall FromRotationMatrix(Quaternion * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quaternion::FromRotationMatrix(Caver::Matrix4 const&) */

void __thiscall Caver::Quaternion::FromRotationMatrix(Quaternion *this,Matrix4 *param_1)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x28);
  fVar4 = fVar1 + fVar2 + fVar3;
  if (fVar4 <= 0.0) {
                    /* try { // try from 005b136c to 006b13e7 has its CatchHandler @ 005b1588 */
    if ((fVar1 <= fVar2) || (fVar1 <= fVar3)) {
      if (fVar2 <= fVar3) {
        fVar2 = ((fVar3 + 1.0) - fVar1) - fVar2;
        fVar5 = SQRT(fVar2);
        if (NAN(fVar5)) {
          fVar5 = sqrtf(fVar2);
        }
        fVar4 = 1.0 / (fVar5 + fVar5);
        fVar1 = fVar4 * (*(float *)(this + 0x10) - *(float *)(this + 4));
        fVar3 = fVar4 * (*(float *)(this + 8) + *(float *)(this + 0x20));
        fVar4 = fVar4 * (*(float *)(this + 0x18) + *(float *)(this + 0x24));
        fVar2 = (fVar5 + fVar5) * 0.25;
      }
      else {
        fVar3 = ((fVar2 + 1.0) - fVar1) - fVar3;
        fVar1 = SQRT(fVar3);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(fVar3);
        }
                    /* try { // try from 005b1428 to 006b144f has its CatchHandler @ 005b150c */
        fVar2 = 1.0 / (fVar1 + fVar1);
        fVar4 = (fVar1 + fVar1) * 0.25;
        fVar1 = fVar2 * (*(float *)(this + 8) - *(float *)(this + 0x20));
        fVar3 = fVar2 * (*(float *)(this + 4) + *(float *)(this + 0x10));
                    /* try { // try from 005b1450 to 006b15ab has its CatchHandler @ 005b126c */
        fVar2 = fVar2 * (*(float *)(this + 0x18) + *(float *)(this + 0x24));
      }
      goto LAB_005b13cc;
    }
    fVar3 = ((fVar1 + 1.0) - fVar2) - fVar3;
    fVar1 = SQRT(fVar3);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar3);
    }
    fVar2 = 1.0 / (fVar1 + fVar1);
    fVar3 = (fVar1 + fVar1) * 0.25;
    fVar4 = *(float *)(this + 4) + *(float *)(this + 0x10);
    fVar5 = *(float *)(this + 8) + *(float *)(this + 0x20);
    fVar1 = fVar2 * (*(float *)(this + 0x24) - *(float *)(this + 0x18));
  }
  else {
    fVar4 = fVar4 + 1.0;
    fVar1 = SQRT(fVar4);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar4);
    }
    fVar2 = 1.0 / (fVar1 + fVar1);
    fVar1 = (fVar1 + fVar1) * 0.25;
    fVar4 = *(float *)(this + 8) - *(float *)(this + 0x20);
    fVar5 = *(float *)(this + 0x10) - *(float *)(this + 4);
    fVar3 = fVar2 * (*(float *)(this + 0x24) - *(float *)(this + 0x18));
                    /* try { // try from 005b135c to 006b1367 has its CatchHandler @ 005b157c */
  }
  fVar4 = fVar2 * fVar4;
  fVar2 = fVar2 * fVar5;
LAB_005b13cc:
  *in_x8 = fVar1;
  in_x8[1] = -fVar3;
  in_x8[2] = -fVar4;
  in_x8[3] = -fVar2;
  return;
}


