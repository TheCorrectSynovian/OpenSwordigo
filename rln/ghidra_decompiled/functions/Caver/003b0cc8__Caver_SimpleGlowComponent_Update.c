/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b0cc8
 * Function: Caver::SimpleGlowComponent::Update
 * Signature: undefined __thiscall Update(SimpleGlowComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::Update(float) */

void __thiscall Caver::SimpleGlowComponent::Update(SimpleGlowComponent *this,float param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = DAT_00688c10;
  dVar2 = DAT_00688608;
  dVar1 = DAT_00684790;
  fVar4 = *(float *)(this + 0xd8);
  if (fVar4 <= DAT_006883d0) {
    if (DAT_00683734 < *(float *)(this + 0xd0)) {
      fVar4 = *(float *)(this + 0xd4);
      *(float *)(this + 0xd4) = fVar4 + param_1;
      fVar5 = *(float *)(this + 0xcc);
      fVar4 = sinf((float)((double)((fVar4 + param_1) / *(float *)(this + 0xd0)) * dVar1 + dVar2));
      *(float *)(this + 200) = 1.0 - fVar5 * (fVar4 * 0.5 + 0.5);
    }
  }
  else {
    fVar5 = *(float *)(this + 0xdc);
    if (fVar5 <= param_1) {
      *(float *)(this + 200) = fVar4;
      *(undefined8 *)(this + 0xd8) = uVar3;
    }
    else {
      *(float *)(this + 0xdc) = fVar5 - param_1;
      *(float *)(this + 200) =
           *(float *)(this + 200) + ((fVar4 - *(float *)(this + 200)) / fVar5) * param_1;
    }
  }
  return;
}


