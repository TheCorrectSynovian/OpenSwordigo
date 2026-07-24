/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1a84
 * Function: Caver::ProgramState::PushInt
 * Signature: undefined __thiscall PushInt(ProgramState * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::PushInt(int) */

void __thiscall Caver::ProgramState::PushInt(ProgramState *this,int param_1)

{
  lua_pushinteger(*(lua_State **)this,(long)param_1);
  return;
}


