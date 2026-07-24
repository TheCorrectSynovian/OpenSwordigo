/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00552044
 * Function: Caver::FountainParticleEmitter::FountainParticleEmitter
 * Signature: undefined __thiscall FountainParticleEmitter(FountainParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FountainParticleEmitter::FountainParticleEmitter() */

void __thiscall
Caver::FountainParticleEmitter::FountainParticleEmitter(FountainParticleEmitter *this)

{
  undefined *puVar1;
  
                    /* try { // try from 00552050 to 00652077 has its CatchHandler @ 00552818 */
  ParticleEmitter::ParticleEmitter((ParticleEmitter *)this);
  puVar1 = PTR_vtable_007e7060;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


