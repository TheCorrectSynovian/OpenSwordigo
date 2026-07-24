/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aa56c
 * Function: Caver::ParticleEmitterComponent::SetColor
 * Signature: undefined __thiscall SetColor(ParticleEmitterComponent * this, FloatColor * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::SetColor(Caver::FloatColor const&) */

void __thiscall
Caver::ParticleEmitterComponent::SetColor(ParticleEmitterComponent *this,FloatColor *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x158);
  if (lVar1 != 0) {
    FloatColor::GetHSLComponents(param_1,(float *)(lVar1 + 0xa8));
    *(undefined4 *)(lVar1 + 0xb4) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}


