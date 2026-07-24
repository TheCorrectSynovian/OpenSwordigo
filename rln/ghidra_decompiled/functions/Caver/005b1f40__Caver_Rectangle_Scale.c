/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1f40
 * Function: Caver::Rectangle::Scale
 * Signature: undefined __thiscall Scale(Rectangle * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::Scale(Caver::Vector2 const&) */

void __thiscall Caver::Rectangle::Scale(Rectangle *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)param_1;
  fVar4 = fVar1 * *(float *)this;
  *(float *)this = fVar4;
  fVar1 = fVar1 * *(float *)(this + 8);
  fVar3 = *(float *)(param_1 + 4) * *(float *)(this + 4);
  fVar2 = *(float *)(param_1 + 4) * *(float *)(this + 0xc);
  *(float *)(this + 4) = fVar3;
  *(float *)(this + 8) = fVar1;
  *(float *)(this + 0xc) = fVar2;
  if (fVar1 < 0.0) {
    *(float *)this = fVar4 + fVar1;
    *(float *)(this + 8) = -fVar1;
  }
  if (fVar2 < 0.0) {
    *(float *)(this + 4) = fVar3 + fVar2;
    *(float *)(this + 0xc) = -fVar2;
    return;
  }
  return;
}


