/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc57c
 * Function: Caver::WeaponTrail::FadeIn
 * Signature: undefined __thiscall FadeIn(WeaponTrail * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrail::FadeIn(float) */

void __thiscall Caver::WeaponTrail::FadeIn(WeaponTrail *this,float param_1)

{
  *(undefined4 *)(this + 0x30) = 0;
  *(float *)(this + 0x34) = param_1;
  return;
}


