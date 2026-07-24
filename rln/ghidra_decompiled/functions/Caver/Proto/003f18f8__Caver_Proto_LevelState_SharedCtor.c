/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f18f8
 * Function: Caver::Proto::LevelState::SharedCtor
 * Signature: undefined __thiscall SharedCtor(LevelState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::SharedCtor() */

void __thiscall Caver::Proto::LevelState::SharedCtor(LevelState *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_level_name__007e5098;
  this[0x18] = (LevelState)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


