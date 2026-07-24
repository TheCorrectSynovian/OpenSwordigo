/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b0dac
 * Function: Caver::SimpleGlowComponent::Update
 * Signature: undefined __thiscall Update(SimpleGlowComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SimpleGlowComponent::Update(float) */

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
  fVar4 = *(float *)(this + 0xc0);
  if (fVar4 <= DAT_006883d0) {
    if (DAT_00683734 < *(float *)(this + 0xb8)) {
      fVar4 = *(float *)(this + 0xbc);
      *(float *)(this + 0xbc) = fVar4 + param_1;
      fVar5 = *(float *)(this + 0xb4);
      fVar4 = sinf((float)((double)((fVar4 + param_1) / *(float *)(this + 0xb8)) * dVar1 + dVar2));
      *(float *)(this + 0xb0) = 1.0 - fVar5 * (fVar4 * 0.5 + 0.5);
    }
  }
  else {
    fVar5 = *(float *)(this + 0xc4);
    if (fVar5 <= param_1) {
      *(float *)(this + 0xb0) = fVar4;
      *(undefined8 *)(this + 0xc0) = uVar3;
    }
    else {
      *(float *)(this + 0xc4) = fVar5 - param_1;
      *(float *)(this + 0xb0) =
           *(float *)(this + 0xb0) + ((fVar4 - *(float *)(this + 0xb0)) / fVar5) * param_1;
    }
  }
  return;
}


