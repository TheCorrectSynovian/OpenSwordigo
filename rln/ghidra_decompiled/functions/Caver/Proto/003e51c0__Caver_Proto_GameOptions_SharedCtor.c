/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e51c0
 * Function: Caver::Proto::GameOptions::SharedCtor
 * Signature: undefined __thiscall SharedCtor(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::SharedCtor() */

void __thiscall Caver::Proto::GameOptions::SharedCtor(GameOptions *this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x6a] = (GameOptions)0x0;
  *(undefined2 *)(this + 0x48) = 0x101;
  *(undefined8 *)(this + 0x4c) = uVar1;
  *(undefined2 *)(this + 0x68) = 0;
  return;
}


