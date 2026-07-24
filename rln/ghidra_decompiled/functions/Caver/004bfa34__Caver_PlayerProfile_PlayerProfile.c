/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bfa34
 * Function: Caver::PlayerProfile::PlayerProfile
 * Signature: undefined __thiscall PlayerProfile(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PlayerProfile::PlayerProfile() */

void __thiscall Caver::PlayerProfile::PlayerProfile(PlayerProfile *this)

{
  undefined *puVar1;
  PlayerProfile *pPVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  puVar1 = PTR_DAT_007e5de8;
  this[0x68] = (PlayerProfile)0x0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
                    /* try { // try from 004bfa4c to 005bfa9b has its CatchHandler @ 004bf910 */
  puVar1 = puVar1 + 0x18;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined **)(this + 0x30) = puVar1;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x38) = 1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined **)(this + 0x20) = puVar1;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x50) = puVar1;
  *(undefined **)(this + 0x48) = puVar1;
  *(undefined **)(this + 0x60) = puVar1;
  *(undefined **)(this + 0x58) = puVar1;
  pPVar2 = this + 0x98;
  *(undefined8 *)pPVar2 = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(PlayerProfile **)(this + 0xa8) = pPVar2;
  *(PlayerProfile **)(this + 0xb0) = pPVar2;
  this[0xc0] = (PlayerProfile)0x0;
  return;
}


