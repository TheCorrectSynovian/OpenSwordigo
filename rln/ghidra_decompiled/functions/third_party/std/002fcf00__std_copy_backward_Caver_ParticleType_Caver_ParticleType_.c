/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fcf00
 * Function: std::copy_backward<Caver::ParticleType*,Caver::ParticleType*>
 * Signature: ParticleType * copy_backward<Caver::ParticleType*,Caver::ParticleType*>(ParticleType * param_1, ParticleType * param_2, ParticleType * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ParticleType *
std::copy_backward<Caver::ParticleType*,Caver::ParticleType*>
          (ParticleType *param_1,ParticleType *param_2,ParticleType *param_3)

{
  ParticleType *pPVar1;
  
  pPVar1 = (ParticleType *)
           (*(code *)PTR_copy_backward<Caver::ParticleType*,Caver::ParticleType*>_007e0fb0)();
  return pPVar1;
}


