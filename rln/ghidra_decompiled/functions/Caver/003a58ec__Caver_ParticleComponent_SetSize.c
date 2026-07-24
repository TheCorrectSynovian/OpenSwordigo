/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a58ec
 * Function: Caver::ParticleComponent::SetSize
 * Signature: undefined __thiscall SetSize(ParticleComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::SetSize(float) */

void __thiscall Caver::ParticleComponent::SetSize(ParticleComponent *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(this + 0x78);
  *(float *)(this + 0x80) = param_1;
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0x54) / *(float *)(lVar1 + 0x58);
    if (fVar3 <= 1.0) {
      fVar3 = fVar3 * param_1;
      fVar2 = param_1;
    }
    else {
      fVar2 = param_1 / fVar3;
      fVar3 = param_1;
    }
    *(float *)(this + 0x84) = fVar3;
    *(float *)(this + 0x88) = fVar2;
  }
  return;
}


