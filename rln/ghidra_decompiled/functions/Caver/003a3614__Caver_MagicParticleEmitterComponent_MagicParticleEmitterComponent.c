/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3614
 * Function: Caver::MagicParticleEmitterComponent::MagicParticleEmitterComponent
 * Signature: undefined __thiscall MagicParticleEmitterComponent(MagicParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicParticleEmitterComponent::MagicParticleEmitterComponent() */

void __thiscall
Caver::MagicParticleEmitterComponent::MagicParticleEmitterComponent
          (MagicParticleEmitterComponent *this)

{
  undefined *puVar1;
  
  ParticleEmitterComponent::ParticleEmitterComponent((ParticleEmitterComponent *)this);
  puVar1 = PTR_vtable_007e5508;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  return;
}


