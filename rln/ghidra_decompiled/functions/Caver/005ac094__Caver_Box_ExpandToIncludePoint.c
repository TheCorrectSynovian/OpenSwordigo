/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ac094
 * Function: Caver::Box::ExpandToIncludePoint
 * Signature: undefined __thiscall ExpandToIncludePoint(Box * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Box::ExpandToIncludePoint(Caver::Vector3 const&) */

void __thiscall Caver::Box::ExpandToIncludePoint(Box *this,Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)this;
  fVar3 = *(float *)(this + 0xc);
  if (fVar1 < fVar2) {
    fVar3 = (fVar2 + fVar3) - fVar1;
    *(float *)(this + 0xc) = fVar3;
    *(float *)this = fVar1;
    fVar2 = fVar1;
  }
  if (fVar2 + fVar3 < fVar1) {
    *(float *)(this + 0xc) = fVar1 - fVar2;
  }
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0x10);
  if (fVar1 < fVar2) {
    fVar3 = (fVar2 + fVar3) - fVar1;
    *(float *)(this + 0x10) = fVar3;
    *(float *)(this + 4) = fVar1;
    fVar2 = fVar1;
  }
  if (fVar2 + fVar3 < fVar1) {
    *(float *)(this + 0x10) = fVar1 - fVar2;
  }
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0x14);
  if (fVar1 < fVar2) {
    fVar3 = (fVar2 + fVar3) - fVar1;
    *(float *)(this + 0x14) = fVar3;
    *(float *)(this + 8) = fVar1;
    fVar2 = fVar1;
  }
  if (fVar2 + fVar3 < fVar1) {
    *(float *)(this + 0x14) = fVar1 - fVar2;
  }
  return;
}


