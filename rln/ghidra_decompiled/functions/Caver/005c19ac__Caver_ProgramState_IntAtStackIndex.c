/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c19ac
 * Function: Caver::ProgramState::IntAtStackIndex
 * Signature: undefined __thiscall IntAtStackIndex(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::IntAtStackIndex(int) */

void __thiscall Caver::ProgramState::IntAtStackIndex(ProgramState *this,int param_1)

{
  lua_tointeger(*(lua_State **)this,param_1);
  return;
}


