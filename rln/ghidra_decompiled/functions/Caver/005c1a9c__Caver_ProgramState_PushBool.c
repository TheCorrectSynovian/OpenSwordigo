/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1a9c
 * Function: Caver::ProgramState::PushBool
 * Signature: undefined __thiscall PushBool(ProgramState * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::PushBool(bool) */

void __thiscall Caver::ProgramState::PushBool(ProgramState *this,bool param_1)

{
  lua_pushboolean(*(lua_State **)this,(uint)param_1);
  return;
}


