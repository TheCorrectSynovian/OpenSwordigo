/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cb7c8
 * Function: Caver::WeaponGlowComponent::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::Update(float) */

float Caver::WeaponGlowComponent::Update(float param_1)

{
  WeaponGlowComponent *in_x0;
  
  if (in_x0[0xa0] != (WeaponGlowComponent)0x0) {
    param_1 = (float)UpdateParticleEmitter(in_x0);
    in_x0[0xa0] = (WeaponGlowComponent)0x0;
  }
  return param_1;
}


