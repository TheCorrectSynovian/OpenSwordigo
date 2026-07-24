/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1aa8
 * Function: Caver::ProgramState::PushValueAtStackIndex
 * Signature: undefined __thiscall PushValueAtStackIndex(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::PushValueAtStackIndex(int) */

void __thiscall Caver::ProgramState::PushValueAtStackIndex(ProgramState *this,int param_1)

{
  lua_pushvalue(*(lua_State **)this,param_1);
  return;
}


