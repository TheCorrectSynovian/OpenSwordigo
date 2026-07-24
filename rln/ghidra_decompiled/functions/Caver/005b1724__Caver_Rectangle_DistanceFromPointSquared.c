/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1724
 * Function: Caver::Rectangle::DistanceFromPointSquared
 * Signature: undefined __thiscall DistanceFromPointSquared(Rectangle * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::DistanceFromPointSquared(Caver::Vector2 const&) const */

float __thiscall Caver::Rectangle::DistanceFromPointSquared(Rectangle *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)param_1;
  fVar5 = *(float *)this;
  if (fVar5 <= fVar1) {
    fVar3 = *(float *)(this + 4);
    fVar2 = *(float *)(param_1 + 4);
    fVar5 = fVar5 + *(float *)(this + 8);
    fVar4 = fVar3;
    if (fVar1 <= fVar5) {
      fVar5 = fVar1;
      if ((fVar3 <= fVar2) &&
         (fVar4 = fVar3 + *(float *)(this + 0xc), fVar2 <= fVar3 + *(float *)(this + 0xc))) {
        fVar4 = fVar2;
      }
      goto LAB_005b179c;
    }
    if (fVar2 < fVar3) goto LAB_005b179c;
  }
  else {
    fVar2 = *(float *)(param_1 + 4);
    fVar3 = *(float *)(this + 4);
    fVar4 = fVar3;
    if (fVar2 < fVar3) goto LAB_005b179c;
  }
  fVar4 = fVar3 + *(float *)(this + 0xc);
  if (fVar2 <= fVar3 + *(float *)(this + 0xc)) {
    fVar4 = fVar2;
  }
LAB_005b179c:
  return (fVar5 - fVar1) * (fVar5 - fVar1) + (fVar4 - fVar2) * (fVar4 - fVar2);
}


