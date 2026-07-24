/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00556308
 * Function: Caver::WhooshParticleEmitter::WhooshParticleEmitter
 * Signature: undefined __thiscall WhooshParticleEmitter(WhooshParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WhooshParticleEmitter::WhooshParticleEmitter() */

void __thiscall Caver::WhooshParticleEmitter::WhooshParticleEmitter(WhooshParticleEmitter *this)

{
  undefined *puVar1;
  
  ParticleEmitter::ParticleEmitter((ParticleEmitter *)this);
  puVar1 = PTR_vtable_007e6880;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined **)this = puVar1 + 0x10;
                    /* catch() { ... } // from try @ 00555dc8 with catch @ 00556334 */
  return;
}


