/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a369c
 * Function: Caver::MagicParticleEmitterComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(MagicParticleEmitterComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicParticleEmitterComponent::PerformBindedAction(int) */

void __thiscall
Caver::MagicParticleEmitterComponent::PerformBindedAction
          (MagicParticleEmitterComponent *this,int param_1)

{
  ParticleEmitterComponent::PerformBindedAction((int)this + -0x10);
  return;
}


