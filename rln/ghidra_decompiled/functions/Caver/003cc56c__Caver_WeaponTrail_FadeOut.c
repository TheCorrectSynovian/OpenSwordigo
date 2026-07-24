/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc56c
 * Function: Caver::WeaponTrail::FadeOut
 * Signature: undefined __thiscall FadeOut(WeaponTrail * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrail::FadeOut(float) */

void __thiscall Caver::WeaponTrail::FadeOut(WeaponTrail *this,float param_1)

{
  this[0x24] = (WeaponTrail)0x1;
  *(float *)(this + 0x28) = param_1;
  return;
}


