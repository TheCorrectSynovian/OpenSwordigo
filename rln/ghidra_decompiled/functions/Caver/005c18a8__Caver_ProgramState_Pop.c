/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c18a8
 * Function: Caver::ProgramState::Pop
 * Signature: undefined __thiscall Pop(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::Pop(int) */

void __thiscall Caver::ProgramState::Pop(ProgramState *this,int param_1)

{
  lua_settop(*(lua_State **)this,~param_1);
  return;
}


