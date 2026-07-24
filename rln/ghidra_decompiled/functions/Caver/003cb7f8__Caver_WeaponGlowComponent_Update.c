/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cb7f8
 * Function: Caver::WeaponGlowComponent::Update
 * Signature: undefined __thiscall Update(WeaponGlowComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::WeaponGlowComponent::Update(float) */

float __thiscall Caver::WeaponGlowComponent::Update(WeaponGlowComponent *this,float param_1)

{
  if (this[0x88] != (WeaponGlowComponent)0x0) {
    param_1 = (float)UpdateParticleEmitter(this + -0x18);
    this[0x88] = (WeaponGlowComponent)0x0;
  }
  return param_1;
}


