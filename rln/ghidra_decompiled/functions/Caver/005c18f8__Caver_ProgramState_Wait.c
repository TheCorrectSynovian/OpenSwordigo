/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c18f8
 * Function: Caver::ProgramState::Wait
 * Signature: undefined __thiscall Wait(ProgramState * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::Wait(float) */

void __thiscall Caver::ProgramState::Wait(ProgramState *this,float param_1)

{
  *(undefined4 *)(this + 0x48) = 1;
  *(float *)(this + 0x4c) = param_1;
  return;
}


