/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a5098
 * Function: Caver::ParticleComponent::UpdateDimensions
 * Signature: undefined __thiscall UpdateDimensions(ParticleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::UpdateDimensions() */

void __thiscall Caver::ParticleComponent::UpdateDimensions(ParticleComponent *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(this + 0x78);
  if (lVar1 != 0) {
    fVar2 = *(float *)(this + 0x80);
    fVar4 = *(float *)(lVar1 + 0x54) / *(float *)(lVar1 + 0x58);
    if (fVar4 <= 1.0) {
      fVar4 = fVar2 * fVar4;
      fVar3 = fVar2;
    }
    else {
      fVar3 = fVar2 / fVar4;
      fVar4 = fVar2;
    }
    *(float *)(this + 0x84) = fVar4;
    *(float *)(this + 0x88) = fVar3;
  }
  return;
}


