/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1a90
 * Function: Caver::ProgramState::PushFloat
 * Signature: undefined __thiscall PushFloat(ProgramState * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::PushFloat(float) */

void __thiscall Caver::ProgramState::PushFloat(ProgramState *this,float param_1)

{
  lua_pushnumber(*(lua_State **)this,(double)param_1);
  return;
}


