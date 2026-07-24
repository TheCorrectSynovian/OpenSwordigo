/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b42c0
 * Function: Caver::GameOptions::GameOptions
 * Signature: undefined __thiscall GameOptions(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOptions::GameOptions() */

void __thiscall Caver::GameOptions::GameOptions(GameOptions *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined2 *)(this + 0x20) = 0x101;
  puVar1 = PTR_DAT_007e5de8;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x52] = (GameOptions)0x0;
  *(undefined8 *)(this + 0x24) = uVar2;
  *(undefined **)this = puVar1 + 0x18;
  *(undefined8 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x50) = 0;
  return;
}


