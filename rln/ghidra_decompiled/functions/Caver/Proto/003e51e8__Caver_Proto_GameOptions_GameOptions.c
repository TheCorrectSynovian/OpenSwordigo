/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e51e8
 * Function: Caver::Proto::GameOptions::GameOptions
 * Signature: undefined __thiscall GameOptions(GameOptions * this, GameOptions * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&) */

void __thiscall Caver::Proto::GameOptions::GameOptions(GameOptions *this,GameOptions *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_vtable_007e5708;
  *(undefined4 *)(this + 0x20) = 4;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(this + 0x48) = 0x101;
  *(GameOptions **)(this + 0x10) = this + 0x28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x6a] = (GameOptions)0x0;
  *(undefined8 *)(this + 0x4c) = uVar2;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined2 *)(this + 0x68) = 0;
  MergeFrom(this,param_1);
  return;
}


