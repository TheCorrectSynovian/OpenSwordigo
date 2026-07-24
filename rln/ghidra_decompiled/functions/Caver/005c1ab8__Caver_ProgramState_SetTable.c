/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1ab8
 * Function: Caver::ProgramState::SetTable
 * Signature: undefined __thiscall SetTable(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::SetTable(int) */

void __thiscall Caver::ProgramState::SetTable(ProgramState *this,int param_1)

{
  lua_settable(*(lua_State **)this,param_1);
  return;
}


