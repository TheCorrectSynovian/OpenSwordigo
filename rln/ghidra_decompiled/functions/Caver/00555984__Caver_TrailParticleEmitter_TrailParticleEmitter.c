/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00555984
 * Function: Caver::TrailParticleEmitter::TrailParticleEmitter
 * Signature: undefined __thiscall TrailParticleEmitter(TrailParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TrailParticleEmitter::TrailParticleEmitter() */

void __thiscall Caver::TrailParticleEmitter::TrailParticleEmitter(TrailParticleEmitter *this)

{
  undefined *puVar1;
  
  ParticleEmitter::ParticleEmitter((ParticleEmitter *)this);
  puVar1 = PTR_vtable_007e5860;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


