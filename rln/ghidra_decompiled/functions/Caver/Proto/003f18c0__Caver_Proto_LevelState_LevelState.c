/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f18c0
 * Function: Caver::Proto::LevelState::LevelState
 * Signature: undefined __thiscall LevelState(LevelState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::LevelState() */

void __thiscall Caver::Proto::LevelState::LevelState(LevelState *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e4a60;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_level_name__007e5098;
  this[0x18] = (LevelState)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x28) = 0xffffffff;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


