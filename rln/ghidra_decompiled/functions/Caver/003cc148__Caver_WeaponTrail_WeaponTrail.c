/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc148
 * Function: Caver::WeaponTrail::WeaponTrail
 * Signature: undefined __thiscall WeaponTrail(WeaponTrail * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrail::WeaponTrail() */

void __thiscall Caver::WeaponTrail::WeaponTrail(WeaponTrail *this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  this[0x24] = (WeaponTrail)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0x3f80000000ffffff;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


